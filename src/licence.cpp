#include "licence.h"
// #include <iostream>
#include <fstream>
#include <sstream>
#include <time.h>

bool Licence::generateLicenceFile(const std::string &file_path)
{
    std::ifstream serial_num_file(file_path);
    if (!serial_num_file)
    {
        std::cerr << "open file : " << file_path << " error !!" << std::endl;
        return false;
    }

    std::string tmp_serial_num;
    // set version
    lic_list_.set_version(LICENCE_VERSION);

    while (getline(serial_num_file, tmp_serial_num))
    {        
        std::cout << tmp_serial_num << std::endl;
        LICENCE::LicenceBase *lic_base = lic_list_.add_numbers();
        lic_base->set_serial_num(tmp_serial_num);
        lic_base->set_registed(false);
    }

    serial_num_file.close();

    
    return true;
}

bool Licence::parseLicenceFile(const std::string &file_path)
{
    std::ifstream in_licence_file(file_path, std::ios::binary);
    if (!in_licence_file)
    {
        std::cerr << "open file : " << file_path << " error !!" << std::endl;
        return false;
    }

    std::ostringstream tmp;
    tmp << in_licence_file.rdbuf();

    std::string licence_str = tmp.str();

    lic_list_.Clear();

    lic_list_.ParseFromString(licence_str);
#if 1
    for (auto it_lic = lic_list_.numbers().begin(); it_lic != lic_list_.numbers().end(); it_lic++)
    {
        std::cout << "parse: " << it_lic->serial_num() << std::endl;
        if (it_lic->registed())
        {
            time_t t_tm = it_lic->start_time();
            printf("\tstart_time: %s\n", asctime(localtime(&t_tm)));
            t_tm = it_lic->end_time();
            printf("\tend_time: %s\n", asctime(localtime(&t_tm)));
        }
    }

#endif

    in_licence_file.close();

    licence_file_path_ = file_path;

    return true;
}

bool Licence::isLicenceValid(const std::string &serial_num)
{
    for (auto it_lic = lic_list_.mutable_numbers()->begin(); it_lic != lic_list_.mutable_numbers()->end(); it_lic++)
    {
        if (serial_num == it_lic->serial_num()) {
            std::cout << "Bingo (find you): " << it_lic->serial_num() << std::endl;
            // update registed info
            // get current time
            time_t now_time = time(NULL);
            tm* t_tm = localtime(&now_time);
            printf("now date: %d/%d/%d\n", t_tm->tm_year+1900, t_tm->tm_mon+1, t_tm->tm_mday);

            if (!it_lic->registed()) {
                printf("\t not registed\n");
                it_lic->set_registed(true);
                                
                // set start time
                it_lic->set_start_time(now_time);
                
                // set end time
                // time_t time_offset = PROBATION_PERIOD * 24 * 60 * 60;
                time_t time_offset = 30;
                it_lic->set_end_time(now_time + time_offset);
            }
            else
            {
                printf("\t registed\n");
                if (now_time > it_lic->end_time())
                {
                    time_t start_tm = it_lic->start_time();
                    t_tm = localtime(&start_tm);
                    printf("registed date: %d/%d/%d %d:%d:%d\n", t_tm->tm_year+1900, t_tm->tm_mon+1, t_tm->tm_mday
                                                                , t_tm->tm_hour, t_tm->tm_min, t_tm->tm_sec);
                    printf("authorization period: %d days\n", PROBATION_PERIOD);
                    time_t end_tm = it_lic->end_time();
                    t_tm = localtime(&end_tm);
                    printf("stop authorization date: %d/%d/%d %d:%d:%d\n", t_tm->tm_year+1900, t_tm->tm_mon+1, t_tm->tm_mday
                                                                , t_tm->tm_hour, t_tm->tm_min, t_tm->tm_sec);
                    return false;
                }
            }
                        // save licence info to the file
            if (saveLicenceInfoToFile())
            {
                printf("\tsave licence info success\n");
                return true;
            }
            else
            {
                printf("save licence info failed\n");
                return false;
            }
        }
    }

    std::cout << "Not find the serial_num: " << serial_num << std::endl;

    return false;
}


bool Licence::saveLicenceInfoToFile(void)
{
    //generate licence file
    #if 1
    std::string licence_str;
    
    lic_list_.SerializeToString(&licence_str);

    // std::string licence_file_path(licence_file_path_);
    // licence_file_path += ".lic";

    std::ofstream licence_file(licence_file_path_, std::ios::binary);
    if (!licence_file)
    {
        std::cerr << "open file : " << licence_file_path_ << " error !!" << std::endl;
        return false;
    }

    licence_file << licence_str;

    licence_file.close();

    #else
    // std::string licence_str;
    char licence_array[60*1024];
    
    lic_list_.SerializeToArray(licence_array, lic_list_.ByteSizeLong());

    std::string licence_file_path(file_path);
    licence_file_path += ".lic";

    std::ofstream licence_file(licence_file_path);
    if (!licence_file)
    {
        std::cerr << "open file : " << file_path << " error !!" << std::endl;
        return false;
    }

    licence_file.write(licence_array, lic_list_.ByteSizeLong());
    
    licence_file.close();

    #endif

    return true;
}
#ifndef LICENCE_H_
#define LICENCE_H_

#include <iostream>
#include "../idl/licence.pb.h"

class Licence {
private:
#define LICENCE_VERSION "1.0.0"
#define PROBATION_PERIOD (90) // 90 days
public:

    // generate licence file according to the serial number.
    bool generateLicenceFile(const std::string &file_path);

    // parse licence file
    bool parseLicenceFile(const std::string &file_path);

    // check licence valid
    bool isLicenceValid(const std::string &serial_num);

private:
    bool saveLicenceInfoToFile(void);

private:
    LICENCE::LicenceList lic_list_;
    std::string licence_file_path_;
};

#endif
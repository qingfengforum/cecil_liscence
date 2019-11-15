#include <iostream>
#include <fstream>
#include <time.h>
#include <cstring>
using namespace std;

#define PROBATION_PERIOD 30 // day
#define FILE_PATH "./acer"

int main()
{
    #if 0
    // time_t now_time = time(NULL);
    // printf("now_time: %ld \n", now_time);
    // tm* t_tm = localtime(&now_time);
    // printf("local time is : %s\n", asctime(t_tm));

    // local time to seconds.
    // time_t mk_time = mktime(t_tm);
    // printf("mk_time: %ld \n", mk_time);
    #endif

    fstream f(FILE_PATH);

    if (f.good())
    {
        cout << " check outdate" << endl;
        // read from file
        ifstream fin(FILE_PATH);
        if (fin)
        {
            time_t deadline_time;
            fin >> deadline_time;
            printf("deadline time is : %s\n", asctime(localtime(&deadline_time)));
            // now_time
            time_t now_time = time(NULL);
            if (now_time > deadline_time)
            {
                cout << now_time << endl;
                cout << deadline_time << endl;
                printf("now:%s\n", asctime(localtime(&now_time)));
                printf("deadline:%s\n", asctime(localtime(&deadline_time)));

                cout << "software is outdate, please buy a lisence!" << endl;
            }
            fin.close();
        }
        else
        {
            cout << "something wrong when write file, please contact the developer!" << endl;
        }
    }
    else 
    {
        // fist in
        // now_time
        time_t now_time = time(NULL);
        // printf("now_time: %ld \n", now_time);
        tm* t_tm = localtime(&now_time);
        // printf("local time is : %s\n", asctime(t_tm));
        
        // deadline time
        // time_t deadline_offset = PROBATION_PERIOD * 24 * 60 * 60;
        time_t deadline_offset = 30;
        time_t deadline_time = now_time + deadline_offset;
        printf("deadline time is : %s\n", asctime(localtime(&deadline_time)));

        cout << "first use this software" << endl;
        // save to file
        ofstream fout(FILE_PATH);
        if (fout) 
        {
            fout << deadline_time << endl;
            // cout << "write something" << endl;
            fout.close();
        }
        else
        {
            cout << "something wrong when write file, please contact the developer!" << endl;
        }
    }


    return 0;
}
#include <iostream>
#include "licence.h"

#define SERIAL_NUM_FILE "../data/serialNumberList.txt"
#define LICENCE_FILE "../data/serialNumberList.txt.lic"

int main()
{
    Licence lic;
#if 0 // just need once
    if (lic.generateLicenceFile(SERIAL_NUM_FILE))
    {
        std::cout << "generate licence file success !!!" << std::endl;
    }
    else
    {
        std::cerr << "generate licence file error !!" << std::endl;
        return -1;
    }
#endif

    if (lic.parseLicenceFile(LICENCE_FILE))
    {
        std::cout << "parse licence file success !!!" << std::endl;
        if (lic.isLicenceValid("A20191224002"))
        {
            std::cout << "licence valid !!!" << std::endl;
        }
        else
        {
            std::cerr << "licence invalid !!" << std::endl;
            return -1;
        }
    }
    else
    {
        std::cerr << "paser licence file error !!" << std::endl;
        return -1;
    }



    return 0;
}
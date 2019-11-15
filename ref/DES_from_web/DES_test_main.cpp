#include <iostream>  
#include <fstream>  
#include <bitset>  
#include <string>  
using namespace std;  

#include "DES.h"

bitset<64> key;                // 64位密钥 

/**********************************************************************/  
/* 测试：                                                             */  
/*     1.将一个 64 位的字符串加密， 把密文写入文件 a.txt                  */  
/*     2.读取文件 a.txt 获得 64 位密文，解密之后再写入 b.txt              */  
/**********************************************************************/  
  
int main() {  
    string s = "romantic";  
    string k = "12345678";  
    bitset<64> plain = charToBitset(s.c_str());  
    key = charToBitset(k.c_str());  
    // 生成16个子密钥  
    generateKeys();     
    // 密文写入 a.txt  
    bitset<64> cipher = encrypt(plain);  
    fstream file1;  
    file1.open("./a.txt", ios::binary | ios::out);  
    file1.write((char*)&cipher,sizeof(cipher));  
    file1.close();  
  
    // 读文件 a.txt  
    bitset<64> temp;  
    file1.open("./a.txt", ios::binary | ios::in);  
    file1.read((char*)&temp, sizeof(temp));  
    file1.close();  
  
    // 解密，并写入文件 b.txt  
    bitset<64> temp_plain = decrypt(temp);  
    file1.open("./b.txt", ios::binary | ios::out);  
    file1.write((char*)&temp_plain,sizeof(temp_plain));  
    file1.close();  

    /* from file */
#if 0
    string k = "12345678";  
    key = charToBitset(k.c_str());  
    generateKeys();   // 生成16个子密钥  
  
    // 将文件 flower.jpg 加密到 cipher.txt 中  
    ifstream in;  
    ofstream out;  
    in.open("D://flower.jpg", ios::binary);  
    out.open("D://cipher.txt", ios::binary);  
    bitset<64> plain;  
    while(in.read((char*)&plain, sizeof(plain)))  
    {  
        bitset<64> cipher  = encrypt(plain);  
        out.write((char*)&cipher, sizeof(cipher));  
        plain.reset();  // 置0  
    }  
    in.close();  
    out.close();  
  
    // 解密 cipher.txt，并写入图片 flower1.jpg  
    in.open("D://cipher.txt", ios::binary);  
    out.open("D://flower1.jpg", ios::binary);  
    while(in.read((char*)&plain, sizeof(plain)))  
    {  
        bitset<64> temp  = decrypt(plain);  
        out.write((char*)&temp, sizeof(temp));  
        plain.reset();  // 置0  
    }  
    in.close();  
    out.close();  
#endif
  
    return 0;  
}  

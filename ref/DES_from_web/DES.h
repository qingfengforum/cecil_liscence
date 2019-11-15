#ifndef __DES_H__
#define __DES_H__

bitset<64> charToBitset(const char s[8]);

void generateKeys();

bitset<64> encrypt(bitset<64>& plain);

bitset<64> decrypt(bitset<64>& cipher);

#endif
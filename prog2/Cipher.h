#pragma once
#include <string>
#include <locale>
#include "CipherError.h"
using namespace std;
class Cipher
{
private:
    int key;
    void getValidKey(const string & k);
    void getValidOpenCipherText(wstring & ws);
public:
    Cipher() = delete;
    Cipher(const string k);
    wstring encrypt(wstring str);
    wstring decrypt(wstring str);
};
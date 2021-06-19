#pragma once
#include <vector>
#include <string>
#include <map>
#include <locale>
#include "Error.h"
using namespace std;
class modAlphaCipher
{
private:
    wstring numAlpha =L"АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
    map <char,int> alphaNum;
    vector <int> key;
    vector<int> convert(const wstring& s);
    wstring convert(const vector<int>& v);
    wstring getValidKey(const wstring & ws);
    wstring getValidOpenCipherText(const wstring & ws);

public:
    modAlphaCipher()=delete;
    modAlphaCipher(const wstring& skey);
    wstring encrypt(const wstring& open_text);
    wstring decrypt(const wstring& cipher_text);
};
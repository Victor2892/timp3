#pragma once
#include <stdexcept>
#include <string>
using namespace std;
class Error : public invalid_argument
{
public:
    Error() = delete;
    explicit Error(const string& what_arg) : invalid_argument(what_arg) {};
};

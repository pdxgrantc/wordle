#ifndef FILEDATA
#define FILEDATA

#include <iostream>
#include <string>

using namespace std;

class FileData
{
public:
    FileData();
private:
    string *answers;
    string *valid_guess;
};

#endif
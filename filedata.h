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
    string *dictionary;
    string *answers;
    string *valid_guess;

    void read_dictionary();
};

#endif
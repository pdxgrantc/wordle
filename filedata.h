#ifndef FILEDATA
#define FILEDATA

#include <iostream>
#include <string>

using namespace std;

class FileData
{
public:
    FileData();
    ~FileData();

private:
    int lines;
    string **dictionary;
    string *answers;
    string *valid_guess;

    void read_dictionary();
};

#endif
#include <iostream>
#include <string>
#include <fstream>
#include "filedata.h"

using namespace std;

FileData::FileData()
{
    cout << "Reading Files In:" << endl;

    ifstream myReadFile;
    myReadFile.open("./data_files/valid_guesses.txt");
    char output[100];
    if (myReadFile.is_open())
    {
        while (!myReadFile.eof())
        {

            myReadFile >> output;
            cout << output;
        }
    }
    myReadFile.close();
}

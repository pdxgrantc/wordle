#include <iostream>
#include <string>
#include <fstream>
#include "filedata.h"

using namespace std;

FileData::FileData()
{
    cout << "Reading Files In:" << endl;
    /*
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
    */
   read_dictionary();
}

void FileData::read_dictionary()
{
    fstream infile;
    infile.open("./data_files/dictionary.txt", ios::in);
    if (infile.is_open())
    { // checking whether the file is open
        string tp;
        //while (getline(infile, tp))
        getline(infile, tp);
        //{                       // read data from file object and put it into string.
            cout << tp << "\n"; // print the data of the string
        //}
        //infile.close(); // close the file object.
    }

    infile.close();
}

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

FileData::~FileData()
{
    cout << "destructor ran" << endl;
    for (int i = 0; i < lines; ++i)
    {
        delete [] dictionary[i];
    }
    delete [] dictionary;
}

void FileData::read_dictionary()
{
    fstream infile;
    infile.open("./data_files/dictionary.txt", ios::in);
    if (infile.is_open())
    { // checking whether the file is open
        string line;
        // while (getline(infile, tp))
        getline(infile, line);
        cout << line << "\n"; 
        lines = stoi(line);
        dictionary = new string *[lines];
        for (int i = 0; i < lines; ++i)
        {
            dictionary[i] = new string[2];
        }
        string test;
        getline(infile, test);
        cout << test << "\n"; 
        //{                       // read data from file object and put it into string.
        // print the data of the string
        //}
        // infile.close(); // close the file object.
    }

    infile.close();
}

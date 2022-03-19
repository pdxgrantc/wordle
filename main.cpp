#include <iostream>
#include <string>
#include <fstream>

#include "filedata.h"


using namespace std;

int main() {
    cout << "Hello World!" << endl;

    FileData *data = new FileData();
    delete data;

    return 0;
}


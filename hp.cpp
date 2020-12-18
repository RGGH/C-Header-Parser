#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string str[300]; // string array
    ifstream inFile("inputFile.txt");
    short loop = 0; //short for loop for input
    string line;    //this will contain the data read from the file

    if (!inFile)
    {
        cout << "Unable to find or open input file" << endl;
        return -1;
    }

    while (!inFile.eof()) // loop through text file

    {
        getline(inFile, line); //get one line from the file

        cout << line << endl; //and output it
        loop++;
    }

    inFile.close(); // close input file
    return 0;
}

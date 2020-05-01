// Name: Zach Miller
// Program: Lab6e - use input file to get data until all the numbers are read.

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
   char letter; // char
   int count=0;
   ifstream infile; // declare an input file
   infile.open("lab6f-data.txt"); //input file with data

     if (infile.fail()) // test if input file exists
    {
        cout << "ERROR - cannot open file! " << endl;
        exit(1); // terminate the program
    }

    infile.get (letter);
     while (! infile.eof())
     {
         cout << letter << endl;
         count++;
         infile.get (letter);
     }
     cout << "Total amount of char in the file: " << count << endl;
        return 0;
    infile.close();
}

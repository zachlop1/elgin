// Name: Zach Miller
// Program: Lab6e - use input file to get data until all the numbers are read.

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    int num1, count=0; // number variables
    ifstream infile; // declare an input file
    infile.open("lab6e-data.txt"); //input file with data

     if (infile.fail()) // test if input file exists
     {
        cout << "ERROR - cannot open file! " << endl;
        exit(1); // terminate the program
     }

   while (infile >> num1)
   {
        cout << num1 << endl;
        count++;
   }
     cout << "Total amount of numbers ion the file: " << count << endl;
        return 0;
}

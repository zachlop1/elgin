// Name: Zach Miller
// Program: Session 10 Lab

#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main ()
{
    int num;
    ifstream infile; // declare an input file
    infile.open("numbers.txt");
    infile.get (num);
    infile.close();
return 0;
}
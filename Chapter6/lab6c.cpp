// Name: Zach Miller
// Program: Lab6c - Append to an output file (song.txt)

#include <iostream> //io from user/screen
#include <fstream> // for io of files
#include <cstdlib> // for exit
using namespace std;

int rec_area (int rec_len, int rec_wid); // function declaration for area of rectangle

int main()
{
    int l,w,area;
    ofstream outfile; // declare an outfile
    outfile.open("song.txt" , ios::app); //output file and append

    if (outfile.fail()) //tes if input file exists
    {
cout << "ERROR - Cannot open file! File may not exist " << endl;
exit (1); //terminate the program
    }

    cout << "opening file " << endl;

    outfile << "Caught in a landslide, " << endl
            << "Love programming in C++ " << endl; //output to file

    cout << "Information added to the file." << endl;
    outfile.close(); // output to a file

    return 0;
}

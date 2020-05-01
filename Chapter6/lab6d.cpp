// Name: Zach Miller
// Program: Lab6d - Prompt the user for file name.

#include <iostream>
#include <fstream> // I/O of files
#include <cstdlib> // to exit the program
using namespace std;

int rec_area (int rec_len, int rec_wid); // function declaration for area of rectangle

int main() //Body of the main
{
    int l,w,area;
    char inFileName[16], outFileName[16]; // for filenames
    ifstream infile; // declaration for input file
    ofstream outfile; //declare an outfile

    cout << "Enter an input filename: " ;
    cin >> inFileName;
    cout << endl;
    cout << "Enter an output filename: " ;
    cin >> outFileName;

    infile.open (inFileName);
    if (infile.fail())
    {
        cout << "ERROR - File does not exist! " << endl;
        exit (1); //ends the programs
    } 
    
    outfile.open(outFileName); //output file
  

  infile >> l >> w ; //input length and width
  area = rec_area(l,w); // Function call
   
  cout << "The area is: " << area;

    outfile << "Your length was: " << l << endl
          << "Your width was: " << w << endl
          << "The area is: " << area << endl;
      outfile.close(); // output to a file
      infile.close(); //close the infile


    return 0;

}
int rec_area (int rec_len, int rec_wid) // Function heading
{
    return(rec_len * rec_wid); //area = Length * width
}
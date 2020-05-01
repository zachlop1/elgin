// Name: Zach Miller
// Program: Lab6a - Output to a file.

#include <iostream>
#include <fstream>
using namespace std;

int rec_area (int rec_len, int rec_wid); // function declaration for area of rectangle

int main() //Body of the main
{
    int l,w,area;
    ofstream outfile; //declare an outfile
    outfile.open("results.txt"); //output file
  
  cout << "Enter the length: ";
  cin >> l;
  cout << "Enter the width: ";
  cin >> w;
  area = rec_area(l,w); // Function call
  
  cout << "The area is: " << area;

    outfile << "Your length was: " << l << endl
          << "Your width was: " << endl
          << "The area is: " << area << endl;
      outfile.close();

    return 0;

}
int rec_area (int rec_len, int rec_wid) // Function heading
{
    return(rec_len * rec_wid); //area = Length * width
}
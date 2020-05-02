// Name: Zach Miller
// Program: Session 10 Lab

#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main ()
{
    int n; //variable for switch case
    ifstream infile; // declaration for input file
    ofstream outfile; //declare an outfile
    char playAgain; //variable for do-while loop to play again
    int count=0;
    char ch;
    int uppercase=0;
    int lowercase=0;
    int nonalpha=0;
    int num;
    int sum=0;
    char inFileName[17], outFileName[17];

      if (infile.fail()) // test if input file exists
    {
        cout << "ERROR - cannot open file! " << endl;
        exit(1); // terminate the program
    }


    cout << "Please select an option: \n1) numbers.txt\n2) letters.txt" << endl;
    cin >> n;
    
        switch(n)
    {
        case 1:
        infile.open("numbers.txt");
        cout << num << endl;
        while (infile >> num)
   {
        cout << num << endl;
        count++;
        count++;
        sum += num;
   }
     cout << "Total amount of numbers in the file: " << count << endl;
     cout << "The sum of the numbers in the file is: " << sum << endl;
     cout << "Enter an output filename: " << endl;
     cin >> outFileName;
     outfile.open(outFileName); //output file
     outfile << "The total amount of numbers: " << count << endl
          << "The total sum: " << sum << endl;
      outfile.close(); // output to a file
        break;


        

        case 2:
        infile.open("letters.txt");
            infile.get (ch);
            cout << ch << endl;
     while (! infile.eof())
     {
         count++;
         infile.get (ch);
         if ((ch >= 'A') && (ch <= 'Z'))
         {
             uppercase++;
         }
         else if ((ch >= 'a') && (ch <= 'z'))
         {
             lowercase++;
         }
         else
         {
             nonalpha++;
         }


     }
     cout << "Total amount of char in the file: " << count << endl;
     cout << "Total amount of uppercase char in the file: " <<uppercase << endl;
     cout << "Total amount of lowercase char in the file: " << lowercase << endl;
     cout << "Total amount of non-alphabet char in the file: " << nonalpha << endl;
     cout << "Enter an output filename: " << endl;
     cin >> outFileName;
     outfile.open(outFileName); //output file
     outfile << "The total amount of characters: " << count << endl
          << "The total amount of upper-case letters: " << uppercase << endl
          << "The total amount of lower-case letters: " << lowercase << endl
          << "The total amount of non-alphabet characters: " << nonalpha << endl;
      outfile.close(); // output to a file
        break;
    }
    infile.close();
    return 0;
}
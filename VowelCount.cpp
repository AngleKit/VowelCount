// VowelCount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>;
#include <fstream>;
#include <iomanip>;
#include <string>;
#include <algorithm>;
#include "windows.h";

using namespace std;

int main(int argc, char*argv[])
{
    // open output file, check if opened
    if (argc > 1)
    {
        // Header
        cout << setw(68) << setfill('*') << "*" << endl;
        string s = " Welcome to my Letter Counter Program ";
        cout << setw(15) << left << "*" << s << setw(15) << right << "*" << endl;
        cout << setw(68) << "*" << endl << endl; 

        //open file
        ifstream fs;
        string File = argv[1];
        fs.open(argv[1]);
        // check if file is openable
        if (!fs)
        {
            cout << "ERROR unable to open the file: " << File << endl; 
            system("pause");
            return -1;
        }

        // initalize varaibles
        int As = 0;
        int Es = 0;
        int Is = 0;
        int Os = 0;
        int Us = 0;

        int Ys = 0;
        int Xs = 0;
        int Zs = 0;

        int TotalV;
        int TotalXYZ; 
        int Total;
        char c;

        // print and say what file is bing analyzed
        cout << left << "Analyzing file '" << File << "' . . .\n"<< endl;

        // calculate the number of vowels
        while(!fs.eof() && fs >> c)  
        {
            if (c == 'A' || c == 'a')
                As = As + 1; 
            else if (c == 'E' || c == 'e')
                Es = Es + 1;
            else if (c == 'I' || c == 'i')
                Is = Is + 1;
            else if (c == 'O' || c == 'o')
                Os = Os + 1;
            else if (c == 'U' || c == 'u')
                Us = Us + 1;
            else if (c == 'Y' || c == 'y')
                Ys = Ys + 1;
            else if (c == 'X' || c == 'x')
                Xs = Xs + 1;
            else if (c == 'Z' || c == 'z')
                Zs = Zs + 1;
        }
        // Total number of vowels
        TotalV = As + Es + Is + Os + Us;
        TotalXYZ = Xs + Ys + Zs;
        Total = TotalV + TotalXYZ;

        // Output statments and data
        string ans0 = "The number of A's: ";
        cout << left << ans0 << setw(49) << setfill('.') << right << "." << As << endl;

        string ans1 = "The number of E's: ";
        cout << left << ans1 << setw(49) << right << "." << Es << endl;

        string ans2 = "The number of I's: ";
        cout << left << ans2 << setw(49) << right << "." << Is << endl;

        string ans3 = "The number of O's: ";
        cout << left << ans3 << setw(49) << right << "." << Os << "\n" << endl;

        string ans4 = "The number of X's: ";
        cout << left << ans4 << setw(49) << right << "." << Xs << endl;

        string ans5 = "The number of Y's: ";
        cout << left << ans5 << setw(49) << right << "." << Ys << endl;

        string ans6 = "The number of Z's: ";
        cout << left << ans6 << setw(49) << right << "." << Zs << "\n" << endl;

        string ans8 = "The vowel count is: ";
        cout << left << ans8 << setw(48) << right << "." << TotalV << endl;

        string ans7 = "The consonance count is: ";
        cout << left << ans7 << setw(43) << right << "." << TotalXYZ << endl; 

        string ans8 = "The letter count is: ";
        cout << left << ans8 << setw(48) << right << "." << Total << endl;

        system("pause");
        return 0;
    }
    else 
    {
        cout << "ERROR file not entered: unable to open a file" << endl;
        system("pause");
        return -1;
    }

}

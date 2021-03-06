#include <iostream>
#include "DuarteL05.h"

using namespace std;

int main()
{
    cout << "Create a variable called wd1.\n";
    WordData wd1;
    cout << "Set the word in wd1 to \"Sonoma\".\n";
    wd1.SetWord ("Sonoma");
    cout << "Create a variable called wd2.\n";
    WordData wd2 = wd1;
    cout << "Write out the contents of wd1.\n";
    wd1.WriteData(cout);
    cout << endl;
    cout << "Write out the contents of wd2.\n";
    wd2.WriteData (cout);
    cout << endl;
    cout << "Set the word in wd2 to \"State\".\n";
    wd2.SetWord ("State");
    cout << "Write out the contents of wd2.\n";
    wd2.WriteData (cout);
    cout << endl;
    cout << "Write out the word contained in wd1.\n";
    cout << "The word in wd1 is: " << wd1.GetWord() << endl;
    cout << "End the program.\n";
    
    cout << "Create an array of 10 word data items\n";
    WordData W[10];

    return 0;
}
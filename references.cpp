#include <iostream>
using namespace std;

int main()
{
    char myFirstLetter = 'A';
    char alisonsFirstLetter = myFirstLetter;
    cout << myFirstLetter << endl;  //A
    cout << alisonsFirstLetter << endl; //A
    myFirstLetter = 'B';
    cout << myFirstLetter << endl;  //B
    cout << alisonsFirstLetter << endl; //A
    cout << "--------------" << endl;

    char &meryemsFirstLetter = myFirstLetter;
    cout << myFirstLetter << endl;  //B
    cout << meryemsFirstLetter << endl; //B
    myFirstLetter = 'C';
    cout << myFirstLetter << endl;  //C
    cout << meryemsFirstLetter << endl; //C
    meryemsFirstLetter = 'D';
    cout << myFirstLetter << endl;  //D
    cout << meryemsFirstLetter << endl; //D

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    string customerName = "Ali Bozlak";
    cout << customerName << endl;   //Ali Bozlak
    cout << &customerName << endl;  //0x61fef4 -> memory address of customerName

    string* pointerCustomerName = &customerName;
    cout << pointerCustomerName << endl;    //0x61fef0

    cout << *pointerCustomerName << endl;   //Ali Bozlak
    string customerName2 = *pointerCustomerName;
    
    *pointerCustomerName = "Mehmet Aksoy";
    cout << *pointerCustomerName << endl;    //Mehmet Aksoy
    cout << customerName << endl;    //Mehmet Aksoy
    cout << customerName2 << endl;   //Ali Bozlak

    return 0;
}
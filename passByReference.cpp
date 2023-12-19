#include <iostream>
using namespace std;

void swapNumbers(int number1, int number2)  // <-- Without reference
{
    int number3 = number1;
    number1 = number2;
    number2 = number3;
}

void swapNumbers2(int &number1, int &number2)   // <--- With reference
{
    int number3 = number1;
    number1 = number2;
    number2 = number3;
}

int main()
{
    int number1 = 15;
    int number2 = 20;
    printf("number1 = %i, number2 = %i \n",number1,number2);    //number1 = 15, number2 = 20

    swapNumbers(number1,number2);
    printf("number1 = %i, number2 = %i \n",number1,number2);    //number1 = 15, number2 = 20

    swapNumbers2(number1,number2);
    printf("number1 = %i, number2 = %i \n",number1,number2);    //number1 = 20, number2 = 15

    return 0;
}
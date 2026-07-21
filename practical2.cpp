#include <iostream>
using namespace std;
int main()
{
    int num1,num2,sum,avg;
    cout<<"Enter two numbers:";
    cin>>num1;
    cin>>num2;
    sum=num1+num2;
    avg=sum/2;
    cout<<"Sum of two numbers="<<sum<<"Average="<<avg;
    return 0;
}
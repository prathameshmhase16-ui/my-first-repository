#include <iostream>
using namespace std;

int main()
{
    int choice;
    float num1,num2;

    cout<<"====Simple Calculator===="<<endl;
    cout<<"1.Addition(+)"<<endl;
    cout<<"2.Subtraction(-)"<<endl;
    cout<<"3.Multiplication(*)"<<endl;
    cout<<"4.Division(/)"<<endl;

    cout<<"\n Enter your choice(1-4): ";
    cin>>choice;

    cout<<"Enter first number: ";
    cin>>num1;

    cout<<"Enter second number: ";
    cin>>num2;

    switch(choice)
    {
        case 1:
          cout<<"Result= "<<num1+num2;
          break;
          
        case 2:
          cout<<"Result= "<<num1-num2; 
          break;
          
        case 3:
          cout<<"Result= "<<num1*num2;
          break;

        case 4:
         if(num2!=0)
          cout<<"Result= "<<num1/num2;
          
         else
          cout<<"Division by zero is not possible.";
          break;

        default:
           cout<<"Invalid Choice!";
    }

    return 0;
}

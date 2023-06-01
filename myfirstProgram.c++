#include <iostream>

using namespace std;

int main()
{     float num1,num2;
    double fahrenheit;
     char a;
     float b;
     char oper;
     int year;
  cout<<" \n PLEASE WELCOME TO PIRASSKI SIMPLE PROJECT \n \n  "<<endl;
       cout<< "ENJOY THE OPTION BELOW \n \n ";
       cout<< " \n 1. REGISTER  \n 2.USE  CALCULATOR \n 3.CALCULATE FAHRENHEIT IN CELSIUSE \n 4.CHECK BALANCE \n" ;
       cin>>a;
          switch(a){
          case '1':
            cout<< "PLEASE REGISTER FOR MORE FAVOURABLE PROJECT \n \n \n" ;
          cout<<"ENTER YOUR IUC/SMARTCARD NUMBER: \n \n";
          cin>>b;
          cout<< "You have registered with "<<b<<"\n stay tuned for more \n";
          break;
          case '2':
          cout<<"choice an operand (+,*,/,-,%): "<<endl;
          cin>>oper;
          cout<<"enter two numbers to calculate: "<<endl;
          cin>>num1>>num2;
        switch(oper){
    case'+':
        cout<<num1<<" + "<< num2<<" = "<<num1 + num2<<endl;
          break;
          case'*':
        cout<<num1<<" * "<< num2<<" = "<<num1 * num2<<endl;
          break;
          case'/':
        cout<<num1<<" /  "<< num2<<" =  "<<num1 / num2<<endl;
          break;
          case'-':
        cout<<num1<<" - "<< num2<<" =  "<<num1 - num2<<endl;
          break;
        } break;
          case '3':
          cout<<"Calculate the equivalent of Fahrenheit in celciuse"<<endl;
          cout<< "Enter the amount in Fahrenheit : \n";
          cin>>fahrenheit;
          cout<<fahrenheit<< "  is equals to  "<<(fahrenheit-32)*1.8<<"  in celciuse" <<endl;

          break;
          case '4':

            cout<< "CHECK IF YOUR BIRTH YEAR IS A LEAP YEAR"<<endl;
            cin>>year;
            if(year % 400 == 0) {
              cout << year<<" wow ,it's a leap year \n";
            }
            else if (year % 100 == 0){
              cout<<year<< "it not a leap year"<<endl;
            }
            else if (year % 4 == 0)  {
              cout<<year<< "wow it a leap year"<<endl;
            } else {cout<<"is not a leap year \n";}
            break;
          }
    return 0;
}

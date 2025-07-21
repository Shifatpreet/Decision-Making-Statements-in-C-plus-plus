//SHIFATPREET SINGH exp-5
//24070123098
//ENTC B1
#include<iostream>
using namespace std;
int main(){
    int choice;
    float a,b,SUM,SUB,MUL,DIV;
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    cout<<"Select the operation you want: "<<endl;
    cout<<"1.ADDITION"<<endl;
    cout<<"2.SUBTRACTION"<<endl;
    cout<<"3.MULTIPLICATION"<<endl;
    cout<<"4.DIVISION"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        SUM = a+b;
        cout<<"THE ADDITION OF THE TWO NUMBERS ARE :"<<SUM<<endl;
        break;
        case 2:
        SUB =a-b;
        cout<<"THE SUBTRACTION OF THE TWO NUMBERS ARE :"<<SUB<<endl;
        break;
        case 3:
        MUL=a*b;
        cout<<"THE MULTIPLICATION OF THE TWO NUMBERS ARE :"<<MUL<<endl;
        break;
        case 4:
        DIV=a/b;
        cout<<"THE DIVISION OF THE TWO NUMBERS ARE :"<<DIV<<endl;
        break;
    }
return 0;
}
/*Enter the first number: 
7
Enter the second number: 
8
Select the operation you want: 
1.ADDITION
2.SUBTRACTION
3.MULTIPLICATION
4.DIVISION
1
THE ADDITION OF THE TWO NUMBERS ARE :15

Enter the first number: 
7
Enter the second number: 
8
Select the operation you want: 
1.ADDITION
2.SUBTRACTION
3.MULTIPLICATION
4.DIVISION
2
THE SUBTRACTION OF THE TWO NUMBERS ARE :-1

Enter the first number: 
7
Enter the second number: 
8
Select the operation you want: 
1.ADDITION
2.SUBTRACTION
3.MULTIPLICATION
4.DIVISION
3
THE MULTIPLICATION OF THE TWO NUMBERS ARE :56

Enter the first number: 
7
Enter the second number: 
8
Select the operation you want: 
1.ADDITION
2.SUBTRACTION
3.MULTIPLICATION
4.DIVISION
4
THE DIVISION OF THE TWO NUMBERS ARE :0.875*/



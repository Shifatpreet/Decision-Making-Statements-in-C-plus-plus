Aim: To study and implement C++ decision making statements
Software Required:
Visual Studio

Theory:
Decision-making is the process to make a decision about which part of the code should be executed or not based on some condition. Decision-making in C++ involves the usage of conditional statements (also called decision control statements) to execute specific blocks of code primarily based on given situations and their results.

<img width="635" height="439" alt="image" src="https://github.com/user-attachments/assets/41013219-6f7a-4eeb-bc5c-f14fe23b3a41" />

if Statement: In C++, the if statement is the simplest decision-making statement. It allows the execution of a block of code if the given condition is true. The body of the if statement is executed only if the given condition is true.

if-else Statement The if else is a decision-making statement allows us to make a decision based on the evaluation of a given condition. If the given condition evaluates to true then the code inside the 'if' block is executed and in case the condition is false, the code inside the 'else' block is executed.

if else if Ladder The if else if Ladder statements allow us to include additional situations after the preliminary if condition. The 'else if' condition is checked only if the above condition is not true, and the else is the statement that will be executed if none of the above conditions is true. If some condition is true, then not only the associated block is executed.

Nested if else The nested if else statement contains an 'if' statement inside another 'if' statement. This structure lets in more complex selection-making by way of comparing multiple conditions. In this type of statement, multiple conditions are checked, and then the body of the last if statement is executed.

Switch Statement In C++, the switch statement is used when multiple situations need to be evaluated primarily based on the value of a variable or an expression. switch statement acts as an alternative to multiple if statements or if-else ladder and has a cleaner structure and it is easy for handling multiple conditions.

Implementation:
Based on the above decision making statements in C++ , Simple programs have been used to help understand how decision making statements work in c++. The programs are:

Odd-Even check
Vowel Check
Finding the largest number from three given numbers by the user
Making a Calculator using Switch Case
Made a basic banking system using Switch Case
Algorihtms:
Program 1:

Objective: To determine whether a user-entered number is even or odd.

Steps:

Start

Ask the user to enter an integer (n)

Read input into variable n

Check divisibility of n by 2:

If n % 2 == 0, then:

Display "This is an even number"

Else:

Display "This is an Odd number"

End
Program 2:

Objective: To determine whether the character entered by the user is a vowel or a consonant.

Steps:

Start

Declare a character variable str

Ask the user to enter a character

Read the input into str

Check if the character is a vowel:

If str is equal to 'a', 'e', 'i', 'o', 'u' (or their uppercase forms), then:

Display "The Character entered is a Vowel"

Else:

Display "The Character entered is a Consonant"

End
Program 3

Objective:

To determine and display the largest number among three user-entered integers.

Steps:

Start

Declare three integer variables: a, b, c

Ask user to enter three numbers

Read input values into a, b, and c

Initialize num ← a

Compare b and c with num:

If b > num, set num ← b

If c > num, set num ← c

Display the largest number (num)

End

Program 4:

Objective: To perform one of four basic arithmetic operations—Addition, Subtraction, Multiplication, or Division—based on user input.

Steps:

Start

Declare float variables a, b, sum, sub, mul, Div and integer num

Ask user to enter two numbers

Read inputs into a and b

Ask user to select an operation:

1 → Addition

2 → Subtraction

3 → Multiplication

4 → Division

Read input into num

Use a switch-case statement to perform the selected operation:

Case 1: sum ← a + b

Case 2: sub ← a - b

Case 3: mul ← a * b

Case 4: Div ← a / b

Default: Display invalid input message

Display the result of the selected operation

End

Program 5:
#include<iostream>
using namespace std;
#include<iostream> is used to include the input/output stream library.
Using namespace std; allows us to use standard C++ features like cout and cin without prefixing std::. 

int main(){
This is the entry point of the C++ program.
int choice;
choice will store the user’s input for the subject selection.

cout<<"::REPORT CARD::"<<endl;
cout<<"WHICH SUBJECT MARKS YOU WANT TO SEE:"<<endl;
cout<<"1.PHY"<<endl;
cout<<"2.CHEM"<<endl;
cout<<"3.MATHS"<<endl;
cout<<"4.HINDI"<<endl;
cout<<"5.ENGLISH"<<endl;
Displays a simple menu for the user to choose a subject.

cout<<"enter the choice:"<<endl;
cin>>choice;
Prompts the user to enter their choice (1 to 5).

The input is stored in the choice variable.

switch(choice){
    case 1:
        cout<<"The marks of the phy is: 98";
        break;
    ...
The switch checks the value of choice and matches it to one of the cases:

Case 1: Physics → prints 98

Case 2: Chemistry → prints 99

Case 3: Maths → prints 97

Case 4: Hindi → prints 96

Case 5: English → prints 95
This handles only if the user enters 6.

return 0;

}

Ends the program and returns 0 to the operating system.


Conclusion:
The Programs helps to understand the logic and flow of the decision making statements available in C++

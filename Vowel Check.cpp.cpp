//SHIFATPREET SINGH exp-5
//24070123098
//ENTC B1
#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter the charcter: ";
    cin>> c;
    c=tolower(c);
    cout<<"Check whether the character is vowel or consonant: "<<c<<endl;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        cout<<"The charecter you have entered is VOWEL";
    } else{
        cout<<"The character you have entered is CONSONANT"<<endl;
    }

    return 0;
}
/*Enter the charcter: A
Check whether the character is vowel or consonant: a
The charecter you have entered is VOWEL

Enter the charcter: e
Check whether the character is vowel or consonant: e
The charecter you have entered is VOWEL

Enter the charcter: p
Check whether the character is vowel or consonant: p
The character you have entered is CONSONANT

Enter the charcter: L
Check whether the character is vowel or consonant: l
The character you have entered is CONSONANT*/

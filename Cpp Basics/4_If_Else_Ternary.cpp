#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Voting Eligibility:-
    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    if(age >= 18){
        cout << "You're an adult!\n";
    }
    else if(age <=18 && age >= 13){
        cout << "You're a teen!\n";
    }
    else if(age<=0){
        cout << "Invalid Entry! Please Enter the age again\n";
    }
    else{
        cout << "You're a Child\n";
    }

    // Character case check:-

    char ch;
    cout << "Enter a character: ";
    cin>>ch;
    
    (ch>='A' && ch<='Z')?(cout<<"Upper Case!\n"):(cout<<"Lower Case!\n");   // Using Ternary Operator

    return 0;
}
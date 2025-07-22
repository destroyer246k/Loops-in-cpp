//Patel Vsihwas
//24070123072
//A3
#include <iostream>
#include<string>
using namespace std;
int main(){
    int c =0;
    string pass,c_pass;
set_password:
    while(c==0){
    cout << "Enter Password:";
    cin >> pass;
    if(pass.length() < 8){
        cout << "Password should contain at least 8 characters"<< endl<< endl;
        goto set_password;
    }
conf_password:
    cout << "Confirm Password:";
    cin >> c_pass;
   
    if(pass == c_pass){
        cout << "Password Set Successfully....."<< endl<< endl;
        c=1;
    }
    else{
        cout << "Entered password does not match" << endl<< endl;
        goto conf_password;
    }
    }
    string password;
    while(1){
        cout << "Enter your password(x to exit):";
        cin >> password;
        if(password == pass){
            cout << "Access Granted"<< endl<< endl;
        }
        else if(password=="x"){
            cout << "Exited...."<< endl<< endl;
            break;
        }
        else{
            cout << "Wrong Password"<< endl<< endl;
        }
    }
  return 0;
}
/*
Output:
Enter Password:Vish
Password should contain at least 8 characters

Enter Password:Vishwas@072
Confirm Password:Vishwas072
Entered password does not match

Confirm Password:Vishwas@072
Password Set Successfully.....

Enter your password(x to exit):Vishwas70
Wrong Password

Enter your password(x to exit):Vishwas@072
Access Granted

Enter your password(x to exit):x
Exited....
*/
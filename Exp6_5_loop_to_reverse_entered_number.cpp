//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;
int main(){
    int num,temp;
    cout<< "Enter Num:";
    cin >> num;
    while(num!=0){
        temp = num%10;
        num = num/10;
        cout << temp << " ";
    }
    return 0;
}
/*
Output:
Enter Num:23072
2 7 0 3 2
*/
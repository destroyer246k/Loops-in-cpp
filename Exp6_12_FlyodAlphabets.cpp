//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;
int main(){
    int n;
    char c =65;
    cout << "Enter Number:";
    cin >> n;
  for(int i = 1;i <= n;i++){
    for(int j = 1;j<=i;j++){
        cout << c << " ";
        c++;
    }
    cout << "\n";  
  }
  return 0;
}
/*
Output:
Enter Number:5
A 
B C
D E F
G H I J
K L M N O
*/

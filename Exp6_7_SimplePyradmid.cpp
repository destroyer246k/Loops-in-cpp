//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Number:";
    cin >> n;
  for(int i = 1;i <= n;i++){
    for(int j = 1;j<=i;j++){
        cout << "* "<< " ";
    }
    cout << "\n";  
  }
  return 0;
}
/*
Output:
Enter Number:5
*
* *
* * *
* * * *
* * * * *
*/

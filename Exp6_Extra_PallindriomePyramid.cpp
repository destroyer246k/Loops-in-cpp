//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;
int main(){
    int n;
    int c;
    cout << "Enter Number:";
    cin >> n;
  for(int i = 1;i <= n;i++){
    for(int k = n-i; k >=1; k--) {
        cout << " "; 
    }
    c =i;
    for(int j = 1 ;j<=(2*i-1);j++){
        cout << c;
        if(j < i) {
            c++;
        } 
        else {
            c--;
        }
    }
    cout << "\n";  
  }
  return 0;
}

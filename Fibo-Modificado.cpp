#include <iostream>

using namespace std;

unsigned long long int a , b , c , conta = 2;
unsigned long long int x , y , z ;

int main(){
    cin >> a >> b >> c ;
    x = a ;
    y = b ;
    z = (a+b) % c;
     
    while(z != 0){
      x = y ;
      y = z ;
      z = (x + y) % c ;
     
     conta++;
     if(conta >= 5000000){
         cout << -1 ;
         return 0;
     }
     
    }
    cout << conta;




    return 0;
}

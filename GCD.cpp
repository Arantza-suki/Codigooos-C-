#include <iostream>
#include <numeric>
using namespace std;

long long int a, b , c ;


int main() {
    cin >> c ; 
    
    for(int i = 0 ; i < c ; i++){
        cin >> a >>  b; 
        
        if(gcd(a,b) == 1) cout << "Si";
        else cout << "NO";
        
        cout << '\n';
    }
   return 0;
}

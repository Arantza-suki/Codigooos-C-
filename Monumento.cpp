
#include <iostream>
using namespace std;
int x;
int y , z, aux;

int main(){
    cin >> x ;
    y = 1;
    
    while(x > 0){
        aux = y + z ;
        aux %= 1000000;
        z = y ;
        z %= 1000000;
        y = aux;
        y %= 1000000;
        
        
        x--;
    }
    cout << y % 1000000;
    
    return 0;
}

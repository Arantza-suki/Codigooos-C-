#include <iostream>
using namespace std; 

int n , c1, c2;
char x;

int main(){
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        cin >> x ;
        if( (x == 'B' && i % 2 == 1) || (x == 'W' && i % 2 == 0) ) c1++; //BWBWBw
        if( (x == 'W' && i % 2 == 1) || (x == 'B' && i % 2 == 0) ) c2++; //WBWBWB
        
        
    }
     cout << min(c1, c2);

    return 0;
}

#include <iostream>
using namespace std;
int c , r , M;
 
int main(){
    cin >> c;
    int arr[c];
    
    for(int i = 0 ; i < c; i++){
        cin >> arr[i];
        M = max(arr[i] , M);  
    }
    for(int i = 0 ; i < c ; i++){
        r += M-arr[i];
    }
    cout << r;
    return 0;
}

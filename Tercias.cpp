#include <iostream>
using namespace std;

int n , m ;
int arr[7010];

bool busqueda(int x , int z){ // x es la resta , z es el numero que voy a restar
   //cout << x << " ---- " << z << '\n';
   int ini = 0 ;
   int fin = n ;
   while(ini != fin ){
       int mid = (ini+fin) / 2;
       

       if(arr[mid]-z >= x){
           fin = mid;
       }else{
           ini = mid+1;
       }
   }
   // cout << arr[ini] << '\n';
    if(arr[ini]-z == x || arr[fin]-z == x) return true;
    
    return false;
}

int main(){
    cin >> n ; 
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    if(n < 3 ){
        cout << 0 ; 
        return 0 ;
    }
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = i+1 ; j < n-1; j++){ // se hace asi , por que si no , con los ultimos ya no habria tercia 
           // cout << arr[i] << " ____ " << arr[j] << " ";
            if(busqueda(arr[j]-arr[i] , arr[j])) m++; // resta a buscar , j es la sucesion que le sigue
        }
    }

    cout << m ;
    return 0;
}

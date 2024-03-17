
#include <iostream>
using namespace std;
const int MAXN = 500;

int n , m ;
int arr[MAXN];
int memo[MAXN][MAXN];
bool visitados[MAXN][MAXN];

int vaca(int pos, int fatiga) { // donde estoy , mi fatiga
  cout << "Visitando : " << pos << " --- " << fatiga << '\n';
  
  if (pos == n - 2 && fatiga == 0) { // por que si avanzo el que le sigue , Bessie ya no va a tener energias
    return arr[pos];
  }else if(pos > n-2 || pos == n - 2 && fatiga > 0){
      return 0 ;
  }
  if(fatiga == m){ // ya he llegado a mi limite
      pos += fatiga ; // descanso esos pasos 
      fatiga = 0 ;
  }
  
  
  if(!visitados[pos][fatiga]){ 
      visitados[pos][fatiga] = true;
    memo[pos][fatiga] = max(vaca(pos + 1, fatiga+1) , vaca(pos + fatiga , 0)); // avanzo o no avanzo 
    memo[pos][fatiga] += arr[pos];
  }
  
  
  return memo[pos][fatiga];
}

int main() {
cin >> n >> m ;
  for (int i = 0; i < n; ++i) {
   cin >> arr[i];
  }
 cout << vaca(0, 0) << "\n";


}

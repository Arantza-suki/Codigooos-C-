#include <iostream>
using namespace std;
const int MX = 1010;
int ren , col , r , c , conta;
int ap , af , bp , bf;
int matrix[MX][MX];
int sub[MX][MX];
int copia[MX][MX];

bool es(int a , int b , int c , int d){
  
    if(matrix[a][c] == ap && matrix[a][d] == af && matrix[b][c] == bp && matrix[b][d] == bf){// las esquinas fueron iguales
        for(int m = a ; m <= b ; m++){
            for(int n = c ; n <= d ; n++){
                
              if(matrix[m][n] != sub[m-a][n-c]) return false;  
            } 
        }
          
    }else return false;
    

    return true ; // fueron iguales
}

int main(){
    cin >> ren >> col; // matriz original
    for(int i = 0 ; i < ren ; i++){
        for(int j = 0 ; j < col ; j++){
            cin >> matrix[i][j];
        }
    }
    
    cin >> r >> c; // submatriz
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            cin >> sub[i][j];
        }
    }
    ap = sub[0][0];
    af = sub[0][c-1];
    bp = sub[r-1][0];
    bf = sub[c-1][r-1];
  
    
  int izq=0;
   for(int der = r-1 ; der < ren ; der++){
        int arriba = 0;
       
           for(int abajo = c-1 ; abajo < col ; abajo++){
               // cout << izq << " "<< der <<" "<< arriba << " "<< abajo << '\n';
                if(es(izq , der , arriba , abajo)){
                  for(int k = izq ; k <= der; k++){
                    for(int j = arriba ; j <= abajo ; j++) copia[k][j] = 1 ;  
                  }  
                } 
                arriba++;
           }
       izq++;
   }
    
    
     for(int i = 0 ; i < ren ; i++){
        for(int j = 0 ; j < col ; j++){
            cout << copia[i][j] << " ";
        }
        cout << '\n';
    }
    
    return 0;
}

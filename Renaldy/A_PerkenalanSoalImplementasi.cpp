#include <iostream>
 
using namespace std;
 
 int main(){
     
     int m;
     int n;
     
     cin >> n;
     cin >> m;
     
     int matriks[n][m];
     
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> matriks[i][j];
            }
        }
        
        for(int i = 0; i < m; i++){
            for(int j = n - 1; j >= 0; j--){
                cout << matriks[j][i] << " ";
            }
            cout << endl;
        }
     
     return 0;
 }
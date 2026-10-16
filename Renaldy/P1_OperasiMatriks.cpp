#include <bits/stdc++.h>

using namespace std;

int main(){

    cin.tie(0);
    int n;
    int m;
    int x;
    cin >> n;
    cin >> m;
    cin >> x;

    int matriks[101][101];
    int matriks_temp[n][m];
    string pilihan;
    int temp = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matriks[i][j];
            matriks_temp[i][j] = matriks[i][j];
        }
    }
    for(int i = 0; i < x; i++){
        cin >> pilihan; 
        if(pilihan == "_"){
            for(int i = 0; i < n / 2; i++){
                for(int j = 0; j < m; j++){
                    temp = matriks[i][j];
                    matriks[i][j] = matriks[(n - 1) - i][j];
                    matriks[(n - 1) - i][j] = temp;
                }
            }
        }
        else if(pilihan == "|"){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m / 2; j++){
                    temp = matriks[i][j];
                    matriks[i][j] = matriks[i][(m - 1) - j];
                    matriks[i][(m - 1) - j] = temp;
                }
            }
        }
        else if(pilihan == "180"){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    matriks[i][j] = matriks_temp[(n - 1) - i][(m - 1) - j];
                }
            }
        }
        else if(pilihan == "270"){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    matriks[i][j] = matriks_temp[j][(n - 1) - i];
                }
            }

        }
        else if(pilihan == "90"){
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    matriks[i][j] = matriks_temp[i][j];
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
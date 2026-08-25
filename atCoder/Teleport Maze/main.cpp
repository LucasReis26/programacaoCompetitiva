#include <iostream>

using namespace std;

int movimentosPossiveis(int,int,char**);

int main(){

    int h, w;

    cin >> h >> w;
    getchar();

    char matriz[h][w];

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> matriz[i][j];
        }

    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cout << matriz[i][j];
        }
        cout << endl;
    }

    //cout << movimentosPossiveis(h,w) << endl;

    return 0;
}

int movimentosPossiveis(int h_final, int w_final, char** matriz){
    int h_inicial = 0;
    int w_inicial = 0;
    int count = 0;
    const char caractereFinal = matriz[h_final][w_final];
    bool finalJump = (caractereFinal >= 'a' && caractereFinal <= 'z');
    
    while(h_inicial != h_final && w_inicial != w_final){
        if(finalJump){
            if(w_inicial + 1 < w_final && matriz[h_inicial][w_inicial + 1] == caractereFinal) return 2 + count;
            else if(h_inicial + 1 < h_final && matriz[h_inicial + 1][w_inicial] == caractereFinal) return 2 + count;
            else if (w_inicial > 0 && matriz[h_inicial][w_inicial - 1] == caractereFinal) return 2 + count;
            else if(h_inicial > 0 && matriz[h_inicial - 1][w_inicial] == caractereFinal) return 2 + count;
        }

    }
    

    return 0;
}

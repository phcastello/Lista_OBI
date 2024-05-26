#include <iostream>

using namespace std;


int main (){
    int tamanho;
    cin >> tamanho;
    
    int v[tamanho];
    int pos = 0;

    for(int i=0;i<tamanho;i++){
        int n;
        cin >> n;
        if (n!=0){
            v[pos] = n;
            pos++;
        }
        else{
 
            pos--;
            while (pos > 0 && v[pos] == 0) {
                pos--;
            }

            v[pos] = 0;
            }
        }
    

    int soma=0;
    for(int i=0; i<pos;i++){
        soma+=v[i];
    }
    cout << soma << endl;
    
    return 0;
}




#include<iostream>
#include<vector>
using namespace std;

int main(){
    int  n, i=0, v[100];

    while(cin>>n){
        v[i] = n;
        if(n==0){
            v[i-1] = 0;
        }
        i++;
    
    }
    for (i; v[i]; i++){
        cout << v[i] << endl;
    }
}
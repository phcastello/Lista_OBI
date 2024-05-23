#include<iostream>
using namespace std;

int main(){
    int Hc, Lc, Pc, Hj, Lj, maxC, medC, minC, minJ, maxJ;

    cin >> Hc >> Lc >> Pc;
    cin >> Hj >> Lj;

    maxC = max(max(Hc,Lc),Pc);
    minC = min(min(Hc,Lc),Pc);
    minJ = min(Hj, Lj);
    maxJ = max(Hj, Lj);
    
    if (Hc != maxC && Hc != minC)
        medC = Hc;
    else if (Lc != maxC && Lc != minC)
        medC = Lc;
    else
        medC = Pc;
    
    // Minc, medC e maxC setados

    if (minC <= minJ && medC <= maxJ) {
        cout << "S";
    }
    else{
        cout << "N";
    }

    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int a, b, totSom, totSottr, totMolt, totDiv, totPot;

    a = input();
    b = input();
    totSom = addizione(a, b);
    totSottr = sottrazione(a, b);
    totMolt = moltiplicazione(a, b);
    totDiv = divisione(a, b);
    totPot = potenza(a, b);
    cout << "la somma è:" << totSom << endl;
    cout << "sottrazione è:" << totSottr << endl;
    cout << "la moltiplicazione è: " << totMolt << endl;
    cout << "la divisione è: " << totDiv << endl;
    cout << "la potenza è: " << totPot << endl;
    return 0;
}

int addizione(int addendo1, int addendo2) {
    int sm;

    sm = addendo1 + addendo2;
    
    return sm;
}

int divisione(int dividendo, int divisore) {
    int dv;

    dv = dividendo / divisore;
    
    return dv;
}

int input() {
    int x;

    cout << "inserisci un numero positivo" << endl;
    do {
        cin >> x;
    } while (x <= 0);
    
    return x;
}

int moltiplicazione(int fattore1, int fattore2) {
    int ml;

    ml = fattore1 * fattore2;
    
    return ml;
}

int potenza(int base, int esponente) {
    int i, p;

    p = 1;
    for (i = 0; i <= esponente - 1; i++) {
        p = p * base;
    }
    
    return p;
}

int sottrazione(int minuendo, int sottraendo) {
    int st;

    st = minuendo - sottraendo;
    
    return st;
}



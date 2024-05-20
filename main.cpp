#include <iostream>


using namespace std;


const int righe = 4;
const int colonne = 4;


//prototipi
void stampaPrimaEUltimaRiga(int matrice[][colonne]);
void stampaPrimaEUltimaColonna(int matrice[][colonne]);
void stampaDiagonalePrincipale(int matrice[][colonne]);
void stampaColonnePari(int matrice[][colonne]);
void stampaRighePari(int matrice[][colonne]);
void stampa(int matrice[][colonne]);
void inizializzatore(int matrice[][colonne]);
int Menu();



int main() {
    int matrice[righe][colonne] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };

    int scelta;


    do {
        scelta=Menu();
        switch(scelta) {
            case 1:
                stampaPrimaEUltimaRiga(matrice);
                inizializzatore(matrice);
            break;
            case 2:
                stampaPrimaEUltimaColonna(matrice);
                inizializzatore(matrice);
            break;
            case 3:
                stampaDiagonalePrincipale(matrice);
                inizializzatore(matrice);
            break;
            case 4:
                stampaColonnePari(matrice);
                inizializzatore(matrice);
            break;
            case 5:
                stampaRighePari(matrice);
                inizializzatore(matrice);
            break;
            case 0:
                cout<<"Esci"<<endl;
            break;
            default:
                cout<<"Attenzione, scelta sbagliata!"<<endl;
            break;
        }

    }while(scelta!=0);

    return 0;
}


int Menu() {

    int scegli;


    cout<<"------------------MENU------------------"<<endl;
    cout<<"1-Visualizza prima riga e ultima riga"<<endl;
    cout<<"2-Visualizza prima colonna e ultima colonna"<<endl;
    cout<<"3-Visualizza diagonale principale"<<endl;
    cout<<"4-Visualizza colonne pari"<<endl;
    cout<<"5-Visualizza righe pari"<<endl;
    cout<<"0-Esci"<<endl;

    cout<<"Scegli un'operazione: ";

    cin>>scegli;

    return scegli;

}


void inizializzatore(int matrice[][colonne]) {
    for(int i=0; i<righe; i++) {
        for(int j=0; j<colonne; j++) {
            matrice[i][j]=0;
        }
        cout<<endl;
    }
}

void stampa(int matrice[][colonne]) {

    cout<<endl;

    for(int i=0; i<righe; i++) {
        for(int j=0; j<colonne; j++) {
            cout<<matrice[i][j]<<"\t";
        }
        cout<<endl;
    }


    cout<<endl;

}



void stampaPrimaEUltimaRiga(int matrice[][colonne]) {

    cout<<endl;

    for (int i=0; i<righe; i++) {
        matrice[0][i]=1;
    }

    cout<<endl;

    for (int i=0; i<righe; i++) {
        matrice[righe-1][i]=1;
    }

    stampa(matrice);


    cout<<endl;
}

void stampaPrimaEUltimaColonna(int matrice[][colonne]) {

    cout<<endl;

    for (int i=0; i<colonne; i++) {
        matrice[i][0]=1;
    }
    cout<<endl;

    for (int i=0; i<colonne; i++) {
        matrice[i][colonne-1]=1;
    }

    stampa(matrice);

    cout<<endl;
}

void stampaDiagonalePrincipale(int matrice[][colonne]) {

    cout<<endl;


    for (int i=0;i<colonne; i++) {
        matrice[i][i]=1;
    }

    stampa(matrice);


    cout<<endl;
}

void stampaColonnePari(int matrice[][colonne]) {

    cout<<endl;

    for (int i=0; i<colonne; i=i+2) {
        for(int j=0; j<righe; j++) {
            matrice[j][i]=1;
        }
        cout<<endl;
    }

    stampa(matrice);

    cout<<endl;

}

void stampaRighePari(int matrice[][colonne]) {

    cout<<endl;


    for (int i=0; i<righe; i=i+2) {
        for (int j=0; j<colonne; j++) {
            matrice[i][j]=1;
        }
        cout<<endl;
    }

    stampa(matrice);

    cout<<endl;

}

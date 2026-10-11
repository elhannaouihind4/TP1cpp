
#include <iostream>
#include "BankAccount.hpp"

using namespace std;

int mainBank() {
    BankAccount compte1;

    cout << " Compte 1  " << endl;
    compte1.afficher();

    BankAccount compte2("45623", 700.0);

    cout << "\n  Compte 2  " << endl;
    compte2.afficher();

    cout << "\n  Depot de 400 euros  " << endl;
    compte2.deposer(400.0);

    cout << "\n  Retrait de 700 euros  " << endl;
    compte2.retirer(700.0);

    cout << "\n Retrait de 1000 euros  " << endl;
    compte2.retirer(1000.0);

    cout << "\n  Solde final  " << endl;
    cout << compte2.getSolde() << " euros" << endl;

    return 0;
}






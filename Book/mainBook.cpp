
#include <iostream>
#include "Book.hpp"
#include "Library.hpp"

using namespace std;

int mainBook() {
    Library bibliotheque;

    Book livre1("Le Petit Prince",
                "Antoine de Saint-Exupery",
                "111", 1943);

    Book livre2("L'Etranger",
                "Albert Camus",
                "222", 1942);

    bibliotheque.ajouterLivre(livre1);
    bibliotheque.ajouterLivre(livre2);

    cout << "\n  Liste des livres  " << endl;
    bibliotheque.listerLivres();

    cout << "\n  Recherche par ISBN " << endl;

    const Book* resultat = bibliotheque.trouverParISBN("111");

    if (resultat != nullptr) {
        resultat->afficher();
    } else {
        cout << "Livre introuvable." << endl;
    }

    cout << "\n Test ISBN en double " << endl;
    bibliotheque.ajouterLivre(livre1);

    return 0;
}






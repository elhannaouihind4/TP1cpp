
#include "Student.hpp"
#include <iostream>

Student::Student()
    : m_nom("Inconnu"), m_prenom("Inconnu"), m_notes() {
}

Student::Student(const std::string& nom, const std::string& prenom)
    : m_nom(nom), m_prenom(prenom), m_notes() {
}

void Student::ajouterNote(double note) {
    if (note >= 0 && note <= 20) {
        m_notes.push_back(note);
        std::cout << "Note ajoutee avec succes !" << std::endl;
    } else {
        std::cout << "Erreur : la note doit etre entre 0 et 20."
                  << std::endl;
    }
}

double Student::calculerMoyenne() const {
    if (m_notes.empty()) {
        return 0.0;
    }

    double somme = 0.0;

    for (double note : m_notes) {
        somme += note;
    }

    return somme / m_notes.size();
}

void Student::afficher() const {
    std::cout << "Nom : " << m_nom << std::endl;
    std::cout << "Prenom : " << m_prenom << std::endl;
    std::cout << "Moyenne : " << calculerMoyenne() << "/20"
              << std::endl;
}

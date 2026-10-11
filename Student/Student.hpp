

#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
#include <vector>

class Student {
private:
    std::string m_nom;
    std::string m_prenom;
    std::vector<double> m_notes;

public:
    Student();
    Student(const std::string& nom, const std::string& prenom);

    void ajouterNote(double note);
    double calculerMoyenne() const;
    void afficher() const;
};

#endif

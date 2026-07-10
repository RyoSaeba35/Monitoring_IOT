#include "GestionFichiers.hpp"
#include <fstream>
#include <iostream>

void sauvegarderDonnees(const std::vector<Capteur>& capteurs, const std::string& nomFichier) {
    std::ofstream fichier(nomFichier, std::ios::app);
    if (!fichier) {
        std::cerr << "Erreur : Impossible d'ouvrir le fichier " << nomFichier << std::endl;
        return;
    }

    for (const auto& capteur : capteurs) {
        fichier << capteur.timestamp << "," << capteur.id << "," << capteur.type << ","
                << capteur.valeur << "," << capteur.unite << "\n";
    }
}

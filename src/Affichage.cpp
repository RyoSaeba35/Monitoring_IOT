#include "Affichage.hpp"
#include <iostream>
#include <iomanip>
#include <string>

void afficherDonnees(const std::vector<Capteur>& capteurs) {
    std::cout << "\n--- Données des capteurs ---\n";
    std::cout << std::left << std::setw(20) << "Timestamp"
              << std::setw(10) << "ID"
              << std::setw(15) << "Type"
              << std::setw(10) << "Valeur"
              << std::setw(5) << "Unité" << "\n";
    std::cout << std::string(60, '-') << "\n";

    for (const auto& capteur : capteurs) {
        std::cout << std::left << std::setw(20) << capteur.timestamp
                  << std::setw(10) << capteur.id
                  << std::setw(15) << capteur.type
                  << std::setw(10) << capteur.valeur
                  << std::setw(5) << capteur.unite << "\n";
    }
}

void afficherAlertes(const std::vector<Alerte>& alertes) {
    if (alertes.empty()) {
        std::cout << "\nAucune alerte.\n";
        return;
    }

    std::cout << "\n--- Alertes ---\n";
    std::cout << std::left << std::setw(20) << "Timestamp"
              << std::setw(10) << "Capteur ID"
              << std::setw(50) << "Message" << "\n";
    std::cout << std::string(80, '-') << "\n";

    for (const auto& alerte : alertes) {
        std::cout << std::left << std::setw(20) << alerte.timestamp
                  << std::setw(10) << alerte.capteurId
                  << std::setw(50) << alerte.message << "\n";
    }
}

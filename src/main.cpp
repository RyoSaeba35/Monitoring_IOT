#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>
#include "Capteur.hpp"
#include "Alerte.hpp"
#include "GenerateurDonnees.hpp"
#include "GestionFichiers.hpp"
#include "Affichage.hpp"

int main() {
    std::vector<std::string> capteurIds = {"CAP001", "CAP002", "CAP003", "CAP004"};
    std::string nomFichierCSV = "donnees_capteurs.csv";

    std::ofstream fichierInit(nomFichierCSV, std::ios::trunc);
    fichierInit << "Timestamp,ID,Type,Valeur,Unité\n";
    fichierInit.close();

    std::cout << "Démarrage du système de monitoring IoT...\n";
    std::cout << "Appuyez sur Ctrl+C pour arrêter.\n\n";

    while (true) {
        auto capteurs = simulerCollecteDonnees(capteurIds);
        sauvegarderDonnees(capteurs, nomFichierCSV);
        auto alertes = genererAlertes(capteurs);
        afficherAlertes(alertes);
        afficherDonnees(capteurs);
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }

    return 0;
}

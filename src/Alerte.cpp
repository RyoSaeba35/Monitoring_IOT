#include "Alerte.hpp"
#include "GenerateurDonnees.hpp"

bool verifierSeuil(const Capteur& capteur, double seuilMin, double seuilMax) {
    return capteur.valeur < seuilMin || capteur.valeur > seuilMax;
}

std::vector<Alerte> genererAlertes(const std::vector<Capteur>& capteurs) {
    std::vector<Alerte> alertes;
    for (const auto& capteur : capteurs) {
        double seuilMin, seuilMax;
        if (capteur.type == "Température") {
            seuilMin = 18.0;
            seuilMax = 30.0;
        } else if (capteur.type == "Pression") {
            seuilMin = 980.0;
            seuilMax = 1020.0;
        } else if (capteur.type == "Humidité") {
            seuilMin = 40.0;
            seuilMax = 70.0;
        }

        if (verifierSeuil(capteur, seuilMin, seuilMax)) {
            alertes.push_back({
                capteur.id,
                "Alerte : " + capteur.type + " hors seuil (" +
                std::to_string(capteur.valeur) + " " + capteur.unite + ")",
                genererTimestamp()
            });
        }
    }
    return alertes;
}

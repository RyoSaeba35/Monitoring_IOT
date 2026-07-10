#ifndef AFFICHAGE_HPP
#define AFFICHAGE_HPP

#include <vector>
#include "Capteur.hpp"
#include "Alerte.hpp"

void afficherDonnees(const std::vector<Capteur>& capteurs);
void afficherAlertes(const std::vector<Alerte>& alertes);

#endif // AFFICHAGE_HPP

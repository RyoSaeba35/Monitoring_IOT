#ifndef GESTION_FICHIERS_HPP
#define GESTION_FICHIERS_HPP

#include <string>
#include <vector>
#include "Capteur.hpp"

void sauvegarderDonnees(const std::vector<Capteur>& capteurs, const std::string& nomFichier);

#endif // GESTION_FICHIERS_HPP

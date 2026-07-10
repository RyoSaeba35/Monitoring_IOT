#ifndef GENERATEUR_DONNEES_HPP
#define GENERATEUR_DONNEES_HPP

#include <string>
#include <vector>
#include "Capteur.hpp"

double genererValeurAleatoire(const std::string& type);
std::string genererTimestamp();
std::vector<Capteur> simulerCollecteDonnees(const std::vector<std::string>& capteurIds);

#endif // GENERATEUR_DONNEES_HPP

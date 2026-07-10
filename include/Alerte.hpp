#ifndef ALERTE_HPP
#define ALERTE_HPP

#include <string>
#include <vector>
#include "Capteur.hpp"

struct Alerte {
    std::string capteurId;
    std::string message;
    std::string timestamp;
};

std::vector<Alerte> genererAlertes(const std::vector<Capteur>& capteurs);

#endif // ALERTE_HPP

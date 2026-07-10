#ifndef CAPTEUR_HPP
#define CAPTEUR_HPP

#include <string>

struct Capteur {
    std::string id;
    std::string type;
    double valeur;
    std::string unite;
    std::string timestamp;
};

#endif // CAPTEUR_HPP

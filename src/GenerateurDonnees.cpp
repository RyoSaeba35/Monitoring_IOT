#include "GenerateurDonnees.hpp"
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <iomanip>
#include <sstream>

double genererValeurAleatoire(const std::string& type) {
    if (type == "Température") {
        return 15.0 + (rand() % 200) / 10.0;
    } else if (type == "Pression") {
        return 950.0 + (rand() % 1000) / 10.0;
    } else if (type == "Humidité") {
        return 30.0 + (rand() % 500) / 10.0;
    }
    return 0.0;
}

std::string genererTimestamp() {
    auto now = std::chrono::system_clock::now();
    std::time_t now_time = std::chrono::system_clock::to_time_t(now);
    std::tm* local_time = std::localtime(&now_time);

    std::stringstream ss;
    ss << std::put_time(local_time, "%Y-%m-%d %H:%M:%S");
    return ss.str();
}

std::vector<Capteur> simulerCollecteDonnees(const std::vector<std::string>& capteurIds) {
    std::vector<Capteur> capteurs;
    std::vector<std::string> types = {"Température", "Pression", "Humidité"};
    std::vector<std::string> unites = {"°C", "hPa", "%"};

    for (const auto& id : capteurIds) {
        int indexType = rand() % types.size();
        capteurs.push_back({
            id,
            types[indexType],
            genererValeurAleatoire(types[indexType]),
            unites[indexType],
            genererTimestamp()
        });
    }
    return capteurs;
}

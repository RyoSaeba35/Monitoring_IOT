# IoT Monitoring System

Un système de **monitoring en temps réel** pour capteurs IoT (température, pression, humidité) développé en **C++11**.
Ce projet simule la collecte de données depuis des capteurs, détecte les anomalies et sauvegarde les résultats dans un fichier CSV.

---

# Fonctionnalités
- Simulation de capteurs (température, pression, humidité).
- Détection d'anomalies avec des seuils prédéfinis.
- Sauvegarde des données dans un fichier CSV (`donnees_capteurs.csv`).
- Affichage en temps réel dans le terminal.

---

# Structure du projet

Monitoring_IOT/
├── CMakeLists.txt       # Configuration CMake
├── README.md
├── .gitignore
├── include/             # Fichiers d'en-tête (.hpp)
│   ├── Capteur.hpp
│   ├── Alerte.hpp
│   ├── GenerateurDonnees.hpp
│   ├── GestionFichiers.hpp
│   └── Affichage.hpp
└── src/                # Implémentations (.cpp)
├── Capteur.cpp
├── Alerte.cpp
├── GenerateurDonnees.cpp
├── GestionFichiers.cpp
├── Affichage.cpp
└── main.cpp

---

# Compilation et exécution

#Prérequis
- **CMake** (≥ 3.10)
- **Compilateur C++11** (GCC, Clang, MSVC)
- **Git** (pour cloner le dépôt)

# Étapes
1. Cloner le dépôt :
   ```bash
   git clone https://github.com/RyoSaeba35/Monitoring_IOT.git
   cd Monitoring_IOT
2. Créer le dossier build et compiler :
   mkdir build && cd build
   cmake ..
   make
3. Exécuter le programme :
   ./iot_monitoring

#  Exemple de sortie
Démarrage du système de monitoring IoT...
Appuyez sur Ctrl+C pour arrêter.

--- Alertes ---
Timestamp            Capteur ID  Message
--------------------------------------------------------------------------------
2026-07-10 17:03:18  CAP001      Alerte : Pression hors seuil (1038.6 hPa)

--- Données des capteurs ---
Timestamp            ID        Type          Valeur  Unité
------------------------------------------------------------
2026-07-10 17:03:18  CAP001    Pression      1038.6   hPa
2026-07-10 17:03:18  CAP002    Température   26.5     °C
2026-07-10 17:03:18  CAP003    Humidité      63.5     %
2026-07-10 17:03:18  CAP004    Pression      999.2    hPa

# Fichiers générés
donnees_capteurs.csv

#Configuration des seuils
Les seuils pour les alertes sont codés en dur dans le fichier src/Alerte.cpp :

Température : 18.0°C – 30.0°C
Pression : 980.0 hPa – 1020.0 hPa
Humidité : 40.0% – 70.0%

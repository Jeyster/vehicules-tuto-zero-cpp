#ifndef GARAGE_H
#define GARAGE_H

#include <iostream>
#include <string>
#include <vector>
#include "Vehicule.h"

class Garage
{
    public:
        Garage();
        Garage(std::vector<Vehicule*> listeVehicules);
        virtual ~Garage();
        std::vector<Vehicule*> getVehicules() const;
        void setVehicules(std::vector<Vehicule*> listeVehicules);
        void ajouterVehicule(Vehicule* vehicule);
        void supprimerVehicule();

    protected:

    private:
        std::vector<Vehicule*> m_listeVehicules;
};

#endif // GARAGE_H

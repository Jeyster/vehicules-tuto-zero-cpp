#ifndef CAMION_H
#define CAMION_H

#include <iostream>
#include <string>
#include "Vehicule.h"


class Camion : public Vehicule
{
    public:
        Camion(std::string marque = "inconnue", int prix = 10000, double poids = 10, int anneeFabrication = 2017);
        virtual ~Camion();
        virtual void affiche() const;
        virtual int nbrRoues() const;

    protected:
        double m_poids;

    private:
};

#endif // CAMION_H

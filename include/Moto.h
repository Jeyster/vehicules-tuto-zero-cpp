#ifndef MOTO_H
#define MOTO_H

#include <string>
#include "Vehicule.h"

class Moto : public Vehicule
{
    public:
        Moto(std::string marque = "inconnue", int prix = 10000, double vitesse = 255.5);
        virtual ~Moto();
        virtual void affiche() const;

    protected:
        double m_vitesse;

    private:
};

#endif // MOTO_H

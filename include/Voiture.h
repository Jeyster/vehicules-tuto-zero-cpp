#ifndef VOITURE_H
#define VOITURE_H

#include <string>
#include "Vehicule.h"

class Voiture : public Vehicule
{
    public:
        Voiture(std::string marque = "inconnue", int prix = 10000, int portes = 5);
        virtual ~Voiture();
        virtual void affiche() const;

    protected:
        int m_portes;

    private:
};

#endif // VOITURE_H

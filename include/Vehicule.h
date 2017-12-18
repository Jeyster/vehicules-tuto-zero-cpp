#ifndef VEHICULE_H
#define VEHICULE_H

#include <iostream>
#include <string>

class Vehicule
{
    public:
        Vehicule(std::string marque = "inconnue", int prix = 10000);
        virtual ~Vehicule();
        virtual void affiche() const;

    protected:
        std::string m_marque;
        int m_prix;

    private:
};

#endif // VEHICULE_H

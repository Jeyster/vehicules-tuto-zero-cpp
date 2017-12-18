#ifndef VEHICULE_H
#define VEHICULE_H

#include <iostream>
#include <string>

class Vehicule
{
    public:
        Vehicule(std::string marque = "inconnue", int prix = 10000, int anneeFabrication = 2017);
        virtual ~Vehicule();
        virtual void affiche() const;
        virtual void afficherAnneeFabrication() const;
        virtual int nbrRoues() const = 0;

    protected:
        std::string m_marque;
        int m_prix;
        int m_anneeFabrication;

    private:
};

#endif // VEHICULE_H

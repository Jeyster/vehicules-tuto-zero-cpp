#include "Garage.h"

using namespace std;

Garage::Garage()
{
}

Garage::Garage(vector<Vehicule*> listeVehicules)
    : m_listeVehicules(listeVehicules)
{
}

Garage::~Garage()
{
    //dtor
}

vector<Vehicule*> Garage::getVehicules() const
{
    return m_listeVehicules;
}

void Garage::setVehicules(vector<Vehicule*> listeVehicules)
{
        m_listeVehicules = listeVehicules;
}

void Garage::ajouterVehicule(Vehicule* vehicule)
{
    m_listeVehicules.push_back(vehicule);
}

void Garage::supprimerVehicule()
{
    m_listeVehicules.pop_back();
}


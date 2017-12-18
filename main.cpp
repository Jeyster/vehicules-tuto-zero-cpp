#include <vector>
#include "Vehicule.h"
#include "Voiture.h"
#include "Moto.h"

using namespace std;

void presenter(Vehicule const& v)  //Présente le véhicule passé en argument
{
    v.affiche();
}

int main()
{
    /*
    Vehicule vehicule;
    Voiture voiture("Opel", 15000);
    Moto moto("Yamaha", 7500, 300);
    vehicule.affiche();
    presenter(vehicule);
    voiture.affiche();
    presenter(voiture);
    moto.affiche();
    */

    vector<Vehicule*> listeVehicules;
    listeVehicules.push_back(new Voiture("Opel", 2500, 5));
    listeVehicules.push_back(new Voiture("Peugeot", 10500, 3));
    listeVehicules.push_back(new Voiture("Yamaha", 2500, 212.5));

    return 0;
}

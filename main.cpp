#include <vector>
#include "Garage.h"
#include "Vehicule.h"
#include "Voiture.h"
#include "Moto.h"
#include "Camion.h"

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

    /*
    vector<Vehicule*> listeVehicules;
    listeVehicules.push_back(new Vehicule);
    listeVehicules.push_back(new Voiture("Porshe", 45000, 3));
    listeVehicules.push_back(new Voiture("Peugeot", 10500, 5, 1994));
    listeVehicules.push_back(new Moto("Yamaha", 2500, 312.5, 2007));
    listeVehicules.push_back(new Camion("Isuzu", 20000, 10, 2000));
    */

    Garage *garage = new Garage;
    //garage->setVehicules(listeVehicules);
    garage->ajouterVehicule(new Voiture);
    garage->supprimerVehicule();
    garage->ajouterVehicule(new Camion);
    garage->ajouterVehicule(new Moto("Yamaha", 2500, 312.5, 2007));
    garage->supprimerVehicule();

    for (int i(0); i < garage->getVehicules().size(); i++)
    {
        garage->getVehicules()[i]->affiche();
        garage->getVehicules()[i]->afficherAnneeFabrication();
        cout << "Nombre de roues : " << garage->getVehicules()[i]->nbrRoues() << endl;
        delete garage->getVehicules()[i];
        garage->getVehicules()[i] = 0;
    }

    delete garage;
    garage = 0;

    return 0;
}

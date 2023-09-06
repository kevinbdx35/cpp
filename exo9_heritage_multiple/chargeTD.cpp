#include "chargeTD.h"
#include "employe.h"
#include "etudiant.h"

ChargeTD::ChargeTD(string n, string p, int a, float r,
                    int nb, float tx)
            :Personne(n,p,a), Etudiant(n, p, a, r), Employe(n, p, a, r)
{
    this->nbH = nb;
    this->txHoraire = tx;
}

ChargeTD::~ChargeTD()
{
    cout << endl << "Destruction ChargeTD" << endl;
}

void ChargeTD::infos()
{
    Personne::infos();
    cout << "Nombre d'heures travaillées : " << this->GetnbH() << endl;
    cout << "Taux horaire : " << this->GettxHoraire() << endl;
    cout << "Salaire : " << (GettxHoraire() * GetnbH()) << endl;
    cout << "Remboursement soins : " << this->Getremboursement_soins2() << " Euros" << endl;


}

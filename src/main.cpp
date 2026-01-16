#include <iostream>
using namespace std;

int main() {
  const float coutHoraireMeca = 4.0;
  const float coutHoraireElec = 5.0;
  int velosDispos = 20;
  int capacite = 20;
  int choix;
  int trajet;
  int type;
  do {
    cout << "****** Gestion d'une station Vélô ******" << endl << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Vélos disponibles : " << velosDispos << endl;
    cout << "Points d'attache disponibles: " << capacite - velosDispos << endl;
    cout << "-----------------------------------------" << endl << endl;
    cout << "1. Emprunter un vélô" << endl;
    cout << "2. Restituer un vélô" << endl;
    cout << "3. Estimer le coût de la location" << endl;
    cout << "4. Quitter l'application" << endl << endl;
    cin >> choix;
    switch (choix) {

    case 1:
      velosDispos = velosDispos - 1;
      cout << "\n";
      cout << "Vous empruntez un vélo.\n" << endl;
      break;

    case 2:
			velosDispos = velosDispos + 1;
      cout << "\n";
      cout << "Vous restituez un vélo.\n" << endl;
      break;

    case 3:
      cout << "Combien de temps durera votre trajet ? (en minutes)" << endl;
      cin >> trajet;
      cout << "Souhaitez vous emprunter un vélo : " << endl;
      cout << "1. Mécanique" << endl;
      cout << "2. Électrique" << endl;
      cin >> type;
      if (type == 1) {
        cout << "\n";
        cout << "Votre trajet coutera environ " << (trajet * coutHoraireMeca) / 60 << " €\n" << endl;
      }
      if (type == 2) {
        cout << "\n";
        cout << "Votre trajet coutera environ " << (trajet * coutHoraireElec) / 60 << " €\n" << endl;
      }
      break;

    case 4:
      cout << "Au revoir !" << endl;
      return 0;
    }
  } while (choix != 4);
}

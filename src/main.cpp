#include <iostream>


using namespace std;

int i;

int main() { 

             cout << "\t **************** Menu *************** \n";
             cout << "\n \t 1 - Multimédia \n";
             cout << "\t 2 - Téléphone \n";
             cout << "\t 3 - Connexions \n";
             cout << "\t 4 - Personnalisation - Configuration \n";
             cout << "\n \t *************************************";

             cout << "\n \t Votre choix : ";
             cin >> i;

             switch (i){

                 case 1:
                    cout << "\n \t Vous avez choisi Multimédia \n";
                    break;
             case 2:
                    cout << "\n \t Vous avez choisi Téléphone \n";
                    break;
             case 3:
                    cout << "\n \t Vous avez choisi Connexions \n";
                    break;
             case 4:
                    cout << "\n \t Vous avez choisi Personnalisation - Configuration \n";
                    break;
             default: cout << "\n \t Erreur de saisie\n";}
}
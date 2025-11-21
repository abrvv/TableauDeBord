#include <iostream>


using namespace std;

unsigned char i;

int main() { 
       do{
             cout << "\t **************** Menu *************** \n";
             cout << "\n \t 1 - Multimédia \n";
             cout << "\t 2 - Téléphone \n";
             cout << "\t 3 - Connexions \n";
             cout << "\t 4 - Personnalisation - Configuration \n";
             cout << "\n \t *************************************";

             cout << "\n \t Votre choix : ";
             cin >> i;

             switch (i){

              case '1':
                    cout << "\n \t Vous avez choisi Multimédia \n";
                    break;
              case '2':
                    cout << "\n \t Vous avez choisi Téléphone \n";
                    break;
              case '3':
                    cout << "\n \t Vous avez choisi Connexions \n";
                    break;
              case '4':
                    cout << "\n \t Vous avez choisi Personnalisation - Configuration \n";
                     do{
                         cout << "\n \t 1 - Définir les paramètres du véhicule \n";
                         cout << "\t 2 - Personnalisation \n";
                         cout << "\t 3 - Configuration afficheur \n";

                         cout << "\n \t Votre choix : ";
                         cin >> i;
                     
                     }while (i != 'R');
                    break;
             ;}
              
       }while (i != '0');
}
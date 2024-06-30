
#include <iostream>
#include <string>
#include "randomize.hpp";
#include <sstream>
using namespace std;



int main() {
	int rand(randomize(0, 10));
	int choice;
	string input;
	do
	{
		cout << "Entre un nombre entre 1 et 10" << endl;
		getline(cin, input);
		stringstream ss(input);
		if (ss >> choice)
		{
			if (choice < rand)
			{
				cout << "c'est plus !";
			}
			else if (choice > rand) {

				cout << "c'est moins !";
			}
			else {
				cout << "C'est ca !";
			}
		}
		else {
			cout << "Entre un chiffre valide !" << endl;
			cin.clear(); // efface l'état d'erreur de cin
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Vide le buffer d'entrée tel qui l'etait avant l'etat d'erreur, c'est chelou mais c'est comme ca qu'on fait, c++ est con
				
		}
		

	} while (rand != choice);

}



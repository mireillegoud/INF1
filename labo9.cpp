/**
-----------------------------------------------------------------------------------
Laboratoire : 9
\file    labo9.cpp
\author  Mireille Goud
\date    15.11.2018

\brief   Appel des fonctions de saisie et de calcul

\mainpage labo9
   Le programme saisit une valeur entière au clavier etet boucle tant que la valeur saisie est différente de 0. 
Les actions suivantes seront exécutées en fonction de la valeur lue au clavier :

-	1 : saisir 2 valeurs entières et un opérateur et afficher le résultat
-	2 : saisir 2 valeurs à virgule flottante et un opérateur et afficher le résultat
-	3 : saisir une valeur à virgule flottante et afficher la racine carrée avec une précision de 10-1 et une précision de 10-10
-	4 : saisir 1 chaine de caractère et afficher la somme de ses caractères

\version 1.0
Compilateur : MinGW-g++ 5.2.0
-----------------------------------------------------------------------------------
*/

#include <iostream>
#include <iomanip>

#include "labo9FctMath.h"
#include "labo9Saisie.h"

using namespace std;

void affiche(int a) {
	cout << a << endl; 
}
void main() {
	long long choix;
	const int FIN = 0;

	saisie(choix, "Choix : ");
	while (choix != FIN) {
		switch (choix) {
		case 1: // Saisie de 2 entiers et d'un opérateur
		{
					long long val1, val2, resultat;
					char oper;
					saisie(val1, "Operande 1 : ");
					saisie(val2, "Operande 2 : ");
					saisie(oper, "Operateur : ");
					if (operation(val1, val2, oper, resultat)) {
						cout << "Resultat : " << resultat << endl;
					}
					else {
						cout << "Operation impossible\n";
					}
		}
			break;
		case 2 :  // Saisie de 2 double et d'un opérateur
		{
					  double val1, val2, resultat;
					  char oper;
					  saisie(val1, "Operande 1 : ");
					  saisie(val2, "Operande 2 : ");
					  saisie(oper, "Operateur : ");
					  if (operation(val1, val2, oper, resultat)) {
						  cout << "Resultat : " << resultat << endl;
					  }
					  else {
						  cout << "Operation impossible\n";
					  }
		}
			break;
		case 3: // Saisie d'une valeur et calcul de la racine carré
		{
					double val;
					saisie(val, "Valeur : ");
					if (val <= 0) {
						cout << "La valeur doit être positive");
					} else {
						cout << "Racine carre avec precision : " << 1e-1 
						   << ' ' << setw(8) << racineCarre(val, 1e-1) << endl;
						cout << "Racine carre avec precision 1e-6 : " << 1e-10 
						   << ' ' << setw(8) << racineCarre(val, 1e-10) << endl;
					}
					break;
		}
		case 4: // Saisie d'une chaine et calcul de la somme des caractères
		{
					string st;
					saisie(st, "Chaine : ");
					cout << "Somme des caracteres : " << sommeString(st) << endl;
					break;
		}
		}
		saisie(choix, "Choix : ");
	}
}
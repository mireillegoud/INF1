/**
-----------------------------------------------------------------------------------
Laboratoire : 9
\file     : labo9Saisie.cpp
\author   : Mireille Goud
\date     : 15.11.2018

\brief    : Librairie saisie de valeurs au clavier

\detail   : Fonctions pour le labo9

Compilateur : MinGW-g++ 5.2.0
-----------------------------------------------------------------------------------
*/
#include "labo9Saisie.h"
#include <iostream>

using namespace std;

const unsigned LGMAX = numeric_limits<streamsize>::max();

void saisie(char& c, const string &message, const string &erreur) {
	cout << message;
	cin >> c;
	cin.ignore(LGMAX, '\n');
}
void saisie(int &val, const string &message, const string &erreur) {
	cout << message;
	cin >> val;
	while (cin.fail()) {
		cout << erreur << " " << message;
		cin.clear();
		cin.ignore(LGMAX, '\n');
		cin >> val;
	}
	cin.ignore(LGMAX, '\n');
}

void saisie(long long &val, const string &message, const string &erreur) {
	cout << message;
	cin >> val;
	while (cin.fail()) {
		cout << erreur << " " << message;
		cin.clear();
		cin.ignore(LGMAX, '\n');
		cin >> val;
	}
	cin.ignore(LGMAX, '\n');
}

void saisie(double &val, const string &message, const string &erreur) {
	cout << message;
	cin >> val;
	while (cin.fail()) {
		cout << erreur << " " << message;
		cin.clear();
		cin.ignore(LGMAX, '\n');
		cin >> val;
	}
	cin.ignore(LGMAX, '\n');
}

void saisie(string &val, const string &message, const string &erreur) {
	cout << message;
	cin >> skipws >> val;
	cin.ignore(LGMAX, '\n');
}
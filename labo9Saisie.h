/**
-----------------------------------------------------------------------------------
Laboratoire : 9
\file     labo9Saisie.h
\author   Mireille Goud
\date     15.11.2018

\brief    Librairie saisie de valeurs au clavier

\detail   Fonctions pour le labo9

Compilateur MinGW-g++ 5.2.0
-----------------------------------------------------------------------------------
*/
#include <string>

using namespace std;

void saisie(char &, const string &, const string & = "Erreur");

void saisie(int &, const string &, const string & = "Erreur");

void saisie(long long &, const string &, const string & = "Erreur");

void saisie(double &, const string &, const string & = "Erreur");

void saisie(string &, const string &, const string & = "Erreur");
#ifndef LABO9FCTMATH
#define LABO9FCTMATH
/**
-----------------------------------------------------------------------------------
Laboratoire : 9
\file    labo9FctMath.h
\author  Mireille Goud
\date    15.11.2018

\brief   Librairie math�matique

\detail Fonctions pour le labo9

Compilateur MinGW-g++ 5.2.0
-----------------------------------------------------------------------------------
*/
#include <string>

using namespace std;

/**
\brief Operations sur les entiers
\param[in] v1 Op�rande gauche
\param[in] v1 Op�rande droit
\param[in] op Op�rateur
\param[out] res R�sultat de l'op�ration
\return true si l'op�ration est correcte et false sinon
\details
La fonction ex�cute l'op�ration suivant l'op�rateur (+ - * / %).
La division est enti�re
Elle v�rifie que l'op�rateur existe et que l'op�rande droit
est diff�rente de 0 pour la division et le modulo
*/
bool operation(long long v1, long long v2, char op, long long &res);

/**
\brief Operations sur les entiers
\param[in] v1 Op�rande gauche
\param[in] v1 Op�rande droit
\param[in] op Op�rateur
\param[out] res R�sultat de l'op�ration
\return true si l'op�ration est correcte et false sinon
\details
La fonction ex�cute l'op�ration suivant l'op�rateur (+ - * / %).
La division est enti�re
Elle v�rifie que l'op�rateur existe et que l'op�rande droit
est diff�rente de 0 pour la division et le modulo
*/
bool operation(double, double, char, double &);

double racineCarre(double, double);

long long sommeString(const string &);

#endif
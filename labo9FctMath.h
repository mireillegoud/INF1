#ifndef LABO9FCTMATH
#define LABO9FCTMATH
/**
-----------------------------------------------------------------------------------
Laboratoire : 9
\file    labo9FctMath.h
\author  Mireille Goud
\date    15.11.2018

\brief   Librairie mathématique

\detail Fonctions pour le labo9

Compilateur MinGW-g++ 5.2.0
-----------------------------------------------------------------------------------
*/
#include <string>

using namespace std;

/**
\brief Operations sur les entiers
\param[in] v1 Opérande gauche
\param[in] v1 Opérande droit
\param[in] op Opérateur
\param[out] res Résultat de l'opération
\return true si l'opération est correcte et false sinon
\details
La fonction exécute l'opération suivant l'opérateur (+ - * / %).
La division est entière
Elle vérifie que l'opérateur existe et que l'opérande droit
est différente de 0 pour la division et le modulo
*/
bool operation(long long v1, long long v2, char op, long long &res);

/**
\brief Operations sur les entiers
\param[in] v1 Opérande gauche
\param[in] v1 Opérande droit
\param[in] op Opérateur
\param[out] res Résultat de l'opération
\return true si l'opération est correcte et false sinon
\details
La fonction exécute l'opération suivant l'opérateur (+ - * / %).
La division est entière
Elle vérifie que l'opérateur existe et que l'opérande droit
est différente de 0 pour la division et le modulo
*/
bool operation(double, double, char, double &);

double racineCarre(double, double);

long long sommeString(const string &);

#endif
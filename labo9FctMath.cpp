/**
-----------------------------------------------------------------------------------
\Laboratoire : 9
\file     : labo9Fonctions.cpp
\author   : Mireille Goud
\date     : 15.11.2018

\brief    : Librairie mathématique

\detail   : Fonctions pour le labo9

Compilateur : MinGW-g++ 5.2.0
-----------------------------------------------------------------------------------
*/

#include "labo9FctMath.h"

bool operation(long long v1, long long v2, char op, long long &res) {
	bool ok = true;
	switch (op) {
	case '+' :
		res = v1 + v2;
		break;
	case '-':
		res = v1 - v2;
		break;
	case '*':
		res = v1 * v2;
		break;
	case '/' :
		if (v2 == 0) {
			ok = false;
		}
		else {
			res = v1 / v2;
		}
		break;
	case '%':
		if (v2 == 0) {
			ok = false;
		}
		else {
			res = v1 % v2;
		}
		break;
	default :
		ok = false;
	}
	return ok;
}

bool operation(double v1, double v2, char op, double &res){
	bool ok = true;
	switch (op) {
	case '+':
		res = v1 + v2;
		break;
	case '-':
		res = v1 - v2;
		break;
	case '*':
		res = v1 * v2;
		break;
	case '/':
		if (v2 == 0) {
			ok = false;
		}
		else {
			res = v1 / v2;
		}
		break;
	default :
		ok = false;
	}
	return ok;
}

double absolu(double d) {
	return d >= 0 ? d : -d;
}
double racineCarre(double a, double prec) {
	double res = 1;

	while (absolu(a - res * res) > prec) {
		res = 0.5 * (res + a / res);
	}
	return res;

}

long long sommeString(const string &s) {
	long long som = 0;
	for (int i = 0; i < s.size(); i++) {
		som += s[i];
	}
	return som;
}

double puissance(double base, unsigned exp)
{
	double val = 1.0;
	double base2i = base;

	while (exp) {
		val *= exp % 2 ? base2i : 1;
		base2i *= base2i;
		exp /= 2;
	}
	return val;
}
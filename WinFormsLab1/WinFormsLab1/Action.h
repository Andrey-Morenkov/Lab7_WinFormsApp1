#include "stdafx.h"
#include "TPolynom.h"

void TPolynom::InsPoly(int type, int _x,int _y, int _z)
{
	Monom monom;
	monom.coeff = type;
	monom.type = 100 * _x + 10 * _y + _z;
	if (monom.coeff != 0)
	{
		TPolynom p = monom;
		(*this) += p;
	}

}

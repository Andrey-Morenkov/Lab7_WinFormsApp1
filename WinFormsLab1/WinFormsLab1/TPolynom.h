#pragma once
#include "THeadList.h"
#include <string>
#include <conio.h>
#include <iostream>

using namespace std;

struct Monom
{
	int type;
	int coeff;

	Monom()
	{
		type = -1;
		coeff = 0;
	}

	Monom(int t, int c) : type(t), coeff(c) {}
};

class TPolynom : public THeadList<Monom>
{
public:
	TPolynom() {}
	TPolynom(const Monom& m);

	TPolynom & operator +=(TPolynom & p);

	void InsPoly(int type, int _x, int _y, int _z);
	string OutPoly();
};
TPolynom::TPolynom(const Monom& m)
{
	InsLast(m);
}


TPolynom & TPolynom::operator += (TPolynom & p)   // ����������� �������� � ��������
{
	Reset();
	p.Reset();
	while (!IsEnd() && !p.IsEnd())
	{
		if (pCurr->GetVal().type > p.pCurr->GetVal().type)
			GoNext();
		else 
		    if (pCurr->GetVal().type < p.pCurr->GetVal().type)
		    {
			    InsCurrent(p.pCurr->GetVal());
				p.GoNext();
		    }
			else
			{
				pCurr->GetVal().coeff += p.pCurr->GetVal().coeff;
				if (pCurr->GetVal().coeff == 0)
					DelCurrent();
				p.GoNext();
			}
	}
	while (!p.IsEnd())
	{
		InsLast(p.pCurr->GetVal());
		p.GoNext();
	}
	return *this;
}

TPolynom operator + (TPolynom & p1,TPolynom & p2)
{
	TPolynom p(p1);
	p += p2;
	return p;
}


/*void TPolynom::InsPoly()
{
	Monom monom;
	int x, y, z, i = 1;
	char tmp1=NULL;
	while (tmp1 != 'y')
	{
		cout << "����� #" << i << endl;
		cout << "����� ����������" << endl;
		cin >> monom.coeff;
		cout << "����� ��� �����:" << endl;
		cout << "X:";
		cin >> x;
		cout << "Y:";
		cin >> y;
		cout << "Z:";
		cin >> z;
		monom.type = 100 * x + 10 * y + z;
		if (monom.coeff != 0)
		{
			TPolynom p = monom;
			(*this) += p;
		}
		cout << "��������� ����? y/n" << endl;
		cin >> tmp1;
		i++;
	}
}*/

string TPolynom::OutPoly()
{
	int len1 = len;
	string coeff,x,y,z;
	string outp;
	Reset();
	if (len1 == 0)
		outp = "0";
	while (len1 != 0)
	{
		x = pCurr->GetVal().type / 100;
		y = pCurr->GetVal().type % 100 / 10;
		z = pCurr->GetVal().type % 100 % 10;
		coeff = pCurr->GetVal().coeff;
		len1--;
		if (outp != "0")
		{
			string tmp = coeff + "( x^" + x + "y^" + y + "z^" + z + ") ";
			outp += tmp;
		}
		else
		{

		}
		GoNext();
	}
	return outp;
}
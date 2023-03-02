#include "PhanSo.h"

void PhanSo::Set(int TuSo, int MauSo)
{
	this->_iTuSo = TuSo;
	this->_iMauSo = MauSo;
}
void PhanSo::SetTuSo(int TuSo)
{
	this->_iTuSo = TuSo;
}
void PhanSo::SetMauSo(int MauSo)
{
	this->_iMauSo = MauSo;
}
int PhanSo::GetTuSo()
{
	return this->_iTuSo;
}
int PhanSo::GetMauSo()
{
	return this->_iMauSo;
}
PhanSo PhanSo::ToiGianPhanSo()
{
	if (!this->_iTuSo) return *this;
	if (this->_iMauSo < 0)
	{
		this->_iMauSo *= -1;
		this->_iTuSo *= -1;
	}
	if (this->_iMauSo == 1) return *this;
	int a = abs(this->_iTuSo), b = abs(this->_iMauSo);
	while (a != b)
		if (a > b)
			a -= b;
		else
			b -= a;
	this->_iTuSo /= a;
	this->_iMauSo /= b;
	return *this;
}
std::istream& operator >>(std::istream& is, PhanSo& p)
{
	std::cout << "Nhap tu so: ";
	is >> p._iTuSo;
	std::cout << "Nhap mau so: ";
	is >> p._iMauSo;
	while (!p._iMauSo)
	{
		std::cout << "Nhap lai mau so: ";
		is >> p._iMauSo;
	}
	p.ToiGianPhanSo();
	return is;
}
std::ostream& operator <<(std::ostream& os, PhanSo p)
{
	os << p._iTuSo;
	if (p._iTuSo && p._iMauSo != 1)
		os << '/' << p._iMauSo;
	return os;
}
PhanSo operator +(PhanSo a, PhanSo b)
{
	PhanSo c((a._iTuSo * b._iMauSo) + (a._iMauSo * b._iTuSo), a._iMauSo * b._iMauSo);
	return c.ToiGianPhanSo();
}
PhanSo operator -(PhanSo a, PhanSo b)
{
	PhanSo c((a._iTuSo * b._iMauSo) - (a._iMauSo * b._iTuSo), a._iMauSo * b._iMauSo);
	return c.ToiGianPhanSo();
}
PhanSo operator *(PhanSo a, PhanSo b)
{
	PhanSo c(a._iTuSo * b._iTuSo, a._iMauSo * b._iMauSo);
	return c.ToiGianPhanSo();
}
PhanSo operator /(PhanSo a, PhanSo b)
{
	PhanSo c(a._iTuSo * b._iMauSo, a._iMauSo * b._iTuSo);
	return c.ToiGianPhanSo();
}
bool operator == (PhanSo a, PhanSo b)
{
	return (a._iTuSo * b._iMauSo) == (a._iMauSo * b._iTuSo);
}
bool operator != (PhanSo a, PhanSo b)
{
	return !(a == b);
}
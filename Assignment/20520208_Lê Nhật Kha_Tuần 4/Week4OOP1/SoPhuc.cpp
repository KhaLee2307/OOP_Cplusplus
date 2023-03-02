#include "SoPhuc.h"

void SoPhuc::Set(double SoThuc, double SoAo)
{
	this->_dSoThuc = SoThuc;
	this->_dSoAo = SoAo;
}
void SoPhuc::SetSoThuc(double SoThuc)
{
	this->_dSoThuc = SoThuc;
}
void SoPhuc::SetSoAo(double SoAo)
{
	this->_dSoAo = SoAo;
}
double SoPhuc::GetSoThuc()
{
	return this->_dSoThuc;
}
double SoPhuc::GetSoAo()
{
	return this->_dSoAo;
}
std::istream& operator >> (std::istream& is, SoPhuc& p)
{
	std::cout << "Nhap so thuc: ";
	is >> p._dSoThuc;
	std::cout << "Nhap so ao: ";
	is >> p._dSoAo;
	return is;
}
std::ostream& operator << (std::ostream& os, SoPhuc p)
{
	if (!p._dSoThuc && !p._dSoAo)
		return (os << 0);
	if (!p._dSoThuc)
		return (os << p._dSoAo << 'i');
	os << p._dSoThuc;
	if (!p._dSoAo) return os;
	if (p._dSoAo > 0)
		os << '+';
	os << p._dSoAo << 'i';
	return os;
}
SoPhuc operator + (SoPhuc a, SoPhuc b)
{
	SoPhuc c(a._dSoThuc + b._dSoThuc, a._dSoAo + b._dSoAo);
	return c;
}
SoPhuc operator - (SoPhuc a, SoPhuc b)
{
	SoPhuc c(a._dSoThuc - b._dSoThuc, a._dSoAo - b._dSoAo);
	return c;
}
SoPhuc operator * (SoPhuc a, SoPhuc b)
{
	SoPhuc c((a._dSoThuc * b._dSoThuc) - (a._dSoAo * b._dSoAo), (a._dSoThuc * b._dSoAo) + (a._dSoAo * b._dSoThuc));
	return c;
}
SoPhuc operator / (SoPhuc a, SoPhuc b)
{
	SoPhuc c;
	c._dSoThuc = (a._dSoThuc * b._dSoThuc + a._dSoAo * b._dSoAo) / (pow(b._dSoThuc, 2) + pow(b._dSoAo, 2));
	c._dSoAo = (b._dSoThuc * a._dSoAo - a._dSoThuc * b._dSoAo) / (pow(b._dSoThuc, 2) + pow(b._dSoAo, 2));
	return c;
}
bool operator == (SoPhuc a, SoPhuc b)
{
	return (a._dSoThuc == b._dSoThuc) && (a._dSoAo == b._dSoAo);
}
bool operator != (SoPhuc a, SoPhuc b)
{
	return !(a == b);
}

#include "PhanSo.h"
#include <cmath>

void PhanSo::NhapTuSo()
{
	std::cout << "Nhap vao tu so: ";
	std::cin >> this->_iTuSo;
}
void PhanSo::NhapMauSo()
{
	std::cout << "Nhap vao mau so: ";
	std::cin >> this->_iMauSo;
}
PhanSo PhanSo::CongPhanSo(const PhanSo& a)
{
	PhanSo c;
	c._iTuSo = this->_iTuSo * a._iMauSo + this->_iMauSo * a._iTuSo;
	c._iMauSo = this->_iMauSo * a._iMauSo;
	return c;
}
PhanSo PhanSo::TruPhanSo(const PhanSo& a)
{
	PhanSo c;
	c._iTuSo = this->_iTuSo * a._iMauSo - this->_iMauSo * a._iTuSo;
	c._iMauSo = this->_iMauSo * a._iMauSo;
	return c;
}
PhanSo PhanSo::NhanPhanSo(const PhanSo& a)
{
	PhanSo c;
	c._iTuSo = this->_iTuSo * a._iTuSo;
	c._iMauSo = this->_iMauSo * a._iMauSo;
	return c;
}
PhanSo PhanSo::ChiaPhanSo(const PhanSo& a)
{
	PhanSo c;
	c._iTuSo = this->_iTuSo * a._iMauSo;
	c._iMauSo = this->_iMauSo * a._iTuSo;
	return c;
}
int PhanSo::UCLN()
{
	int x = abs(this->_iTuSo), y = abs(this->_iMauSo);
	while (x != y)
	{
		if (x > y) x -= y;
		else y -= x;
	}
	return x;
}
int PhanSo::XuatPhanSo()
{
	if (!this->_iTuSo) { std::cout << 0 << std::endl; return 0; }
	if (this->_iMauSo < 0)
	{
		this->_iTuSo *= -1;
		this->_iMauSo *= -1;
	}
	int k = PhanSo::UCLN();
	this->_iTuSo /= k;
	this->_iMauSo /= k;
	if (this->_iMauSo == 1) { std::cout << this->_iTuSo << std::endl; return 0; }
	std::cout << this->_iTuSo << "/" << this->_iMauSo << std::endl;
}
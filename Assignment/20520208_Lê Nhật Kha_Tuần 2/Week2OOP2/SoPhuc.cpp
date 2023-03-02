#include "SoPhuc.h"
#include <cmath>

void SoPhuc::NhapSoPhuc()
{
	std::cout << "Nhap so thuc: ";
	std::cin >> this->_dSoThuc;
	std::cout << "Nhap so ao: ";
	std::cin >> this->_dSoAo;
}
SoPhuc SoPhuc::CongHaiSoPhuc(const SoPhuc& a)
{
	SoPhuc c;
	c._dSoThuc = this->_dSoThuc + a._dSoThuc;
	c._dSoAo = this->_dSoAo + a._dSoAo;
	return c;
}
SoPhuc SoPhuc::TruHaiSoPhuc(const SoPhuc& a)
{
	SoPhuc c;
	c._dSoThuc = this->_dSoThuc - a._dSoThuc;
	c._dSoAo = this->_dSoAo - a._dSoAo;
	return c;
}
SoPhuc SoPhuc::NhanHaiSoPhuc(const SoPhuc& a)
{
	SoPhuc c;
	c._dSoThuc = this->_dSoThuc * a._dSoThuc - this->_dSoAo * a._dSoAo;
	c._dSoAo = this->_dSoThuc * a._dSoAo + this->_dSoAo * a._dSoThuc;
	return c;
}
SoPhuc SoPhuc::ChiaHaiSoPhuc(const SoPhuc& a)
{
	SoPhuc c;
	c._dSoThuc = (this->_dSoThuc * a._dSoThuc + this->_dSoAo * a._dSoAo) / (pow(a._dSoThuc, 2) + pow(a._dSoAo, 2));
	c._dSoAo = (a._dSoThuc * this->_dSoAo - this->_dSoThuc * a._dSoAo) / (pow(a._dSoThuc, 2) + pow(a._dSoAo, 2));
	return c;
}
void SoPhuc::XuatSoPhuc()
{
	if (this->_dSoAo > 0) std::cout << this->_dSoThuc << '+' << this->_dSoAo << 'i' << std::endl;
	else if (this->_dSoAo < 0) std::cout << this->_dSoThuc << this->_dSoAo << 'i' << std::endl;
	else std::cout << this->_dSoThuc << std::endl;
}
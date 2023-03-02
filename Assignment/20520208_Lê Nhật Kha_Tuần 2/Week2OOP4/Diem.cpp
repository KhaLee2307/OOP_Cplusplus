#include "Diem.h"
#include <cmath>

double Diem::LayHoanhDo()
{
	return this->_dHoanhDo;
}
double Diem::LayTungDo()
{
	return this->_dTungDo;
}
void Diem::TinhTienDiem(Diem Vector)
{
	this->_dHoanhDo += Vector._dHoanhDo;
	this->_dTungDo += Vector._dTungDo;
}
void Diem::QuayDiem(Diem TamQuay, double GocQuay)
{
	this->_dHoanhDo = TamQuay._dHoanhDo + (this->_dHoanhDo - TamQuay._dHoanhDo) * cos(GocQuay) - (this->_dTungDo - TamQuay._dTungDo) * sin(GocQuay);
	this->_dTungDo = TamQuay._dTungDo + (this->_dHoanhDo - TamQuay._dHoanhDo) * sin(GocQuay) - (this->_dTungDo - TamQuay._dTungDo) * cos(GocQuay);
}
void Diem::NhapDiem()
{
	std::cout << "Nhap hoanh do: ";
	std::cin >> this->_dHoanhDo;
	std::cout << "Nhap tung do: ";
	std::cin >> this->_dTungDo;
}
void Diem::XuatDiem()
{
	std::cout << '(' << this->_dHoanhDo << ',' << this->_dTungDo << ")\n";
}
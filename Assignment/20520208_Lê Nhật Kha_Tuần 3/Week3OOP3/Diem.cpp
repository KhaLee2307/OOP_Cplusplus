#include "Diem.h"
#include <cmath>

void Diem::Nhap()
{
	std::cout << "Nhap hoanh do: ";
	std::cin >> this->_dHoanhDo;
	std::cout << "Nhap tung do: ";
	std::cin >> this->_dTungDo;
}
void Diem::Xuat()
{
	std::cout << '(' << this->_dHoanhDo << ';' << this->_dTungDo << ')';
}
void Diem::Change(double HoanhDo, double TungDo)
{
	this->_dHoanhDo = HoanhDo;
	this->_dTungDo = TungDo;
}
double Diem::HoanhDo()
{
	return this->_dHoanhDo;
}
double Diem::TungDo()
{
	return this->_dTungDo;
}
Diem Diem::TinhTien(Diem Vector)
{
	Diem B;
	B._dHoanhDo = this->_dHoanhDo + Vector._dHoanhDo;
	B._dTungDo = this->_dTungDo + Vector._dTungDo;
	return B;
}
Diem Diem::Quay(Diem Quay, double GocQuay)
{
	Diem B;
	B._dHoanhDo = (this->_dHoanhDo - Quay._dHoanhDo) * cos(GocQuay) - (this->_dTungDo - Quay._dTungDo) * sin(GocQuay) + this->_dHoanhDo;
	B._dTungDo = (this->_dHoanhDo - Quay._dHoanhDo) * sin(GocQuay) - (this->_dTungDo - Quay._dTungDo) * cos(GocQuay) + this->_dTungDo;
	return B;
}
#include "ThoiGian.h"

void ThoiGian::Nhap()
{
	std::cout << "Nhap gio: ";
	std::cin >> this->_uGio;
	std::cout << "Nhap phut: ";
	std::cin >> this->_uPhut;
	std::cout << "Nhap giay: ";
	std::cin >> this->_uGiay;
}
void ThoiGian::Xuat()
{
	std::cout << "thoi gian la: ";
	std::cout << this->_uGio << 'h' << this->_uPhut << "'" << this->_uGiay << "''\n";
}
unsigned short ThoiGian::Gio()
{
	return this->_uGio;
}
unsigned short ThoiGian::Phut()
{
	return this->_uPhut;
}
unsigned short ThoiGian::Giay()
{
	return this->_uGiay;
}

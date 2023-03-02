#include "NhanVien.h"

void NhanVien::inputNhanVien()
{
	std::cout << "Nhap ho va ten: ";
	getline(std::cin, this->HoVaTen);
	std::cout << "Nhap ngay sinh:\n";
	std::cin >> this->NgaySinh;
}
void NhanVien::outputNhanVien()
{
	std::cout << std::setw(24) << std::left << this->HoVaTen;
	std::cout << std::setw(16) << std::left << this->NgaySinh;
	std::cout << std::setw(8) << std::left << this->getLuong() << std::endl;
}
long long NhanVien::getLuong()
{
	return this->Luong;
}
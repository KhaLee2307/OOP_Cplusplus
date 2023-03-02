#include "CanHo.h"

void CanHo::setDiaChi(std::string DiaChi)
{
	this->DiaChi = DiaChi;
}
void CanHo::setTienCoc(long long TienCoc)
{
	this->TienCoc = TienCoc;
}
void CanHo::setTienThue(long long TienThue)
{
	this->TienThue = TienThue;
}
void CanHo::setConTrong(bool ConTrong)
{
	this->ConTrong = ConTrong;
}
std::string CanHo::getDiaChi()
{
	return this->DiaChi;
}
long long CanHo::getTienCoc()
{
	return this->TienCoc;
}
long long CanHo::getTienThue()
{
	return this->TienThue;
}
bool CanHo::getConTrong()
{
	return this->ConTrong;
}
void CanHo::inputCanHo()
{
	std::cout << "Nhap so tien dat coc: ";
	std::cin >> this->TienCoc;
	std::cout << "Nhap so tien thue hang thang: ";
	std::cin >> this->TienThue;
	std::cout << "Nhap tinh trang can ho (1 la con trong, 0 la dang cho thue): ";
	std::cin >> this->ConTrong;
	if (!this->ConTrong) this->TienThuePhong += this->TienThue;
}
void CanHo::outputCanHo()
{
	std::cout << std::setw(16) << std::left << this->TienCoc;
	std::cout << std::setw(16) << std::left << this->TienThue;
	if (this->ConTrong) std::cout << "Con trong\n";
	else std::cout << "Dang thue\n";
}
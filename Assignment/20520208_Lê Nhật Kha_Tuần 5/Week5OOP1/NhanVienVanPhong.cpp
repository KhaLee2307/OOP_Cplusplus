#include "NhanVienVanPhong.h"

void NhanVienVanPhong::inputNhanVien()
{
	NhanVien::inputNhanVien();
	std::cout << "Nhap so ngay lam viec: ";
	std::cin >> this->SoNgayLamViec;
}
long long NhanVienVanPhong::getLuong()
{
	this->Luong = (long long) this->SoNgayLamViec * 100000;
	return this->Luong;
}
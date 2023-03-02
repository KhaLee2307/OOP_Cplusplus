#include "NhanVienCongNhat.h"

long long NhanVienCongNhat::getLuong(ThoiGian HienTai)
{
	this->Luong = (long long) this->SoNgayLam * 500000;
	this->KiemTra();
	return this->Luong;
}
void NhanVienCongNhat::inputNhanVien()
{
	NhanVien::inputNhanVien();
	std::cout << "Nhap so ngay lam: ";
	std::cin >> this->SoNgayLam;
}
bool NhanVienCongNhat::KiemTra()
{
	if (this->SoNgayLam < 22)
	{
		this->Luong *= 0.9;
		return false;
	}
	return true;
}
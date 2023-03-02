#include "NhanVienSanPham.h"

long long NhanVienSanPham::getLuong(ThoiGian HienTai)
{
	this->Luong = (long long)this->SoSanPham * 60000;
	this->KiemTra();
	return this->Luong;
}
void NhanVienSanPham::inputNhanVien()
{
	NhanVien::inputNhanVien();
	std::cout << "Nhap so san pham lam duoc: ";
	std::cin >> this->SoSanPham;
}
bool NhanVienSanPham::KiemTra()
{
	if (this->SoSanPham < 230)
	{
		this->Luong *= 0.92;
		return false;
	}
	return true;
}
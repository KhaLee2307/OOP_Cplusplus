#include "NhanVienSanXuat.h"

void NhanVienSanXuat::inputNhanVien()
{
	NhanVien::inputNhanVien();
	std::cout << "Nhap luong can ban: ";
	std::cin >> this->LuongCanBan;
	std::cout << "Nhap so san pham da san xuat: ";
	std::cin >> this->SoSanPham;
}
long long NhanVienSanXuat::getLuong()
{
	this->Luong = this->LuongCanBan + (long long) this->SoSanPham * 5000;
	return this->Luong;
}
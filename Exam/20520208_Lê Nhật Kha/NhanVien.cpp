#include "NhanVien.h"

long long NhanVien::getLuong(ThoiGian HienTai)
{
	this->Luong = this->LuongCoBan + (long long) (HienTai.Nam - this->NgayGiaNhap.Nam) * ChiSoPhucLoi;
	return this->Luong;
}
void NhanVien::inputNhanVien()
{
	std::cin.ignore();
	std::cout << "Nhap ho va ten: ";
	getline(std::cin, this->HoVaTen);
	std::cout << "Nhap ngay sinh:\n";
	std::cin >> this->NgaySinh;
	std::cout << "Nhap ngay gia nhap:\n";
	std::cin >> this->NgayGiaNhap;
	std::cout << "Nhap gioi tinh (F la nu, M la nam): ";
	std::cin >> this->GioiTinh;
	std::cout << "Nhap dia chi: ";
	std::cin.ignore();
	getline(std::cin, this->DiaChi);
	std::cout << "Nhap luong co ban: ";
	std::cin >> this->LuongCoBan;
}
void NhanVien::outputNhanVien()
{
	std::cout << std::setw(32) << std::left << this->HoVaTen;
	std::cout << std::setw(24) << std::left << this->NgaySinh;
	std::cout << std::setw(24) << std::left << this->NgayGiaNhap;
	std::cout << std::setw(16) << std::left << this->GioiTinh;
	std::cout << std::setw(32) << std::left << this->DiaChi;
	std::cout << std::setw(8) << std::left << this->Luong << std::endl;
}
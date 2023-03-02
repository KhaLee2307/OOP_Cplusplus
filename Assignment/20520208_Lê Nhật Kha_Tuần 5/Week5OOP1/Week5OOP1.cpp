#include "NhanVienSanXuat.h"
#include "NhanVienVanPhong.h"

int main()
{
	std::cout << "Nhap so luong nhan vien: ";
	unsigned short SoLuong;
	long long TongLuong = 0;
	long long LuongMax = 0;
	long long LuongMin = 0;
	std::cin >> SoLuong;
	NhanVien** DanhSach = new NhanVien * [SoLuong];
	for (unsigned short i = 0; i < SoLuong; ++i)
	{
		std::cout << "\nNhap thong tin nhan vien " << i + 1 << std::endl;
		std::cout << "Nhan 0 de nhap Nhan vien san xuat | Nhan 1 de nhap Nhan vien van phong: ";
		unsigned x; std::cin >> x;
		std::cin.ignore();
		if (x)
			DanhSach[i] = new NhanVienVanPhong;
		else
			DanhSach[i] = new NhanVienSanXuat;
		DanhSach[i]->inputNhanVien();
		TongLuong += DanhSach[i]->getLuong();
		if (!LuongMin)
			LuongMin = DanhSach[i]->getLuong();
		else if (LuongMin > DanhSach[i]->getLuong())
			LuongMin = DanhSach[i]->getLuong();
		if (DanhSach[i]->getLuong() > LuongMax)
			LuongMax = DanhSach[i]->getLuong();
	}
	std::cout << "\n\t\t\tDANH SACH NHAN VIEN\n\n";
	std::cout << std::setw(8) << std::left << "STT";
	std::cout << std::setw(24) << std::left << "Ho va ten";
	std::cout << std::setw(16) << std::left << "Ngay sinh";
	std::cout << "Luong" << std::endl;
	for (unsigned short i = 0; i < SoLuong; ++i)
	{
		std::cout << std::setw(8) << std::left << i + 1;
		DanhSach[i]->outputNhanVien();
	}
	std::cout << "Tong luong ma cong ty phai tra cho cac nhan vien: " << TongLuong << std::endl;
	std::cout << "\n\t\tDANH SACH NHAN VIEN CO LUONG CAO NHAT\n\n";
	std::cout << std::setw(8) << std::left << "STT";
	std::cout << std::setw(24) << std::left << "Ho va ten";
	std::cout << std::setw(16) << std::left << "Ngay sinh";
	std::cout << "Luong" << std::endl;
	unsigned short j = 0;
	for (unsigned short i = 0; i < SoLuong; ++i)
	{
		if (DanhSach[i]->getLuong() == LuongMax)
		{
			std::cout << std::setw(8) << std::left << ++j;
			DanhSach[i]->outputNhanVien();
		}
	}
	std::cout << "\n\t\tDANH SACH NHAN VIEN CO LUONG THAP NHAT\n\n";
	std::cout << std::setw(8) << std::left << "STT";
	std::cout << std::setw(24) << std::left << "Ho va ten";
	std::cout << std::setw(16) << std::left << "Ngay sinh";
	std::cout << "Luong" << std::endl;
	j = 0;
	for (unsigned short i = 0; i < SoLuong; ++i)
	{
		if (DanhSach[i]->getLuong() == LuongMin)
		{
			std::cout << std::setw(8) << std::left << ++j;
			DanhSach[i]->outputNhanVien();
		}
	}
	delete[]DanhSach; DanhSach = NULL;
	return 0;
}
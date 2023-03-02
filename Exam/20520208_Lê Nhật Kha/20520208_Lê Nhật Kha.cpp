#include "NhanVienCongNhat.h"
#include "NhanVienSanPham.h"

short NhanVien::SoLuong = 0;
short NhanVienCongNhat::SoLuong = 0;
short NhanVienSanPham::SoLuong = 0;

int main()
{
	unsigned short SoLuong;
	long long TongTien = 0;
	std::cout << "Nhap so luong nhan su: ";
	std::cin >> SoLuong;
	std::cout << "Nhap thoi diem tinh luong:\n";
	ThoiGian HienTai; std::cin >> HienTai;
	NhanVien** DanhSach = new NhanVien * [SoLuong];
	for (unsigned short i = 0; i < SoLuong; ++i)
	{
		std::cout << "\nNhap thong tin nhan vien " << i + 1 << std::endl;
		std::cout << "Nhap 0 (nhan vien loi), 1 (nhan vien cong nhat), 2 (nhan vien san pham): ";
		unsigned short x; std::cin >> x;
		if (!x)
			DanhSach[i] = new NhanVien;
		else if (x == 1)
			DanhSach[i] = new NhanVienCongNhat;
		else
			DanhSach[i] = new NhanVienSanPham;
		DanhSach[i]->inputNhanVien();
		TongTien += DanhSach[i]->getLuong(HienTai);
		if (x) --NhanVien::SoLuong;
	}
	std::cout << "\n\t\t\tDANH SACH NHAN SU\n\n";
	std::cout << std::setw(8) << std::left << "STT";
	std::cout << std::setw(32) << std::left << "Ho va ten";
	std::cout << std::setw(24) << std::left << "Ngay sinh";
	std::cout << std::setw(24) << std::left << "Ngay gia nhap";
	std::cout << std::setw(16) << std::left << "Gioi tinh";
	std::cout << std::setw(32) << std::left << "Dia chi";
	std::cout << "Luong" << std::endl;
	for (unsigned short i = 0; i < SoLuong; ++i)
	{
		std::cout << std::setw(8) << std::left << i + 1;
		DanhSach[i]->outputNhanVien();
	}
	std::cout << "Tong tien luong cong ty phai chi tra cho nhan su trong thang: " << TongTien << std::endl;
	std::cout << "So nhan vien loi: " << NhanVien::SoLuong << std::endl;
	std::cout << "So nhan vien cong nhat: " << NhanVienCongNhat::SoLuong << std::endl;
	std::cout << "So nhan vien san pham: " << NhanVienSanPham::SoLuong << std::endl;
	delete[]DanhSach; DanhSach = NULL;
}
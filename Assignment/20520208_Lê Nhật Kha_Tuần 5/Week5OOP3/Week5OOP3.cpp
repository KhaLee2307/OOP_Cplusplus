#include "CanHoChungCu.h"
#include "CanHoThuong.h"

long long CanHo::TienThuePhong = 0;
unsigned short CanHoChungCu::CanHoConTrong = 0;
unsigned short CanHoChungCu::CanHoDaThue = 0;
unsigned short CanHoThuong::CanHoConTrong = 0;
unsigned short CanHoThuong::CanHoDaThue = 0;

int main()
{
	std::cout << "Nhap so luong can ho: ";
	unsigned short n;  std::cin >> n;
	CanHo** DanhSach = new CanHo * [n];
	for (unsigned short i = 0; i < n; i++)
	{
		std::cout << "\nNhap thong tin can ho " << i + 1 << std::endl;
		std::cout << "Nhap loai can ho (0 la chung cu, 1 la thuong): ";
		unsigned short x; std::cin >> x;
		if (x)
			DanhSach[i] = new CanHoThuong;
		else
			DanhSach[i] = new CanHoChungCu;
		std::cin.ignore();
		DanhSach[i]->inputCanHo();
	}
	std::cout << "\n\t\t\t\t\tDANH SACH CAN HO\n\n";
	std::cout << std::setw(8) << std::left << "STT";
	std::cout << std::setw(16) << std::left << "Loai can ho";
	std::cout << std::setw(24) << std::left << "Dia chi";
	std::cout << std::setw(16) << std::left << "So tang/Tang";
	std::cout << std::setw(16) << std::left << "Tien dat coc";
	std::cout << std::setw(16) << std::left << "Tien thue";
	std::cout << "Tinh trang\tGhi chu\n";
	for (unsigned short i = 0; i < n; ++i)
	{
		std::cout << std::setw(8) << i + 1;
		DanhSach[i]->outputCanHo();
	}
	std::cout << "\nTong can ho (chung cu) con trong: " << CanHoChungCu::CanHoConTrong << std::endl;
	std::cout << "Tong can ho (thuong) con trong: " << CanHoThuong::CanHoConTrong << std::endl;
	std::cout << "Tong can ho (chung cu) dang cho thue: " << CanHoChungCu::CanHoDaThue << std::endl;
	std::cout << "Tong can ho (thuong) dang cho thue: " << CanHoThuong::CanHoDaThue << std::endl;
	std::cout << "\nTong so tien thue phong cua cong ty: " << CanHo::TienThuePhong << std::endl;
}
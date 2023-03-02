#include "TamGiac.h"

int main()
{
	TamGiac A;
	std::cout << "Nhap 3 dinh cua tam giac: \n";
	A.Nhap();
	A.Xuat();
	std::cout << "Nhap vector de tinh tien: \n";
	Diem Vector;
	Vector.Nhap();
	std::cout << "Sau khi tinh tien ";
	A.TinhTien(Vector).Xuat();
	std::cout << "Nhap tam quay: \n";
	Diem Quay;
	Quay.Nhap();
	std::cout << "Nhap goc quay (radian): ";
	double GocQuay;
	std::cin >> GocQuay;
	std::cout << "Sau khi quay ";
	A.Quay(Quay, GocQuay).Xuat();
	std::cout << "Nhap he so can phong to: ";
	double HeSoPhong;
	std::cin >> HeSoPhong;
	std::cout << "Sau khi phong to ";
	A.PhongTo(HeSoPhong).Xuat();
	std::cout << "Nhap he so can thu nho: ";
	double HeSoThu;
	std::cin >> HeSoThu;
	std::cout << "Sau khi thu nho ";
	A.ThuNho(HeSoThu).Xuat();
	return 0;
}
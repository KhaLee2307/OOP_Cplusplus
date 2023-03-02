#include "Diem.h"

int main()
{
	Diem A;
	A.Nhap();
	std::cout << "Diem vua nhap la: ";
	A.Xuat();
	std::cout << "\nNhap vector de tinh tien: \n";
	Diem Vector;
	Vector.Nhap();
	std::cout << "Diem sau khi tinh tien la: ";
	A.TinhTien(Vector).Xuat();
	std::cout << "\nNhap tam quay: \n";
	Diem Quay;
	Quay.Nhap();
	std::cout << "Nhap goc quay (radian): ";
	double GocQuay;
	std::cin >> GocQuay;
	std::cout << "Diem sau khi quay la: ";
	A.Quay(Quay, GocQuay).Xuat();
	return 0;
}
#include "DaGiac.h"

int main()
{
	std::cout << "Nhap so dinh cua da giac: ";
	unsigned short n; std::cin >> n;
	DaGiac A(n);
	std::cout << "Nhap cac dinh cua da giac: \n";
	A.Nhap();
	std::cout << "Sau khi nhap ";
	A.Xuat();
	std::cout << "\nNhap vector de tinh tien: \n";
	Diem Vector;
	Vector.Nhap();
	std::cout << "Sau khi tinh tien ";
	DaGiac B(A);
	B.TinhTien(Vector);
	B.Xuat();
	std::cout << "\nNhap tam quay: \n";
	Diem Quay;
	Quay.Nhap();
	std::cout << "Nhap goc quay (radian): ";
	double GocQuay;
	std::cin >> GocQuay;
	std::cout << "Sau khi quay ";
	DaGiac C(A);
	C.Quay(Quay, GocQuay);
	C.Xuat();
	std::cout << "\nNhap he so can phong to: ";
	double HeSoPhong;
	std::cin >> HeSoPhong;
	std::cout << "Sau khi phong to ";
	DaGiac D(A);
	D.PhongTo(HeSoPhong);
	D.Xuat();
	std::cout << "\nNhap he so can thu nho: ";
	double HeSoThu;
	std::cin >> HeSoThu;
	std::cout << "Sau khi thu nho ";
	DaGiac E(A);
	E.ThuNho(HeSoThu);
	E.Xuat();
	return 0;
}
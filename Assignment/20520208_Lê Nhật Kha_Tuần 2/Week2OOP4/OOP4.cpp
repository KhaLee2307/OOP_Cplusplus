#include "Diem.h"

int main()
{
	Diem DiemA, AnhCuaA;
	DiemA.NhapDiem();
	std::cout << "Diem vua nhap: " << '(' << DiemA.LayHoanhDo() << ',' << DiemA.LayTungDo() << ")\n";
	std::cout << "Nhap vector de tinh tien: \n";
	Diem Vector;
	Vector.NhapDiem();
	AnhCuaA = DiemA;
	AnhCuaA.TinhTienDiem(Vector);
	std::cout << "Diem A sau khi tinh tien: ";
	AnhCuaA.XuatDiem();
	AnhCuaA = DiemA;
	std::cout << "Nhap tam quay: \n";
	Diem TamQuay;
	TamQuay.NhapDiem();
	std::cout << "Nhap goc quay (do C): ";
	double GocQuay; std::cin >> GocQuay;
	AnhCuaA.QuayDiem(TamQuay, GocQuay * exp(0) / 180);
	std::cout << "Diem A sau khi quay: ";
	AnhCuaA.XuatDiem();
	return 0;
}
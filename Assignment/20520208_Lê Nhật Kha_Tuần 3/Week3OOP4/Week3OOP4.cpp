#include "ThoiGian.h"

int main()
{
	std::cout << "Nhap thoi gian: \n";
	ThoiGian X;
	X.Nhap();
	std::cout << "Sau khi nhap ";
	X.Xuat();
	return 0;
}
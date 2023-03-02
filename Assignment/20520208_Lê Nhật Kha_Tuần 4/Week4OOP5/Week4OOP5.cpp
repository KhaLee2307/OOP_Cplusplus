#include "CDate.h"

int main()
{
	CDate A, B;
	std::cout << "Moi nhap ngay thang nam A:\n";
	std::cin >> A;
	std::cout << "Thoi gian A: " << A << std::endl;
	std::cout << "Moi nhap ngay thang nam B:\n";
	std::cin >> B;
	std::cout << "Thoi gian B: " << B << std::endl;
	std::cout << "Nhap n: ";
	int n;
	std::cin >> n;
	std::cout << "Tang A len n ngay: " << A + n << std::endl;
	std::cout << "Giam B xuong n ngay: " << B - n << std::endl;
	std::cout << "A cach B: " << A - B << " ngay\n";
}
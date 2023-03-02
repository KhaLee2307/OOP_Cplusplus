#include "CTime.h"

int main()
{
	CTime A, B;
	std::cout << "Nhap thoi gian A:\n";
	std::cin >> A;
	std::cout << "Nhap thoi gian B:\n";
	std::cin >> B;
	std::cout << "Thoi gian A la: " << A << std::endl;
	std::cout << "Thoi gian B la: " << B << std::endl;
	std::cout << "Nhap n: ";
	int n;  std::cin >> n;
	std::cout << "Tang A them n giay: " << A + n << std::endl;
	std::cout << "Giam B di n giay: " << B - n << std::endl;
	std::cout << "Hieu cua A va B la: " << A - B << std::endl;
}
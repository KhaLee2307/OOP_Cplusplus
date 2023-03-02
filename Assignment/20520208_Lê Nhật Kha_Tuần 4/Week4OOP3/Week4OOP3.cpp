#include "CTimeSpan.h"

int main()
{
	CTimeSpan A, B;
	std::cout << "Nhap thoi gian A:\n";
	std::cin >> A;
	std::cout << "Nhap thoi gian B:\n";
	std::cin >> B;
	std::cout << "Thoi gian A la: " << A << std::endl;
	std::cout << "Thoi gian B la: " << B << std::endl;
	std::cout << "Tong cua A va B: " << A + B << std::endl;
	std::cout << "Hieu cua A va B: " << A - B << std::endl;
}
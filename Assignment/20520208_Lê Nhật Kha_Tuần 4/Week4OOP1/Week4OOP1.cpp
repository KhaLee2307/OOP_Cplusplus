#include "SoPhuc.h"

int main()
{
	SoPhuc a, b;
	std::cout << "Nhap so phuc a: \n";
	std::cin >> a;
	std::cout << "Nhap so phuc b: \n";
	std::cin >> b;
	std::cout << "So phuc a la: " << a << std::endl;
	std::cout << "So phuc b la: " << b << std::endl;
	std::cout << "Tong cua a va b la: " << a + b << std::endl;
	std::cout << "Hieu cua a va b la: " << a - b << std::endl;
	std::cout << "Tich cua a va b la: " << a * b << std::endl;
	if (b != 0) std::cout << "Thuong cua a va b la: " << a / b << std::endl;
	else std::cout << "a khong chia cho b duoc\n";
	if (a == b) std::cout << "So phuc a bang so phuc b\n";
	if (a != b) std::cout << "So phuc a khong bang so phuc b\n";
	std::cout << "Nhap so thuc c can tinh: ";
	double c;
	std::cin >> c;
	std::cout << "Tong cua c va a la: " << c + a << std::endl;
	std::cout << "Hieu cua c va a la: " << c - a << std::endl;
	std::cout << "Tich cua c va a la: " << c * a << std::endl;
	if (a != 0) std::cout << "Thuong cua c va a la: " << c / a << std::endl;
	else std::cout << "c khong chia cho a duoc\n";
	return 0;
}
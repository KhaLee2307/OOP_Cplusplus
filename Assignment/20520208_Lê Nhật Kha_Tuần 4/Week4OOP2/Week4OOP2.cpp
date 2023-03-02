#include "PhanSo.h"

int main()
{
	PhanSo a, b;
	std::cout << "Nhap phan so a:\n";
	std::cin >> a;
	std::cout << "Nhap phan so b:\n";
	std::cin >> b;
	std::cout << "Phan so a: " << a << std::endl;
	std::cout << "Phan so b: " << b << std::endl;
	std::cout << "Tong cua 2 phan so a va b: " << a + b << std::endl;
	std::cout << "Hieu cua 2 phan so a va b: " << a - b << std::endl;
	std::cout << "Tich cua 2 phan so a va b: " << a * b << std::endl;
	if (b != 0) std::cout << "Thuong cua 2 phan so a va b: " << a / b << std::endl;
	else std::cout << "Phan so a khong chia duoc cho phan so b\n";
	if (a == b) std::cout << "Phan so a va phan so b bang nhau\n";
	if (a != b) std::cout << "Phan so a va phan so b khong bang nhau\n";
	int c;
	std::cout << "Nhap so nguyen c can tinh: ";
	std::cin >> c;
	std::cout << "Tong cua phan so a va c: " << a + c << std::endl;
	std::cout << "Hieu cua phan so a va c: " << a - c << std::endl;
	std::cout << "Tich cua phan so a va c: " << a * c << std::endl;
	if (c) std::cout << "Thuong cua phan so a va c: " << a / c << std::endl;
	else std::cout << "Phan so a khong chia duoc cho c\n";
	return 0;
}
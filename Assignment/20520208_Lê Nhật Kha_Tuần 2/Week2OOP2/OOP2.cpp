#include "SoPhuc.h"

int main()
{
	SoPhuc a, b, c;
	std::cout << "Nhap so phuc thu nhat: \n";
	a.NhapSoPhuc();
	std::cout << "Nhap so phuc thu hai: \n";
	b.NhapSoPhuc();
	c = a.CongHaiSoPhuc(b);
	std::cout << "Tong cua 2 so phuc la: ";
	c.XuatSoPhuc();
	c = a.TruHaiSoPhuc(b);
	std::cout << "Hieu cua 2 so phuc la: ";
	c.XuatSoPhuc();
	c = a.NhanHaiSoPhuc(b);
	std::cout << "Tich cua 2 so phuc la: ";
	c.XuatSoPhuc();
	c = a.ChiaHaiSoPhuc(b);
	std::cout << "Thuong cua 2 so phuc la: ";
	c.XuatSoPhuc();
	return 0;
}
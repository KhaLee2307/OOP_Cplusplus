#include "PhanSo.h"

int main()
{
	PhanSo a, b, c;
	std::cout << "Nhap phan so thu nhat: \n";
	a.NhapTuSo();
	a.NhapMauSo();
	std::cout << "Nhap phan so thu hai: \n";
	b.NhapTuSo();
	b.NhapMauSo();
	c = a.CongPhanSo(b);
	std::cout << "Tong cua hai phan so la: ";
	c.XuatPhanSo();
	c = a.TruPhanSo(b);
	std::cout << "Hieu cua hai phan so la: ";
	c.XuatPhanSo();
	c = a.NhanPhanSo(b);
	std::cout << "Tich cua hai phan so la: ";
	c.XuatPhanSo();
	c = a.ChiaPhanSo(b);
	std::cout << "Thuong cua hai phan so la: ";
	c.XuatPhanSo();
	return 0;
}
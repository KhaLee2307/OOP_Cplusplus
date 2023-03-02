#include "DaGiac.h"

void DaGiac::Nhap()
{
	for (unsigned short i = 0; i < this->_uSoDinh; i++)
	{
		std::cout << "Nhap dinh thu " << i + 1 << ":\n";
		this->_dDanhSach[i].Nhap();
	}
}
void DaGiac::Xuat()
{
	std::cout << "cac dinh cua da giac la: ";
	for (unsigned short i = 0; i < this->_uSoDinh; i++)
	{
		this->_dDanhSach[i].Xuat();
		std::cout << ' ';
	}
}
void DaGiac::TinhTien(Diem Vector)
{
	for (unsigned short i = 0; i < this->_uSoDinh; i++)
		this->_dDanhSach[i] = this->_dDanhSach[i].TinhTien(Vector);
}
void DaGiac::Quay(Diem TamQuay, double GocQuay)
{
	for (unsigned short i = 0; i < this->_uSoDinh; i++)
		this->_dDanhSach[i] = this->_dDanhSach[i].Quay(TamQuay, GocQuay);
}
void DaGiac::PhongTo(double HeSo)
{
	for (unsigned short i = 0; i < this->_uSoDinh; i++)
		this->_dDanhSach[i] = Diem(this->_dDanhSach[i].HoanhDo() * HeSo, this->_dDanhSach[i].TungDo() * HeSo);
}
void DaGiac::ThuNho(double HeSo)
{
	for (unsigned short i = 0; i < this->_uSoDinh; i++)
		this->_dDanhSach[i] = Diem(this->_dDanhSach[i].HoanhDo() / HeSo, this->_dDanhSach[i].TungDo() / HeSo);
}
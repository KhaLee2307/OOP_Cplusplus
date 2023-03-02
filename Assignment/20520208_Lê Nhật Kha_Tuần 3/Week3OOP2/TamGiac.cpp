#include "TamGiac.h"
void TamGiac::Nhap()
{
	std::cout << "Nhap dinh A: \n";
	this->_dA.Nhap();
	std::cout << "Nhap dinh B: \n";
	this->_dB.Nhap();
	std::cout << "Nhap dinh C: \n";
	this->_dC.Nhap();
}
void TamGiac::Xuat()
{
	std::cout << "3 dinh cua tam giac la: ";
	this->_dA.Xuat();
	std::cout << ' ';
	this->_dB.Xuat();
	std::cout << ' ';
	this->_dC.Xuat();
	std::cout << std::endl;
}
TamGiac TamGiac::TinhTien(Diem Vector)
{
	TamGiac B;
	B._dA = this->_dA.TinhTien(Vector);
	B._dB = this->_dB.TinhTien(Vector);
	B._dC = this->_dC.TinhTien(Vector);
	return B;
}
TamGiac TamGiac::Quay(Diem TamQuay, double GocQuay)
{
	TamGiac C;
	C._dA = this->_dA.Quay(TamQuay, GocQuay);
	C._dB = this->_dB.Quay(TamQuay, GocQuay);
	C._dC = this->_dC.Quay(TamQuay, GocQuay);
	return C;
}
TamGiac TamGiac::PhongTo(double HeSo)
{
	TamGiac B(this->_dA, this->_dB, this->_dC);
	B._dA.Change(B._dA.HoanhDo() * HeSo, B._dA.TungDo() * HeSo);
	B._dB.Change(B._dB.HoanhDo() * HeSo, B._dB.TungDo() * HeSo);
	B._dC.Change(B._dC.HoanhDo() * HeSo, B._dC.TungDo() * HeSo);
	return B;
}
TamGiac TamGiac::ThuNho(double HeSo)
{
	TamGiac B(this->_dA, this->_dB, this->_dC);
	B._dA.Change(B._dA.HoanhDo() / HeSo, B._dA.TungDo() / HeSo);
	B._dB.Change(B._dB.HoanhDo() / HeSo, B._dB.TungDo() / HeSo);
	B._dC.Change(B._dC.HoanhDo() / HeSo, B._dC.TungDo() / HeSo);
	return B;
}

#pragma once
#include "Diem.h"

class DaGiac
{
private:
	unsigned short _uSoDinh;
	Diem* _dDanhSach;
public:
	DaGiac(unsigned short n)
	{
		this->_uSoDinh = n;
		this->_dDanhSach = new Diem[n];
	}
	DaGiac(const DaGiac& A)
	{
		this->_uSoDinh = A._uSoDinh;
		this->_dDanhSach = new Diem[this->_uSoDinh];
		for (unsigned short i = 0; i < this->_uSoDinh; i++)
			this->_dDanhSach[i] = A._dDanhSach[i];
	}
	virtual ~DaGiac()
	{
		delete[]this->_dDanhSach;
		this->_dDanhSach = NULL;
	}
	void Nhap();
	void Xuat();
	void TinhTien(Diem Vector);
	void Quay(Diem TamQuay, double GocQuay);
	void PhongTo(double HeSo);
	void ThuNho(double HeSo);
};


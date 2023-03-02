#pragma once
#include "Diem.h"
class TamGiac
{
private:
	Diem _dA;
	Diem _dB;
	Diem _dC;
public:
	TamGiac()
	{
	}
	TamGiac(Diem A, Diem B, Diem C) 
	{
		this->_dA = Diem(A);
		this->_dB = Diem(B);
		this->_dC = Diem(C);
	}
	virtual ~TamGiac()
	{
	}
	void Nhap();
	void Xuat();
	TamGiac TinhTien(Diem Vector);
	TamGiac Quay(Diem TamQuay, double GocQuay);
	TamGiac PhongTo(double HeSo);
	TamGiac ThuNho(double HeSo);
};


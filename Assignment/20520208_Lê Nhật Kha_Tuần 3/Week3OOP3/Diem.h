#pragma once
#include <iostream>

class Diem
{
private:
	double _dHoanhDo;
	double _dTungDo;
public:
	Diem(double x = 0, double y = 0)
	{
		this->_dHoanhDo = x;
		this->_dTungDo = y;
	}
	Diem(const Diem& A)
	{
		this->_dHoanhDo = A._dHoanhDo;
		this->_dTungDo = A._dTungDo;
	}
	virtual ~Diem()
	{
	}
	void Nhap();
	void Xuat();
	void Change(double HoanhDo, double TungDo);
	double HoanhDo();
	double TungDo();
	Diem TinhTien(Diem Vector);
	Diem Quay(Diem Quay, double GocQuay);
};


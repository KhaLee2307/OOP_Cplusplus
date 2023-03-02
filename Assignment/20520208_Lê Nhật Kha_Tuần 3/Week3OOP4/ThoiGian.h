#pragma once
#include <iostream>
class ThoiGian
{
public:
	unsigned short _uGio;
	unsigned short _uPhut;
	unsigned short _uGiay;
public:
	ThoiGian(unsigned short x = 0, unsigned y = 0, unsigned short z = 0)
	{
		this->_uGio = x;
		this->_uPhut = y;
		this->_uGiay = z;
	}
	ThoiGian(const ThoiGian& A)
	{
		this->_uGio = A._uGio;
		this->_uPhut = A._uPhut;
		this->_uGiay = A._uGiay;
	}
	virtual ~ThoiGian()
	{
	}
	void Nhap();
	void Xuat();
	unsigned short Gio();
	unsigned short Phut();
	unsigned short Giay();
};


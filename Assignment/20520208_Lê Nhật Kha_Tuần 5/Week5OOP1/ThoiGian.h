#pragma once
#include <iostream>
#include <string>
#include <iomanip>

class ThoiGian
{
	friend class NhanVien;
protected:
	short Ngay;
	short Thang;
	short Nam;
public:
	ThoiGian(unsigned short x = 0, unsigned short y = 0, unsigned short z = 0) : Ngay(x), Thang(y), Nam(z){}
	ThoiGian(ThoiGian& A) : Ngay(A.Ngay), Thang(A.Thang), Nam(A.Nam) {}
	virtual ~ ThoiGian(){}
	friend void operator >> (std::istream&, ThoiGian&);
	friend void operator << (std::ostream&, ThoiGian);
};
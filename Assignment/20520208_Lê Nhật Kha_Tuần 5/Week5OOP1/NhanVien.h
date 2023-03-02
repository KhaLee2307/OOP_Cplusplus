#pragma once
#include "ThoiGian.h"

class NhanVien
{
protected:
	std::string HoVaTen;
	ThoiGian NgaySinh;
	long long Luong;
public:
	NhanVien(std::string HoVaTen = "Unknow", ThoiGian NgaySinh = 0, long long Luong = 0) : HoVaTen(HoVaTen), NgaySinh(NgaySinh), Luong(Luong){}
	virtual ~ NhanVien(){}
	virtual void inputNhanVien();
	virtual void outputNhanVien();
	virtual long long getLuong();
};
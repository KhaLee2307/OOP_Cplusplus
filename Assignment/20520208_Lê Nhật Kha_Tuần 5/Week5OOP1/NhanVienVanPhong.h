#pragma once
#include "NhanVien.h"

class NhanVienVanPhong : public NhanVien
{
protected:
	unsigned short SoNgayLamViec;
public:
	NhanVienVanPhong(std::string HoVaTen = "Unknow", ThoiGian NgaySinh = 0, long long Luong = 0, unsigned short SoNgayLamViec = 0) : NhanVien(HoVaTen, NgaySinh, Luong), SoNgayLamViec(SoNgayLamViec){}
	virtual ~ NhanVienVanPhong(){}
	void inputNhanVien();
	long long getLuong();
};
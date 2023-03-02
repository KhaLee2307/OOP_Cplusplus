#pragma once
#include "NhanVien.h"

class NhanVienSanXuat : public NhanVien
{
protected:
	unsigned int SoSanPham;
	long long LuongCanBan;
public:
	NhanVienSanXuat(std::string HoVaTen = "Unknow", ThoiGian NgaySinh = 0, long long Luong = 0, unsigned int SoSanPham = 0, long long LuongCanBan = 0) : NhanVien(HoVaTen, NgaySinh, Luong), SoSanPham(SoSanPham), LuongCanBan(LuongCanBan){}
	virtual ~ NhanVienSanXuat(){}
	void inputNhanVien();
	long long getLuong();
};
#pragma once
#include "ThoiGian.h"
#define ChiSoPhucLoi 208;

class NhanVien
{
protected:
	std::string HoVaTen;
	ThoiGian NgaySinh;
	ThoiGian NgayGiaNhap;
	char GioiTinh;
	std::string DiaChi;
	long long LuongCoBan;
	long long Luong;
public:
	static short SoLuong;
	NhanVien(std::string HoVaTen = "Unknow", ThoiGian NgaySinh = 0, ThoiGian NgayGiaNhap = 0, char GioiTinh = 0, std::string DiaChi = "Unknow", long long LuongCoBan = 0, long long Luong = 0) : HoVaTen(HoVaTen), NgaySinh(NgaySinh), NgayGiaNhap(NgayGiaNhap), GioiTinh(GioiTinh), DiaChi(DiaChi), LuongCoBan(LuongCoBan), Luong(Luong) { ++SoLuong; }
	virtual ~ NhanVien() {}
	virtual long long getLuong(ThoiGian);
	virtual void inputNhanVien();
	virtual void outputNhanVien();
	virtual bool KiemTra() { return 1; };
};
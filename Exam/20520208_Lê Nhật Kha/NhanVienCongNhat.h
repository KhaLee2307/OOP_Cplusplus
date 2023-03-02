#pragma once
#include "NhanVien.h"

class NhanVienCongNhat : public NhanVien
{
protected:
	unsigned short SoNgayLam;
public:
	static short SoLuong;
	NhanVienCongNhat(std::string HoVaTen = "Unknow", ThoiGian NgaySinh = 0, ThoiGian NgayGiaNhap = 0, char GioiTinh = 0, std::string DiaChi = "Unknow", long long LuongCoBan = 0, unsigned short SoNgayLam = 0, long long Luong = 0) : NhanVien(HoVaTen, NgaySinh, NgayGiaNhap, GioiTinh, DiaChi, LuongCoBan, Luong), SoNgayLam(SoNgayLam) { ++SoLuong; }
	virtual ~ NhanVienCongNhat() {}
	virtual long long getLuong(ThoiGian);
	virtual void inputNhanVien();
	bool KiemTra();
};
#pragma once
#include "NhanVien.h"

class NhanVienSanPham : public NhanVien
{
protected:
	unsigned int SoSanPham;
public:
	static short SoLuong;
	NhanVienSanPham(std::string HoVaTen = "Unknow", ThoiGian NgaySinh = 0, ThoiGian NgayGiaNhap = 0, char GioiTinh = 0, std::string DiaChi = "Unknow", long long LuongCoBan = 0, unsigned int SoSanPham = 0, long long Luong = 0) : NhanVien(HoVaTen, NgaySinh, NgayGiaNhap, GioiTinh, DiaChi, LuongCoBan, Luong), SoSanPham(SoSanPham) { ++SoLuong; }
	virtual ~NhanVienSanPham() {}
	virtual long long getLuong(ThoiGian);
	virtual void inputNhanVien();
	bool KiemTra();
};
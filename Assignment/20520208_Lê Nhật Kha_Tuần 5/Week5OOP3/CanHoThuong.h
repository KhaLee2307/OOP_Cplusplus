#pragma once
#include "CanHo.h"

class CanHoThuong : public CanHo
{
protected:
	unsigned short BaoNhieuTang;
public:
	static unsigned short CanHoConTrong;
	static unsigned short CanHoDaThue;
	CanHoThuong(std::string DiaChi = "Unknow", unsigned short BaoNhieuTang = 0, long long TienCoc = 0, long long TienThue = 0, bool ConTrong = false) : CanHo(DiaChi, TienCoc, TienThue, ConTrong), BaoNhieuTang(BaoNhieuTang){}
	virtual ~CanHoThuong() {}
	virtual void inputCanHo();
	virtual void outputCanHo();
};
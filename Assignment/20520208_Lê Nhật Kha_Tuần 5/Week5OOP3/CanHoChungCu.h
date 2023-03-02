#pragma once
#include "CanHo.h"

class CanHoChungCu : public CanHo
{
protected:
	unsigned short TangBaoNhieu;
public:
	static unsigned short CanHoConTrong;
	static unsigned short CanHoDaThue;
	CanHoChungCu(std::string DiaChi = "Unknow", unsigned short TangBaoNhieu = 0, long long TienCoc = 0, long long TienThue = 0, bool ConTrong = false) : CanHo(DiaChi, TienCoc, TienThue, ConTrong), TangBaoNhieu(TangBaoNhieu){}
	virtual ~ CanHoChungCu(){}
	virtual void inputCanHo();
	virtual void outputCanHo();
};
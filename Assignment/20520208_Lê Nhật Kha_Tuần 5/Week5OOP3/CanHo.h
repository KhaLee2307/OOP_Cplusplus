#pragma once
#include <string>
#include <iomanip>
#include <iostream>

class CanHo
{
protected:
	std::string DiaChi;
	long long TienCoc;
	long long TienThue;
	bool ConTrong;
public:
	static long long TienThuePhong;
	CanHo(std::string DiaChi = "Unknow", long long TienCoc = 0, long long TienThue = 0, bool ConTrong = false) : DiaChi(DiaChi), TienCoc(TienCoc), TienThue(TienThue), ConTrong(ConTrong) {}
	virtual ~ CanHo(){}
	void setDiaChi(std::string);
	void setTienCoc(long long);
	void setTienThue(long long);
	void setConTrong(bool);
	std::string getDiaChi();
	long long getTienCoc();
	long long getTienThue();
	bool getConTrong();
	virtual void inputCanHo();
	virtual void outputCanHo();
};
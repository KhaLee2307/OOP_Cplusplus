#pragma once
#include <iostream>

class Diem
{
private:
	double _dHoanhDo; 
	double _dTungDo; 
public:
	double LayHoanhDo(); 
	double LayTungDo(); 
	void TinhTienDiem(Diem vector);
	void QuayDiem(Diem TamQuay, double GocQuay);
	void NhapDiem();
	void XuatDiem();
};
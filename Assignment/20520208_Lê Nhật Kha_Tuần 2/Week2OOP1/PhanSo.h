#pragma once
#include <iostream>

class PhanSo
{
private:
	int _iTuSo;
	int _iMauSo;
public:
	void NhapTuSo();
	void NhapMauSo();
	PhanSo CongPhanSo(const PhanSo& a);
	PhanSo TruPhanSo(const PhanSo& a);
	PhanSo NhanPhanSo(const PhanSo& a);
	PhanSo ChiaPhanSo(const PhanSo& a);
	int UCLN();
	int XuatPhanSo();
};
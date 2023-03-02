#pragma once
#include <iostream>

class SoPhuc
{
private:
	double _dSoThuc;
	double _dSoAo;
public:
	void NhapSoPhuc();
	void XuatSoPhuc();
	SoPhuc CongHaiSoPhuc(const SoPhuc& a);
	SoPhuc TruHaiSoPhuc(const SoPhuc& a);
	SoPhuc NhanHaiSoPhuc(const SoPhuc& a);
	SoPhuc ChiaHaiSoPhuc(const SoPhuc& a);
};
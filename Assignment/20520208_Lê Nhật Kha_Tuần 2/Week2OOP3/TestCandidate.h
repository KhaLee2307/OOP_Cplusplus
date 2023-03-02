#pragma once
#include "Candidate.h"

class TestCandidate
{
private:
	Candidate* _cSinhVien;
	int _iSoSinhVien;
public:
	void NhapDanhSachSinhVien();
	void XuatDanhSachSinhVien();
	void DeleteDanhSach();
};
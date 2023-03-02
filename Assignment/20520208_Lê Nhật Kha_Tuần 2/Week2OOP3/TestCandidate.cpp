#include "TestCandidate.h"
#include "Candidate.h"

void TestCandidate::NhapDanhSachSinhVien()
{
	std::cout << "Nhap so thi sinh: ";
	std::cin >> this->_iSoSinhVien;
	std::cin.ignore();
	this->_cSinhVien = new Candidate[this->_iSoSinhVien];
	Candidate* ptrSinhVien = this->_cSinhVien;
	for (int i = 0; i < this->_iSoSinhVien; i++)
	{
		std::cout << "Nhap thi sinh thu " << i + 1 << ":\n";
		ptrSinhVien[i].NhapSinhVien();
	}
	ptrSinhVien = NULL;
}
void TestCandidate::XuatDanhSachSinhVien()
{
	Candidate* ptrSinhVien = this->_cSinhVien;
	for (int i = 0; i < this->_iSoSinhVien; i++)
	{
		if (ptrSinhVien[i].LocSinhVien()) ptrSinhVien[i].XuatSinhVien();
	}
	ptrSinhVien = NULL;
}
void TestCandidate::DeleteDanhSach()
{
	delete[](this->_cSinhVien); 
	this->_cSinhVien = NULL;
}
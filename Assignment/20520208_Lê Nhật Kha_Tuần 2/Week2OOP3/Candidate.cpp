#include "Candidate.h"
#include <string>

void Candidate::NhapSinhVien()
{
	std::cout << "Nhap MSSV: ";
	getline(std::cin, this->_sMSSV);
	std::cout << "Nhap ho va ten: ";
	getline(std::cin, this->_sName);
	std::cout << "Nhap ngay sinh cua thi sinh: ";
	this->_dBirthday.NhapDate();
	std::cout << "Nhap diem cua thi sinh: ";
	this->_dDiemThi.NhapDiem();
	std::cin.ignore();
}
void Candidate::XuatSinhVien()
{
	std::cout << "MSSV: " << this->_sMSSV << std::endl;
	std::cout << "Ho va ten: " << this->_sName << std::endl;
	this->_dBirthday.XuatDate();
	this->_dDiemThi.XuatDiem();
}
bool Candidate::LocSinhVien()
{
	if (this->_dDiemThi._tTongDiem >= 15) return true;
	return false;
}
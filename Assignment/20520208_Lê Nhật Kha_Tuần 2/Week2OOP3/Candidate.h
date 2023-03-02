#pragma once
#include <iostream>

class Candidate
{
public:
	struct date
	{
		short _iDay;
		short _iMonth;
		short _iYear;
		void NhapDate()
		{
			std::cin >> this->_iDay >> this->_iMonth >> this->_iYear;
		}
		void XuatDate()
		{
			std::cout << "Ngay sinh cua thi sinh: ";
			std::cout << this->_iDay << '/' << this->_iMonth << '/' << this->_iYear << '\n';
		}
	};
	struct diem
	{
		double _iDiemToan;
		double _iDiemVan;
		double _iDiemAnh;
		double _tTongDiem;
		void NhapDiem()
		{
			std::cin >> this->_iDiemToan >> this->_iDiemVan >> this->_iDiemAnh;
			this->_tTongDiem = this->_iDiemToan + this->_iDiemVan + this->_iDiemAnh;
		}
		void XuatDiem()
		{
			std::cout << "Diem thi cua thi sinh: \n";
			std::cout << "Diem Toan: " << this->_iDiemToan << "\tDiem Van: " << this->_iDiemVan << "\tDiem Anh: " << this->_iDiemAnh << '\n';
		}
	};
private:
	std::string _sMSSV;
	std::string _sName;
	date _dBirthday{};
	diem _dDiemThi{};
public:
	void NhapSinhVien();
	void XuatSinhVien();
	bool LocSinhVien();
};
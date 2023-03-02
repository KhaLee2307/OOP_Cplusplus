#include "ThoiGian.h"

bool ktrNgay(short ngay, short thang, short nam)
{
	bool ktr = true;
	if (ngay <= 0 || thang <= 0 || nam <= 0 || ngay > 31 || thang > 12)
		ktr = false;
	else
	{
		switch (thang)
		{
		case 4:
		case 6:
		case 9:
		case 11:
			if (ngay == 31) ktr = false;
			break;
		case 2:
			if ((!(nam % 4) && nam % 100) || !(nam % 400))
			{
				if (ngay > 29) ktr = false;
			}
			else if (ngay > 28)
				ktr = false;
		}
	}
	if (!ktr)
		throw std::string("Ngay thang nam nhap khong hop le.\n");
	return true;
}
void operator >> (std::istream& is, ThoiGian& time)
{
	bool success;
	do
	{
		success = true;
		std::cout << "Nhap ngay: ";
		is >> time.Ngay;
		std::cout << "Nhap thang: ";
		is >> time.Thang;
		std::cout << "Nhap nam: ";
		is >> time.Nam;
		try
		{
			ktrNgay(time.Ngay, time.Thang, time.Nam);
		}
		catch (std::string& s)
		{
			std::cout << s;
			std::cout << "Xin moi nhap lai:\n";
			success = false;
		}
	} while (!success);
}
void operator << (std::ostream& os, ThoiGian time)
{
	std::string chuoi = "";
	chuoi += std::to_string(time.Ngay);
	chuoi += '/';
	chuoi += std::to_string(time.Thang);
	chuoi += '/';
	chuoi += std::to_string(time.Nam);
	os << chuoi;
}
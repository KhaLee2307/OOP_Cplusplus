#include <iostream>

struct ThoiGian
{
	short _iNgay;
	short _iThang;
	short _iNam;
};

ThoiGian Nhap(ThoiGian& a);
bool Kiem_Tra_Nam_Nhuan(ThoiGian a);
ThoiGian Ngay_Tiep_Theo(ThoiGian a);
void Xuat(ThoiGian a);

int main()
{
	ThoiGian MotNgayNaoDo;
	Xuat(Ngay_Tiep_Theo(Nhap(MotNgayNaoDo)));
	return 0;
}

ThoiGian Nhap(ThoiGian& a)
{
	std::cin >> a._iNgay >> a._iThang >> a._iNam;
	return a;
}
bool Kiem_Tra_Nam_Nhuan(ThoiGian a)
{
	if ((a._iNam % 4 == 0 && a._iNam % 100 != 0) || a._iNam % 400 == 0) return true;
	return false;
}
ThoiGian Ngay_Tiep_Theo(ThoiGian a)
{
	ThoiGian b;
	if (a._iNgay == 31 && a._iThang == 12)
	{
		b._iNgay = 1;
		b._iThang = 1;
		b._iNam = ++a._iNam;
		return b;
	}
	switch (a._iThang)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
		if (a._iNgay == 31)
		{
			a._iNgay = 1;
			a._iThang++;
		}
		else a._iNgay++;
		break;
	case 2:
		if (a._iNgay == 29)
		{
			a._iNgay = 1;
			a._iThang++;
		}
		else if (a._iNgay == 28 && !Kiem_Tra_Nam_Nhuan(a))
		{
			a._iNgay = 1;
			a._iThang++;
		}
		else a._iNgay++;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		if (a._iNgay == 30)
		{
			a._iNgay = 1;
			a._iThang++;
		}
		else a._iNgay++;
		break;
	}
	b._iNgay = a._iNgay;
	b._iThang = a._iThang;
	b._iNam = a._iNam;
	return b;
}
void Xuat(ThoiGian a)
{
	std::cout << a._iNgay << '/' << a._iThang << '/' << a._iNam;
}
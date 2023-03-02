#include <iostream>
#include <cmath>

struct PhanSo
{
	int _iTuSo;
	int _iMauSo;
};

void Nhap_Phan_So(PhanSo &a);
int Xuat_Phan_So(PhanSo a);
PhanSo Phan_So_Lon_Nhat(PhanSo a, PhanSo b);
int Uoc_Chung_Lon_Nhat(int a, int b);
void Rut_Gon_Phan_So(PhanSo& a);
PhanSo Cong_2_Phan_So(PhanSo a, PhanSo b);
PhanSo Tru_2_Phan_So(PhanSo a, PhanSo b);
PhanSo Nhan_2_Phan_So(PhanSo a, PhanSo b);
PhanSo Chia_2_Phan_So(PhanSo a, PhanSo b);

int main()
{
	PhanSo pPhanSo1, pPhanSo2;
	Nhap_Phan_So(pPhanSo1);
	Nhap_Phan_So(pPhanSo2);
	Xuat_Phan_So(Phan_So_Lon_Nhat(pPhanSo1, pPhanSo2));
	Xuat_Phan_So(Cong_2_Phan_So(pPhanSo1, pPhanSo2));
	Xuat_Phan_So(Tru_2_Phan_So(pPhanSo1, pPhanSo2));
	Xuat_Phan_So(Nhan_2_Phan_So(pPhanSo1, pPhanSo2));
	Xuat_Phan_So(Chia_2_Phan_So(pPhanSo1, pPhanSo2));
	return 0;
}

void Nhap_Phan_So(PhanSo &a)
{
	std::cin >> a._iTuSo >> a._iMauSo;
	if (a._iMauSo < 0)
	{
		a._iTuSo *= -1;
		a._iMauSo *= -1;
	}
}
int Xuat_Phan_So(PhanSo a)
{
	if (a._iTuSo == 0) { std::cout << 0 << '\n'; return 0; }
	Rut_Gon_Phan_So(a);
	if (a._iMauSo == 1) { std::cout << a._iTuSo << '\n'; return 0; }
	std::cout << a._iTuSo << '/' << a._iMauSo << '\n';
	return 0;
}
PhanSo Phan_So_Lon_Nhat(PhanSo a, PhanSo b)
{
	if (a._iTuSo * b._iMauSo >= a._iMauSo * b._iTuSo) return a;
	return b;
}
int Uoc_Chung_Lon_Nhat(int a, int b)
{
	while (a != b)
	{
		if (a > b) a -= b;
		else b -= a;
	}
	return a;
}
void Rut_Gon_Phan_So(PhanSo& a)
{
	int UocChungLonNhat = Uoc_Chung_Lon_Nhat(abs(a._iTuSo), abs(a._iMauSo));
	a._iTuSo /= UocChungLonNhat;
	a._iMauSo /= UocChungLonNhat;
}
PhanSo Cong_2_Phan_So(PhanSo a, PhanSo b)
{
	PhanSo c;
	c._iTuSo = a._iTuSo * b._iMauSo + a._iMauSo * b._iTuSo;
	c._iMauSo = a._iMauSo * b._iMauSo;
	return c;
}
PhanSo Tru_2_Phan_So(PhanSo a, PhanSo b)
{
	PhanSo c;
	c._iTuSo = a._iTuSo * b._iMauSo - a._iMauSo * b._iTuSo;
	c._iMauSo = a._iMauSo * b._iMauSo;
	return c;
}
PhanSo Nhan_2_Phan_So(PhanSo a, PhanSo b)
{
	PhanSo c;
	c._iTuSo = a._iTuSo * b._iTuSo;
	c._iMauSo = a._iMauSo * b._iMauSo;
	return c;
}
PhanSo Chia_2_Phan_So(PhanSo a, PhanSo b)
{
	PhanSo c;
	c._iTuSo = a._iTuSo * b._iMauSo;
	c._iMauSo = a._iMauSo * b._iTuSo;
	return c;
}
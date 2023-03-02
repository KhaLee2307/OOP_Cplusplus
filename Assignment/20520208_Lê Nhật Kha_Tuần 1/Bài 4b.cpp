#include <iostream>
#include <cmath>

struct ToaDo
{
	double _iOx;
	double _iOy;
};
struct DiemLonNhat
{
	ToaDo _iDiem1;
	ToaDo _iDiem2;
	double _fKhoangCach;
};

void Nhap_Toa_Do_Diem(ToaDo* A, int n);
double Khoang_Cach_2_Diem(ToaDo A, ToaDo B);

int main()
{
	int iSoDiem; std::cin >> iSoDiem;
	ToaDo* tdMangDiem = new ToaDo[iSoDiem];
	Nhap_Toa_Do_Diem(tdMangDiem, iSoDiem);
	DiemLonNhat Max;
	Max._iDiem1 = tdMangDiem[0];
	Max._iDiem2 = tdMangDiem[1];
	Max._fKhoangCach = Khoang_Cach_2_Diem(tdMangDiem[0], tdMangDiem[1]);
	for (int i = 0; i < iSoDiem; i++)
		for (int j = i + 1; j < iSoDiem; j++)
			if (Max._fKhoangCach < Khoang_Cach_2_Diem(tdMangDiem[i], tdMangDiem[j]))
			{
				Max._iDiem1 = tdMangDiem[i];
				Max._iDiem2 = tdMangDiem[j];
				Max._fKhoangCach = Khoang_Cach_2_Diem(tdMangDiem[i], tdMangDiem[j]);
			}
	std::cout << "2 diem co khoang cach lon nhat la: {(" << Max._iDiem1._iOx << ';' << Max._iDiem1._iOy << "),(" << Max._iDiem2._iOx << ';' << Max._iDiem2._iOy << ")}\n";
	std::cout << "Khoang cach lon nhat la: " << Max._fKhoangCach;
	delete[]tdMangDiem; tdMangDiem = NULL;
	return 0;
}

void Nhap_Toa_Do_Diem(ToaDo* A, int n)
{
	for (int i = 0; i < n; i++)
		std::cin >> A[i]._iOx >> A[i]._iOy;
}
double Khoang_Cach_2_Diem(ToaDo A, ToaDo B)
{
	return sqrt(pow(A._iOx - B._iOx, 2) + pow(A._iOy - B._iOy, 2));
}
#include <iostream>
#include <cmath>

struct ToaDo
{
	double _fOx;
	double _fOy;
};
struct KhoangCachMax
{
	ToaDo _tdDiem1;
	ToaDo _tdDiem2;
	double _fKhoangCach;
};

void SetDiem(ToaDo& A, double x = 0, double y = 0);
double Distance(ToaDo A, ToaDo B);

int main()
{
	int iSoDiem; std::cin >> iSoDiem;
	ToaDo* tdMotMangNaoDo = new ToaDo[iSoDiem + 1];
	double fOx, fOy;
	for (int i = 1; i <= iSoDiem; i++)
		if (!(i % 3))
		{
			std::cin >> fOx >> fOy;
			SetDiem(tdMotMangNaoDo[i], fOx, fOy);
		}
		else if (i % 3 == 1)
		{
			std::cin >> fOx;
			SetDiem(tdMotMangNaoDo[i], fOx);
		}
		else if (i % 3 == 2) SetDiem(tdMotMangNaoDo[i]);
	KhoangCachMax Max; 
	Max._tdDiem1 = tdMotMangNaoDo[1];
	Max._tdDiem2 = tdMotMangNaoDo[2];
	Max._fKhoangCach = Distance(tdMotMangNaoDo[1], tdMotMangNaoDo[2]);
	for (int i = 1; i <= iSoDiem - 1; i++)
		for (int j = i + 1; j <= iSoDiem; j++)
			if (Distance(tdMotMangNaoDo[i], tdMotMangNaoDo[j]) > Max._fKhoangCach)
			{
				Max._fKhoangCach = Distance(tdMotMangNaoDo[i], tdMotMangNaoDo[j]);
				Max._tdDiem1 = tdMotMangNaoDo[i];
				Max._tdDiem2 = tdMotMangNaoDo[j];
			}
	std::cout << "2 diem co khoang cach lon nhat la: {(" << Max._tdDiem1._fOx << ';' << Max._tdDiem1._fOy << "),(" << Max._tdDiem2._fOx << ';' << Max._tdDiem2._fOy << ")}\n";
	std::cout << "Khoang cach do la: " << Max._fKhoangCach;
	delete[]tdMotMangNaoDo; tdMotMangNaoDo = NULL;
	return 0;
}

void SetDiem(ToaDo& A, double x = 0, double y = 0)
{
	A._fOx = x;
	A._fOy = y;
}
double Distance(ToaDo A, ToaDo B)
{
	return sqrt(pow(A._fOx - B._fOx, 2) + pow(A._fOy - B._fOy, 2));
}

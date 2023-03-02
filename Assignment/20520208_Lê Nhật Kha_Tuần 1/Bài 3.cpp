#include <iostream>
#include <string>

struct SinhVien
{
	std::string _sHoTen;
	double _iDiemToan;
	double _iDiemVan;
};

SinhVien Nhap_Thong_Tin(SinhVien a);
double Diem_Trung_Binh(SinhVien a);

int main()
{
	SinhVien svMotSinhVienNaoDo;
	std::cout << Diem_Trung_Binh(Nhap_Thong_Tin(svMotSinhVienNaoDo));
	return 0;
}

SinhVien Nhap_Thong_Tin(SinhVien a)
{
	getline(std::cin, a._sHoTen);
	std::cin >> a._iDiemToan >> a._iDiemVan;
	return a;
}
double Diem_Trung_Binh(SinhVien a)
{
	return (a._iDiemToan + a._iDiemVan) / 2;
}
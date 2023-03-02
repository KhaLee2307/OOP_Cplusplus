#pragma once
#include <iostream>
#include <cmath>

class PhanSo
{
protected:
	int _iTuSo;
	int _iMauSo;
public:
	PhanSo(int TuSo = 0, int MauSo = 1) : _iTuSo(TuSo), _iMauSo(MauSo) {}
	PhanSo(const PhanSo& A) : _iTuSo(A._iTuSo), _iMauSo(A._iMauSo) {}
	virtual~PhanSo(){}
	void Set(int, int);
	void SetTuSo(int);
	void SetMauSo(int);
	int GetTuSo();
	int GetMauSo();
	PhanSo ToiGianPhanSo();
	friend std::istream& operator >>(std::istream&, PhanSo&);
	friend std::ostream& operator <<(std::ostream&, PhanSo);
	friend PhanSo operator +(PhanSo, PhanSo);
	friend PhanSo operator -(PhanSo, PhanSo);
	friend PhanSo operator *(PhanSo, PhanSo);
	friend PhanSo operator /(PhanSo, PhanSo);
	friend bool operator == (PhanSo, PhanSo);
	friend bool operator != (PhanSo, PhanSo);
};


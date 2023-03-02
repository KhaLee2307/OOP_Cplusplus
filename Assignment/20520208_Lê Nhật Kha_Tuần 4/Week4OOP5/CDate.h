#pragma once
#include <iostream>

class CDate
{
protected:
	int _iYears;
	int _iMonths;
	int _iDays;
public:
	CDate(int x = 0, int y = 0, int z = 0) : _iYears(x), _iMonths(y), _iDays(z) {}
	CDate(const CDate& A) : _iYears(A._iYears), _iMonths(A._iMonths), _iDays(A._iDays) {}
	virtual ~CDate() {}
	bool CheckDate();
	int GetYears();
	int GetMonths();
	int GetDays();
	CDate operator ++();
	CDate operator ++(int);
	CDate operator --();
	CDate operator --(int);
	CDate operator +(int);
	CDate operator -(int);
	int operator -(CDate);
	friend std::istream& operator >>(std::istream&, CDate&);
	friend std::ostream& operator <<(std::ostream&, CDate);
};


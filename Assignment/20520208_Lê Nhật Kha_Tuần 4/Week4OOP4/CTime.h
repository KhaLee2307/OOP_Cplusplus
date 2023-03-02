#pragma once
#include <iostream>

class CTime
{
protected:
	int _iHours;
	int _iMins;
	int _iSecs;
public:
	CTime(int = 0, int = 0, int = 0);
	CTime(const CTime& A) : _iHours(A._iHours), _iMins(A._iMins), _iSecs(A._iSecs) {}
	virtual ~ CTime() {}
	long GetHours();
	long GetMinutes();
	long GetSeconds();
	CTime operator +(int);
	CTime operator -(int);
	CTime operator -(const CTime);
	CTime operator ++();
	CTime operator ++(int);
	CTime operator --();
	CTime operator --(int);
	friend std::istream& operator >>(std::istream&, CTime&);
	friend std::ostream& operator <<(std::ostream&, CTime);
};
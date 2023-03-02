#pragma once
#include<iostream>

class CTimeSpan
{
protected:
	long _lDays;
	int _iHours;
	int _iMins;
	int _iSecs;
public:
	CTimeSpan(long = 0, int = 0, int = 0, int = 0);
	CTimeSpan(const CTimeSpan& A) : _lDays(A._lDays), _iHours(A._iHours), _iMins(A._iMins), _iSecs(A._iSecs) {}
	virtual ~CTimeSpan() {}
	long long GetDays();
	long GetHours();
	long GetMinutes();
	long GetSeconds();
	long long GetTotalHours();
	long long GetTotalMinutes();
	long long GetTotalSeconds();
	CTimeSpan operator +(const CTimeSpan);
	CTimeSpan operator -(const CTimeSpan);
	CTimeSpan& operator +=(const CTimeSpan);
	CTimeSpan& operator -=(const CTimeSpan);
	bool operator <(CTimeSpan);
	bool operator <=(CTimeSpan);
	bool operator >(CTimeSpan);
	bool operator >=(CTimeSpan);
	bool operator ==(CTimeSpan);
	bool operator !=(CTimeSpan);
	friend std::istream& operator >>(std::istream&, CTimeSpan&);
	friend std::ostream& operator <<(std::ostream&, CTimeSpan);
};
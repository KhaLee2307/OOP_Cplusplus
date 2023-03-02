#include "CTimeSpan.h"

CTimeSpan::CTimeSpan(long x, int y, int z, int t)
{
	this->_lDays = x;
	this->_iHours = y;
	this->_iMins = z;
	this->_iSecs = t;
	if (this->_iSecs < 0)
	{
		this->_iSecs += 60;
		--this->_iMins;
	}
	if (this->_iMins < 0)
	{
		this->_iMins += 60;
		--this->_iHours;
	}
	if (this->_iHours < 0)
	{
		this->_iHours += 24;
		--this->_lDays;
	}
	if (this->_iSecs >= 60)
	{
		this->_iMins += this->_iSecs / 60;
		this->_iSecs %= 60;
	}
	if (this->_iMins >= 60)
	{
		this->_iHours += this->_iMins / 60;
		this->_iMins %= 60;
	}
	if (this->_iHours >= 24)
	{
		this->_lDays += this->_iHours / 24;
		this->_iHours %= 24;
	}
}
long long CTimeSpan::GetDays()
{
	return this->_lDays;
}
long CTimeSpan::GetHours()
{
	return this->_iHours;
}
long CTimeSpan::GetMinutes()
{
	return this->_iMins;
}
long CTimeSpan::GetSeconds()
{
	return this->_iSecs;
}
long long CTimeSpan::GetTotalHours()
{
	return (long long) this->_lDays * 24 + this->_iHours;
}
long long CTimeSpan::GetTotalMinutes()
{
	return (long long)this->GetTotalHours() * 60 + this->_iMins;
}
long long CTimeSpan::GetTotalSeconds()
{
	return (long long) this->GetMinutes() * 60 + this->_iSecs;
}
CTimeSpan CTimeSpan::operator +(const CTimeSpan A)
{
	CTimeSpan B(this->_lDays + A._lDays, this->_iHours + A._iHours, this->_iMins + A._iMins, this->_iSecs + A._iSecs);
	return B;
}
CTimeSpan CTimeSpan::operator -(const CTimeSpan A)
{
	CTimeSpan B(this->_lDays - A._lDays, this->_iHours - A._iHours, this->_iMins - A._iMins, this->_iSecs - A._iSecs);
	return B;
}
CTimeSpan& CTimeSpan::operator +=(const CTimeSpan A)
{
	CTimeSpan B(this->_lDays + A._lDays, this->_iHours + A._iHours, this->_iMins + A._iMins, this->_iSecs + A._iSecs);
	*this = B;
	return *this;
}
CTimeSpan& CTimeSpan::operator -=(const CTimeSpan A)
{
	CTimeSpan B(this->_lDays - A._lDays, this->_iHours - A._iHours, this->_iMins - A._iMins, this->_iSecs - A._iSecs);
	*this = B;
	return *this;
}
bool CTimeSpan::operator <(CTimeSpan A)
{
	CTimeSpan B = *this - A;
	if (B._lDays < 0) return true;
	return false;
}
bool CTimeSpan::operator <=(CTimeSpan A)
{
	CTimeSpan C = *this - A;
	if (C._lDays < 0 || (!C._lDays && !C._iHours && !C._iMins && !C._iSecs)) return true;
	return false;
}
bool CTimeSpan::operator >(CTimeSpan A)
{
	return !(*this <= A);
}
bool CTimeSpan::operator >=(CTimeSpan A)
{
	return !(*this < A);
}
bool CTimeSpan::operator ==(CTimeSpan A)
{
	CTimeSpan C = *this - A;
	if (!C._lDays && !C._iHours && !C._iMins && !C._iSecs) return true;
	return false;
}
bool CTimeSpan::operator !=(CTimeSpan A)
{
	return !(*this == A);
}
std::istream& operator >>(std::istream& is, CTimeSpan& A)
{
	long x;
	int y, z, t;
	std::cout << "Moi nhap ngay: ";
	is >> x;
	std::cout << "Moi nhap gio: ";
	is >> y;
	std::cout << "Moi nhap phut: ";
	is >> z;
	std::cout << "Moi nhap giay: ";
	is >> t;
	CTimeSpan B(x, y, z, t);
	A = B;
	return is;
}
std::ostream& operator <<(std::ostream& os, CTimeSpan A)
{
	if (A._lDays && A._lDays != 1 && A._lDays != -1)
		os << A._lDays << "days";
	else os << A._lDays << "day";
	os << A._iHours << "h" << A._iMins << "'" << A._iSecs << '"';
	return os;
}
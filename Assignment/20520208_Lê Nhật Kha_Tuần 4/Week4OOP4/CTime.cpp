#include "CTime.h"

CTime::CTime(int x, int y, int z)
{
	this->_iHours = x;
	this->_iMins = y;
	this->_iSecs = z;
	if (this->_iSecs < 0)
	{
		if (!(this->_iSecs % 60))
		{
			this->_iMins -= (this->_iSecs / 60);
			this->_iSecs = 0;
		}
		else
		{
			this->_iMins -= (this->_iSecs / 60 + 1);
			this->_iSecs = this->_iSecs % 60 + 60;
		}
	}
	if (this->_iMins < 0)
	{
		if (!(this->_iMins % 60))
		{
			this->_iHours -= (this->_iMins / 60);
			this->_iMins = 0;
		}
		else
		{
			this->_iHours -= (this->_iMins / 60 + 1);
			this->_iMins = this->_iMins % 60 + 60;
		}
	}
	if (this->_iHours < 0)
	{
		if (!(this->_iHours % 24))
			this->_iHours = 0;
		else
			this->_iHours = this->_iHours % 24 + 24;
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
		this->_iHours %= 24;
}
long CTime::GetHours()
{
	return this->_iHours;
}
long CTime::GetMinutes()
{
	return this->_iMins;
}
long CTime::GetSeconds()
{
	return this->_iSecs;
}
CTime CTime::operator +(int n)
{
	CTime A(this->_iHours, this->_iMins, this->_iSecs + n);
	*this = A;
	return A;
}
CTime CTime::operator -(int n)
{
	CTime A(this->_iHours, this->_iMins, this->_iSecs - n);
	*this = A;
	return A;
}
CTime CTime::operator -(const CTime A)
{
	CTime B(this->_iHours - A._iHours, this->_iMins - A._iMins, this->_iSecs - A._iSecs);
	return B;
}
CTime CTime::operator ++()
{
	CTime A(this->_iHours, this->_iMins, this->_iSecs + 1);
	*this = A;
	return A;
}
CTime CTime::operator ++(int)
{
	CTime temp = *this;
	CTime A(this->_iHours, this->_iMins, this->_iSecs + 1);
	*this = A;
	return temp;
}
CTime CTime::operator --()
{
	CTime A(this->_iHours, this->_iMins, this->_iSecs - 1);
	*this = A;
	return A;
}
CTime CTime::operator --(int)
{
	CTime temp = *this;
	CTime A(this->_iHours, this->_iMins, this->_iSecs - 1);
	*this = A;
	return temp;
}
std::istream& operator >>(std::istream& is, CTime& A)
{
	int x, y, z;
	std::cout << "Moi nhap gio: ";
	is >> x;
	std::cout << "Moi nhap phut: ";
	is >> y;
	std::cout << "Moi nhap giay: ";
	is >> z;
	CTime B(x, y, z);
	A = B;
	return is;
}
std::ostream& operator <<(std::ostream& os, CTime A)
{
	os << A._iHours << "h" << A._iMins << "'" << A._iSecs << '"';
	return os;
}
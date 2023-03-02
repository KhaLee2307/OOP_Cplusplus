#include "CDate.h"

bool CDate::CheckDate()
{
	if (this->_iDays > 31)
		return false;
	if (this->_iMonths > 12)
		return false;
	switch (this->_iMonths)
	{
	case 4:
	case 6:
	case 9:
	case 11:
	{
		if (this->_iDays > 30)
			return false;
		break;
	}
	case 2:
	{
		if ((!(this->_iYears % 4) && this->_iYears % 100) || !(this->_iYears % 400))
		{
			if (this->_iDays > 29)
				return false;
		}
		else
		{
			if (this->_iDays > 28)
				return false;
		}
	}
	}
	return true;
}
int CDate::GetYears()
{
	return this->_iYears;
}
int CDate::GetMonths()
{
	return this->_iMonths;
}
int CDate::GetDays()
{
	return this->_iDays;
}
CDate CDate::operator ++()
{
	++this->_iDays;
	switch (this->_iMonths)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	{
		if (this->_iDays > 31)
		{
			++this->_iMonths;
			this->_iDays = 1;
		}
		break;
	}
	case 4:
	case 6:
	case 9:
	case 11:
	{
		if (this->_iDays > 30)
		{
			++this->_iMonths;
			this->_iDays = 1;
		}
		break;
	}
	case 2:
	{
		if ((!(this->_iYears % 4) && this->_iYears % 100) || !(this->_iYears % 400))
		{
			if (this->_iDays > 29)
			{
				++this->_iMonths;
				this->_iDays = 1;
			}
		}
		else
		{
			if (this->_iDays > 28)
			{
				++this->_iMonths;
				this->_iDays = 1;
			}
		}
	}
	}
	if (this->_iMonths > 12)
	{
		++this->_iYears;
		this->_iMonths = 1;
	}
	return *this;
}
CDate CDate::operator ++(int)
{
	CDate temp = *this;
	++*this;
	return temp;
}
CDate CDate::operator --()
{
	--this->_iDays;
	if (!this->_iDays)
	{
		--this->_iMonths;
		if (!this->_iMonths)
		{
			this->_iMonths = 12;
			--this->_iYears;
		}
		switch (this->_iMonths)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		{
			this->_iDays = 31;
			break;
		}
		case 4:
		case 6:
		case 9:
		case 11:
		{
			this->_iDays = 30;
			break;
		}
		case 2:
		{
			if ((!(this->_iYears % 4) && this->_iYears % 100) || !(this->_iYears % 400))
				this->_iDays = 29;
			else
				this->_iDays = 28;
			break;
		}
		}
	}
	return *this;
}
CDate CDate::operator --(int)
{
	CDate temp = *this;
	--*this;
	return temp;
}
CDate CDate::operator +(int n)
{
	while (n--)
		++* this;
	return *this;
}
CDate CDate::operator -(int n)
{
	while (n--)
		--* this;
	return *this;
}
int CDate::operator -(CDate A)
{
	int count = 0;
	while (!(this->_iYears == A._iYears && this->_iMonths == A._iMonths && this->_iDays == A._iDays))
	{
		++A;
		++count;
	}
	return count;
}
std::istream& operator >>(std::istream& is, CDate& A)
{
	int x, y, z;
	std::cout << "Moi nhap nam: ";
	is >> x;
	std::cout << "Moi nhap thang: ";
	is >> y;
	std::cout << "Moi nhap ngay: ";
	is >> z;
	CDate B(x, y, z);
	while (!B.CheckDate())
	{
		std::cout << "Moi nhap lai nam: ";
		is >> x;
		std::cout << "Moi nhap lai thang: ";
		is >> y;
		std::cout << "Moi nhap lai ngay: ";
		is >> z;
		CDate C(x, y, z);
		B = C;
	}
	A = B;
	return is;
}
std::ostream& operator <<(std::ostream& os, CDate A)
{
	os << "ngay " << A.GetDays() << " thang " << A.GetMonths() << " nam " << A.GetYears();
	return os;
}
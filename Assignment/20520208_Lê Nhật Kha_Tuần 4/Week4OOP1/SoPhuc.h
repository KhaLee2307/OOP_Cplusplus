#include <iostream>

class SoPhuc
{
protected:
	double _dSoThuc;
	double _dSoAo;
public:
	SoPhuc(double SoThuc = 0, double SoAo = 0) : _dSoThuc(SoThuc), _dSoAo(SoAo) {}
	SoPhuc(const SoPhuc& A) : _dSoThuc(A._dSoThuc), _dSoAo(A._dSoAo) {}
	virtual~SoPhuc() {}
	void Set(double, double);
	void SetSoThuc(double);
	void SetSoAo(double);
	double GetSoThuc();
	double GetSoAo();
	friend std::istream& operator >> (std::istream&, SoPhuc&);
	friend std::ostream& operator << (std::ostream&, SoPhuc);
	friend SoPhuc operator + (SoPhuc, SoPhuc);
	friend SoPhuc operator - (SoPhuc, SoPhuc);
	friend SoPhuc operator * (SoPhuc, SoPhuc);
	friend SoPhuc operator / (SoPhuc, SoPhuc);
	friend bool operator == (SoPhuc, SoPhuc);
	friend bool operator != (SoPhuc, SoPhuc);
};
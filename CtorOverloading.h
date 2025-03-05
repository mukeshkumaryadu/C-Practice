#pragma once
#include<iostream>
#include <string>
using namespace std;

class Circle
{
public:
	int _r;
	Circle(int r)
	{
		_r = r;
	};

	Circle& operator ++()
	{
		++_r;
		return *this;
	}
	Circle& operator ++(int)
	{
		Circle c = *this;
		_r++;
		return c;
	}
	Circle& operator --() 
	{
		--_r;
			return *this;
	}
	Circle& operator --(int)
	{
		_r--;
		return *this;
	}
	Circle operator &(Circle c)
	{
		int newR = this->_r & c._r;
		return Circle(newR);
	}
	Circle operator |(Circle c) 
	{
		int newR = this->_r | c._r;
		return Circle(newR);
	}
	Circle operator ^(Circle c)
	{
		int newR = this->_r ^ c._r; 
		return Circle(newR);
	}
	Circle operator ~()
	{
		int newR = ~ this->_r;
		return Circle(newR);
	}

	Circle operator >>(Circle c)
	{
		int newR =  this->_r >> 1;
		return Circle(newR);
	}
	
	Circle operator <<(Circle c)
	{
		int newR = this->_r << 1;
		return Circle(newR);
	}
	Circle operator >>=(int n)
	{
		//cout << n;
		this->_r >>= n;
		return *this;
	}
};

class complex 
{
	int _rNo,_imeNo;
public :
	complex(int rNo,int imeNo ) 
	{
		_rNo = rNo;
		_imeNo = imeNo;		
	}

	complex(complex& com)
	{
		_rNo = com._rNo;
		_imeNo = com._imeNo;
	}

	void operator =(complex& com)
	{
		_rNo = com._rNo;
		_imeNo = com._imeNo;
	}
	void operator +=(complex& com)
	{
		_rNo = _rNo + com._rNo;
		_imeNo = _imeNo + com._imeNo;
	}
	void operator -=(complex& com)
	{
		_rNo = _rNo - com._rNo;
		_imeNo = _imeNo - com._imeNo;
	}
	void operator *=(complex& com)
	{
		_rNo = _rNo * com._rNo;
		_imeNo = _imeNo * com._imeNo;
	}
	void operator /=(complex& com)
	{
		_rNo = _rNo / com._rNo;
		_imeNo = _imeNo / com._imeNo;
	}

	void operator %=(complex& com)
	{
		_rNo = _rNo % com._rNo;
		_imeNo = _imeNo % com._imeNo;
	}

	string Display() 
	{		
		string ret =  std::to_string(_rNo) + "+" + std::to_string(_imeNo) + "i";
		return ret;
	}
	complex add(complex com) 
	{
		int realNo =com._rNo + this->_rNo;
		int imgNo = com._imeNo + this->_imeNo;

		complex comObj(realNo, imgNo);
		return comObj;
	}

	complex operator +(complex com)
	{
		complex comObj(com._rNo + this->_rNo, com._imeNo + this->_imeNo);
		return comObj;
	}
	complex operator -(complex com)
	{
		complex comObj(this->_rNo - com._rNo, this->_imeNo - com._imeNo);//storing value
		return comObj;
	}
	bool operator ==(complex com)
	{
		if (this->_rNo == com._rNo && this->_imeNo == com._imeNo)
		{
			return true;
		}
		
		return false;	 
	}

	bool operator !=(complex com)
	{
		if (this->_rNo != com._rNo && this->_imeNo != com._imeNo)
		{
			return true;
		}

		return false;
	}
	bool operator <(complex com)
	{
		bool realNo = this->_rNo < com._rNo;
		bool imgNo = this->_imeNo < com._imeNo;
		if (this->_rNo < com._rNo)
		{
			return true;
		}
		else if (this->_rNo > com._rNo)
		{
			return false;
		}
		else if (this->_imeNo < com._imeNo) 
		{
			return true;
		}
		else {return false;}
	}
	bool operator >(complex com)
	{
		bool realNo = this->_rNo > com._rNo;
		bool imgNo = this->_imeNo > com._imeNo;
		if (this->_rNo > com._rNo)
		{
			return true;
		}
		else if (this->_rNo < com._rNo)
		{
			return false;
		}
		else if (this->_imeNo > com._imeNo)
		{
			return true;
		}
		else { return false; }
	}
	bool operator >=(complex com)
	{
		bool realNo = this->_rNo >= com._rNo;
		bool imgNo = this->_imeNo >= com._imeNo;
		if (this->_rNo >= com._rNo)
		{
			return true;
		}
		else if (this->_rNo <= com._rNo)
		{
			return false;
		}
		else if (this->_imeNo >= com._imeNo)
		{
			return true;
		}
		else { return false; }
	}
	bool operator <=(complex com)
	{
		bool realNo = this->_rNo <= com._rNo;
		bool imgNo = this->_imeNo <= com._imeNo;
		if (this->_rNo <= com._rNo)
		{
			return true;
		}
		else if (this->_rNo >= com._rNo)
		{
			return false;
		}
		else if (this->_imeNo <= com._imeNo)
		{
			return true;
		}
		else { return false; }
	}
	friend ostream& operator<<(ostream& os, const complex& com)
	{
		string ret;
		if (com._imeNo > 0)
		{
			ret = std::to_string(com._rNo) + "+" + std::to_string(com._imeNo) + "i";
		}
		else
		{
			ret = std::to_string(com._rNo) + "" + std::to_string(com._imeNo) + "i";
		}
		 
		os << ret << endl;	
		return os;
	}
	complex operator *(complex com)
	{
		complex comObj(com._rNo * this->_rNo, com._imeNo * this->_imeNo);
		return comObj;
	}
	complex operator /(complex com)
	{
		complex comObj(this->_rNo / com._rNo, this->_imeNo / com._imeNo);//storing value
		return comObj;
	}
	complex operator %(complex com)
	{
		complex comObj(com._rNo % this->_rNo, com._imeNo % this->_imeNo);
		return comObj;
	}
 
};

class TestPublic 
{
public :
	int a = 12;
	float b = 23;
	void display1()
	{
		cout << "mukesh";

	}
};

class classesObj
{
	int main1() 
	{
		TestPublic tp1;
		TestPublic *tp = new TestPublic();
		tp1.display1();
		tp->a;
		delete tp;
	}
};


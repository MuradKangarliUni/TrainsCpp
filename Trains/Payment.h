#pragma once
#include <iostream>
typedef const double& doubleRef;

class Payment
{
public:
	void Pay();
	void Pay(doubleRef money);
private:
	double m_price;
	double m_paid;
};


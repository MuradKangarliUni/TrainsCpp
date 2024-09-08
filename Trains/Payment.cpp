#include "Payment.h"


void Payment::Pay() {
	m_paid = m_price;
}

void Payment::Pay(doubleRef money) {
	if (money > m_price) {
		std::cout << "Warning: Money more than m_price, skipping extra..." << std::endl;
		Pay();
	}
	else {
		m_paid = money;
	}
}
#pragma once
#include "Human.h"

class Customer : public Human
{
public:
	Customer(intRef id, strRef name, strRef surname);
	Customer(Customer&& c) noexcept{
		m_name = c.m_name;
		m_surname = c.m_surname;
		m_id = c.m_id;
	}
	Customer(const Customer& c) {
		m_name = c.m_name;
		m_surname = c.m_surname;
		m_id = c.m_id;
	}
	Customer& operator=(const Customer& c) {
		m_name = c.m_name;
		m_surname = c.m_surname;
		m_id = c.m_id;
	}
	Customer&& operator=(Customer&& c) noexcept {
		m_name = c.m_name;
		m_surname = c.m_surname;
		m_id = c.m_id;
	}

	void setName(strRef name) override;
	void setSurname(strRef surname) override;
	void setId(intRef id) override;

	std::string getName() const override;
	std::string getSurname() const override;
	std::int32_t getId() const override;
private:
	std::string m_name;
	std::string m_surname;
	std::int32_t m_id;
};


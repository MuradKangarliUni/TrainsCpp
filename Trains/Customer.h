#pragma once
#include "Human.h"

class Customer : public Human
{
public:
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


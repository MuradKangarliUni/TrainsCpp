#pragma once
#include <string>

typedef const std::string& strRef;
typedef const std::int32_t& intRef;

class Human
{
public:

	virtual void setName(strRef name) = 0;
	virtual void setSurname(strRef surname) = 0;
	virtual std::string getName() const = 0;
	virtual std::string getSurname() const = 0;
	virtual std::int32_t getId() const = 0;
	virtual void setId(intRef& id) = 0;
	virtual ~Human() {};
};
#include "Customer.h"

Customer::Customer(intRef id, strRef name, strRef surname)
    : m_id(id), m_name(name), m_surname(surname)
{

}

void Customer::setId(intRef id)
{
    m_id = id;
}

void Customer::setName(strRef name)
{
    m_name = name;
}

void Customer::setSurname(strRef surname)
{
    m_surname = surname;
}

std::int32_t Customer::getId() const
{
    return m_id; 
}

std::string Customer::getName() const 
{
  return m_name;
}

std::string Customer::getSurname() const {
  return m_surname;
}

// Part 2 of Lab #2

//******************************************************************

//client for TimeEmployee
#include <iostream>
#include "PersonType.h"
#include "PartTimeEmployee.h"
using namespace std;

int main()
{
    personType newPerson;
    partTimeEmployee newEmployee("John","Smith",7.50,56);
    partTimeEmployee employee;
    newEmployee.print();
    employee.setNameRateHours("Rachel", "Moore",9.75, 45);
    employee.print();
    return 0;
}
#include <string>
#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Utility.h"
using namespace std;

int main()
{
	Person person1("A123456789", "Wu", "", "Shiang", "2003-05-04");

	Person* person2 = new Person();
	person2->setId("B987654321");
	person2->setLastName("Wang");
	person2->setFirstName("David");
	person2->setGender("M");
	person2->setBirthDate("1999-01-01");

	person1.display();
	cout << endl;
	person2->display();

	Student student1("A123456789", "Wu", "Shiang", "M", "2003-05-04", "S001", Department::ComputerSciece, ClassName::_1A);
	student1.display();
}
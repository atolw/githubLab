#include <iostream>
#include <iomanip>
#include <windows.h>
#include <algorithm>

struct student
{
	char surname[30];
	int yearOfBirth;
	int grades[3];
};

bool filterByDate(student student, int lowerBound, int upperBound)
{
	return student.yearOfBirth < upperBound && student.yearOfBirth > lowerBound;
}
int minArr(int arr[], size_t size)
{
	int minEm = arr[0];
	for (size_t i = 1; i < size; i++)
	{
		minEm = min(minEm, arr[i]);
	}
	return minEm;
}

bool filterByGrades(student student[], size_t size)
{
	return (minArr(student->grades, size) < 60);
}

using namespace std;
int main()
{
	/*Створити масив структур, який містить відомості про студентів групи. 
	Кожна структура містить поля - прізвище студента, рік народження і оцінки за трьома іспитів. 
	Написати програму, що видає наступну інформацію: 
	список студентів, 
	зі вказаним діапазоном року народження 
	із зазначенням отриманих оцінок; 
	кількість студентів, 
	які отримали незадовільні оцінки хоча б по одній дисципліні.
*/
	student corn = { "jonathan", 1999, {80, 100, 70} };
	student ram = { "stone", 1995, {100, 90, 100} };
	student meg = { "adeth", 1983, {59, 70, 100} };
	student group108[3] = {corn, ram, meg};
	size_t count = 0;
	for (size_t i = 0; i < 3; i++)
	{
		if (filterByDate(group108[i], 1997, 2025))
			cout << "By age (>`97): " << group108[i].surname << ' ';
	}
	cout << '\n';
	for (size_t i = 0; i < 3; i++)
	{
		if (filterByGrades(group108[i]))
			 count++;
	}
	cout << "Amount of unsucceseful students: " << count;
}
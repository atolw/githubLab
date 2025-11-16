#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include "functions.h"
#include <algorithm>
#include <time.h>
#include <random>

// 1.Дано рядки S1 і S2. Перевірити, чи міститься рядок S1 у рядку S2. Якщо втримується, то вивести True, якщо не втримується, то вивести False.

bool str1instr2(const char* a, const char* b)
{
	return strstr(b, a) != nullptr;
}
struct student
{
	char surname[30];
	int yearOfBirth;
	int grades[3];
};

student filterByDate(student students[], int lowerBound, int upperBound)
{
	student groupFiltered;
	for (size_t i = 0; i < (sizeof(students) / sizeof(students)); i++)
	{
		if (students[i].yearOfBirth < upperBound && students[i].yearOfBirth >> lowerBound)
			groupFiltered = students[i];
	}
	return groupFiltered;
}
int minArr(int arr[])
{
	int min = arr[0];
	for (size_t i = 1; i < (sizeof(arr) / 4); i++)
	{
		if (!min(min, arr[i]))
			min = arr[i];
	}
	return min;
}

student filterByGrades(student students[])
{
	student groupFiltered;
	for (size_t i = 0; i < (sizeof(students) / sizeof(students)); i++)
	{

		if (minArr(students[i].grades) < 60)
			groupFiltered = students[i];
	}
	return groupFiltered;
}

using namespace std;
int main()
{
	char str1[50];
	cin.getline(str1, 50);
	cout << boolalpha << str1instr2(str1, "str2str2str1str0") << endl;
	cout << str1instr2("str1", "str2str2strstr0");
}
	
//
//	/*Створити масив структур, який містить відомості про студентів групи. 
//	Кожна структура містить поля - прізвище студента, рік народження і оцінки за трьома іспитів. 
//	Написати програму, що видає наступну інформацію: 
//	список студентів, 
//	зі вказаним діапазоном року народження 
//	із зазначенням отриманих оцінок; 
//	кількість студентів, 
//	які отримали незадовільні оцінки хоча б по одній дисципліні.
//*/
//	student corn = { "jonathan", 1999, {80, 100, 70} };
//	student ram = { "stone", 1995, {100, 90, 100} };
//	student meg = { "adeth", 1983, {59, 70, 100} };
//
//	student group108[3] = {corn, ram, meg};
//	student Filteredbyage[3];
//	Filteredbyage = filterByDate(group108, 1982, 1998);
//	student FIlteredbyfailing[] = filterByGrades(group108);
//	for (size_t i = 0; i < 2; i++)
//	{
//		cout << Filteredbyage
//	}

<<<<<<< HEAD
#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include "functions.h"
#include <algorithm>
#include<string>

// 1.Äàíî ğÿäêè S1 ³ S2. Ïåğåâ³ğèòè, ÷è ì³ñòèòüñÿ ğÿäîê S1 ó ğÿäêó S2. ßêùî âòğèìóºòüñÿ, òî âèâåñòè True, ÿêùî íå âòğèìóºòüñÿ, òî âèâåñòè False.

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
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string alphabet1 = "ÀÁÂÃÄÅªÆÇÈ²¯ÉÊËÌÍÎÏĞÑÒÓÔÕÖ×ØÙÜŞß";
	string alphabet2 = "ÎÏĞÑÒÓÔÕÖ×ØÙÜŞßÀÁÂÃÄÅªÆÇÈ²¯ÉÊËÌÍ";
	string text = "ÅßØÒÃØŞÄÓÅß×ª×ÊÂÂÒÁØÔÌÖÂÅÁÂĞÁ×ÈØÒÓÜŞÎÁªÂÄØĞÅËŞÂÙªÓ ÂÄØÙÀÁÂÕ×ÁÏÆĞÄÂÖÑßÍÒÀÁÂÕ×Á×ÍŞÁÂĞÂÑÂÅÎÀÂÅªØÜÁÂÑÂÂÏÔŞ ªÎÀÎªÓÀÎª×¯ÁÂÑÂÒÂÅßØÒÕÓÁÁÍªÂÀÆÁÓÂÏÈØÒÁÂÄÂÖÄØÖÁÍª×ªÎŞ ØÒĞÎÄØÖÁØÂÏÔŞª×ÍŞÓßÓÀÓÁªØÀÁÂÕ×ÁÎÍŞÎÅŞßÎÒÎÔªËÅÍÖÔÒ ×ÁÂÑÂÓßÓÀÓÁªÎÖÂŞÄÓÀÎÀÁÂÕ×Á×ÀÂÕÆªËĞ×ÅªÆÃÎª×ĞÄÂßØÓßÓÀÓ ÁªØĞÍŞÂÙÅËØÁÉÂÙÀÁÂÕ×Á×ÒÄÆÑ×ÜÅÃÂÅØÏÖÎÒÎÁÁÍÀÁÂÕ×ÁÑÄÆÁ ªÆÔªËÅÍÁÎÖÎÖÁÎ¯ÓÁÁØÖÎÑÎßËÁÂÙĞßÎÅª×ĞÂÅªØÎÏÂÃÂÄÂÒÕÆĞÎß ËÁÂÙÃÄÂ²ÓÒÆÄ×ÒßÍĞÅØÈÂÏÔŞªØĞÊÂÆªĞÂÄÌÌªËÂÃ×ÅÆĞÎÁÆÀÁÂÕ ×ÁÆªÎŞ×ÜĞ×ÄÎÖ¯×ªÎÔªËÅÍªÎŞÀÁÂÕ×ÁÎĞÅØÈªÎŞ×ÈÓßÓÀÓÁªØĞÒß ÍÍŞ×ÈĞ×ŞÂÁÆÔªËÅÍĞßÎÅª×ĞØÅªËÖÎÖÁÎ¯ÓÁÆĞßÎÅª×ĞØÅªËÀÎÌªË ĞÅØÓßÓÀÓÁª×ÀÁÂÕ×Á×ØªØßËŞ×ĞÂÁ×ÖÎÀØÅªËĞÓÄª×ŞÎßËÁÂÙÄ×Å Ş×ØÁÂÒØÖÎÃ×ÅÆÌªËÒĞÂŞÄÎÃŞÆ²ÓÜÅÃÂÅØÏÔÏØßËÉÖÎÑÎßËÁ×ÀÅ ÃÂÅÂÏÂÀÖÎÒÎÁÁÍÀÁÂÕ×Á";

	for (int i = 0; i < 31; i++)
	{
		replace(text.begin(), text.end(), alphabet1[i], alphabet2[i]);
	}
	cout << text;
	/*cout << boolalpha << str1instr2("str1", "str2str2str1str0");*/
//
//	/*Ñòâîğèòè ìàñèâ ñòğóêòóğ, ÿêèé ì³ñòèòü â³äîìîñò³ ïğî ñòóäåíò³â ãğóïè. 
//	Êîæíà ñòğóêòóğà ì³ñòèòü ïîëÿ - ïğ³çâèùå ñòóäåíòà, ğ³ê íàğîäæåííÿ ³ îö³íêè çà òğüîìà ³ñïèò³â. 
//	Íàïèñàòè ïğîãğàìó, ùî âèäàº íàñòóïíó ³íôîğìàö³ş: 
//	ñïèñîê ñòóäåíò³â, 
//	ç³ âêàçàíèì ä³àïàçîíîì ğîêó íàğîäæåííÿ 
//	³ç çàçíà÷åííÿì îòğèìàíèõ îö³íîê; 
//	ê³ëüê³ñòü ñòóäåíò³â, 
//	ÿê³ îòğèìàëè íåçàäîâ³ëüí³ îö³íêè õî÷à á ïî îäí³é äèñöèïë³í³.
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
}



=======
-- 1. Ğ¡Ñ‚Ğ²Ğ¾Ñ€ĞµĞ½Ğ½Ñ Ğ±Ğ°Ğ·Ğ¸ Ğ´Ğ°Ğ½Ğ¸Ñ…
CREATE DATABASE HospitalDB;
GO

USE HospitalDB;
GO

-- ===========================================
--  Ğ¢ĞĞ‘Ğ›Ğ˜Ğ¦Ğ¯ 1: Ğ’Ñ–Ğ´Ğ´Ñ–Ğ»ĞµĞ½Ğ½Ñ (Departments)
-- ===========================================
CREATE TABLE Departments (
    Id INT IDENTITY(1,1) PRIMARY KEY,
    Building INT NOT NULL CHECK (Building BETWEEN 1 AND 5),
    Financing MONEY NOT NULL CHECK (Financing >= 0) DEFAULT(0),
    Floor INT NOT NULL CHECK (Floor >= 1),
    Name NVARCHAR(100) NOT NULL UNIQUE CHECK (LEN(Name) > 0)
);
GO

-- ===========================================
--  Ğ¢ĞĞ‘Ğ›Ğ˜Ğ¦Ğ¯ 2: Ğ—Ğ°Ñ…Ğ²Ğ¾Ñ€ÑĞ²Ğ°Ğ½Ğ½Ñ (Diseases)
-- ===========================================
CREATE TABLE Diseases (
    Id INT IDENTITY(1,1) PRIMARY KEY,
    Name NVARCHAR(100) NOT NULL UNIQUE CHECK (LEN(Name) > 0),
    Severity INT NOT NULL CHECK (Severity >= 1) DEFAULT(1)
);
GO

-- ===========================================
--  Ğ¢ĞĞ‘Ğ›Ğ˜Ğ¦Ğ¯ 3: Ğ›Ñ–ĞºĞ°Ñ€Ñ– (Doctors)
-- ===========================================
CREATE TABLE Doctors (
    Id INT IDENTITY(1,1) PRIMARY KEY,
    Name NVARCHAR(MAX) NOT NULL CHECK (LEN(Name) > 0),
    Surname NVARCHAR(MAX) NOT NULL CHECK (LEN(Surname) > 0),
    Phone CHAR(10) NOT NULL,
    Premium MONEY NOT NULL CHECK (Premium >= 0) DEFAULT(0),
    Salary MONEY NOT NULL CHECK (Salary > 0)
);
GO

-- ===========================================
--  Ğ¢ĞĞ‘Ğ›Ğ˜Ğ¦Ğ¯ 4: ĞĞ±ÑÑ‚ĞµĞ¶ĞµĞ½Ğ½Ñ (Examinations)
-- ===========================================
CREATE TABLE Examinations (
    Id INT IDENTITY(1,1) PRIMARY KEY,
    Name NVARCHAR(100) NOT NULL UNIQUE CHECK (LEN(Name) > 0),
    DayOfWeek INT NOT NULL CHECK (DayOfWeek BETWEEN 1 AND 7),
    StartTime TIME NOT NULL CHECK (StartTime >= '08:00' AND StartTime <= '18:00'),
    EndTime TIME NOT NULL 
);
GO

-- ===========================================
--  Ğ¢ĞĞ‘Ğ›Ğ˜Ğ¦Ğ¯ 5: ĞŸĞ°Ğ»Ğ°Ñ‚Ğ¸ (Wards)
-- ===========================================
CREATE TABLE Wards (
    Id INT IDENTITY(1,1) PRIMARY KEY,
    Building INT NOT NULL CHECK (Building BETWEEN 1 AND 5),
    Floor INT NOT NULL CHECK (Floor >= 1),
    Name NVARCHAR(20) NOT NULL UNIQUE CHECK (LEN(Name) > 0)
);
GO

-- ===========================================
-- Ğ”Ğ¾Ğ´Ğ°Ğ²Ğ°Ğ½Ğ½Ñ Ğ´Ğ°Ğ½Ğ¸Ñ…
-- ===========================================

-- Departments
INSERT INTO Departments (Building, Financing, Floor, Name) VALUES
(1, 50000, 2, N'ĞšĞ°Ñ€Ğ´Ñ–Ğ¾Ğ»Ğ¾Ğ³Ñ–Ñ'),
(2, 40000, 1, N'ĞŸĞµĞ´Ñ–Ğ°Ñ‚Ñ€Ñ–Ñ'),
(3, 60000, 3, N'ĞĞ½ĞºĞ¾Ğ»Ğ¾Ğ³Ñ–Ñ'),
(4, 45000, 1, N'ĞĞµĞ²Ñ€Ğ¾Ğ»Ğ¾Ğ³Ñ–Ñ'),
(5, 30000, 2, N'ĞÑ„Ñ‚Ğ°Ğ»ÑŒĞ¼Ğ¾Ğ»Ğ¾Ğ³Ñ–Ñ'),
(1, 70000, 3, N'Ğ¥Ñ–Ñ€ÑƒÑ€Ğ³Ñ–Ñ'),
(2, 20000, 1, N'Ğ¢ĞµÑ€Ğ°Ğ¿Ñ–Ñ'),
(3, 25000, 2, N'Ğ†Ğ½Ñ„ĞµĞºÑ†Ñ–Ğ¹Ğ½Ğµ'),
(4, 35000, 4, N'Ğ”ĞµÑ€Ğ¼Ğ°Ñ‚Ğ¾Ğ»Ğ¾Ğ³Ñ–Ñ'),
(5, 27000, 1, N'Ğ¡Ñ‚Ğ¾Ğ¼Ğ°Ñ‚Ğ¾Ğ»Ğ¾Ğ³Ñ–Ñ'),
(1, 22000, 2, N'ĞÑ€Ñ‚Ğ¾Ğ¿ĞµĞ´Ñ–Ñ'),
(2, 33000, 3, N'Ğ£Ñ€Ğ¾Ğ»Ğ¾Ğ³Ñ–Ñ'),
(3, 41000, 4, N'Ğ•Ğ½Ğ´Ğ¾ĞºÑ€Ğ¸Ğ½Ğ¾Ğ»Ğ¾Ğ³Ñ–Ñ'),
(4, 38000, 2, N'ĞŸÑƒĞ»ÑŒĞ¼Ğ¾Ğ½Ğ¾Ğ»Ğ¾Ğ³Ñ–Ñ'),
(5, 29000, 1, N'Ğ“Ñ–Ğ½ĞµĞºĞ¾Ğ»Ğ¾Ğ³Ñ–Ñ');
GO

-- Diseases
INSERT INTO Diseases (Name, Severity) VALUES
(N'Ğ“Ñ€Ğ¸Ğ¿', 2),
(N'ĞŸĞ½ĞµĞ²Ğ¼Ğ¾Ğ½Ñ–Ñ', 4),
(N'Ğ‘Ñ€Ğ¾Ğ½Ñ…Ñ–Ñ‚', 3),
(N'COVID-19', 5),
(N'Ğ”Ñ–Ğ°Ğ±ĞµÑ‚', 4),
(N'Ğ“Ğ°ÑÑ‚Ñ€Ğ¸Ñ‚', 2),
(N'Ğ“Ñ–Ğ¿ĞµÑ€Ñ‚Ğ¾Ğ½Ñ–Ñ', 3),
(N'ĞœÑ–Ğ³Ñ€ĞµĞ½ÑŒ', 2),
(N'ĞÑÑ‚Ğ¼Ğ°', 4),
(N'ĞĞ»ĞµÑ€Ğ³Ñ–Ñ', 1),
(N'Ğ Ğ°Ğº Ğ»ĞµĞ³ĞµĞ½Ñ–Ğ²', 5),
(N'Ğ ĞµĞ²Ğ¼Ğ°Ñ‚Ğ¸Ğ·Ğ¼', 3),
(N'ĞĞ½ĞµĞ¼Ñ–Ñ', 2),
(N'Ğ“ĞµĞ¿Ğ°Ñ‚Ğ¸Ñ‚', 4),
(N'ĞÑ‚Ğ¸Ñ‚', 2);
GO

-- Doctors
INSERT INTO Doctors (Name, Surname, Phone, Premium, Salary) VALUES
(N'ĞĞ»ĞµĞºÑĞ°Ğ½Ğ´Ñ€', N'Ğ†Ğ²Ğ°Ğ½ĞµĞ½ĞºĞ¾', '0671234567', 1000, 15000),
(N'ĞœĞ°Ñ€Ñ–Ñ', N'ĞŸĞµÑ‚Ñ€ĞµĞ½ĞºĞ¾', '0509876543', 1500, 17000),
(N'Ğ†Ğ³Ğ¾Ñ€', N'Ğ¨ĞµĞ²Ñ‡ĞµĞ½ĞºĞ¾', '0635551122', 500, 12000),
(N'ĞĞ»ĞµĞ½Ğ°', N'ĞšĞ¾Ğ²Ğ°Ğ»ÑŒ', '0682223344', 2000, 18000),
(N'Ğ¡ĞµÑ€Ğ³Ñ–Ğ¹', N'ĞœĞµĞ»ÑŒĞ½Ğ¸Ğº', '0974445566', 800, 14000),
(N'ĞĞ½Ğ´Ñ€Ñ–Ğ¹', N'Ğ‘Ğ¾Ğ½Ğ´Ğ°Ñ€', '0669990001', 1000, 16000),
(N'Ğ¡Ğ²Ñ–Ñ‚Ğ»Ğ°Ğ½Ğ°', N'Ğ›Ğ¸ÑĞµĞ½ĞºĞ¾', '0931112233', 1200, 14500),
(N'ĞšĞ°Ñ‚ĞµÑ€Ğ¸Ğ½Ğ°', N'Ğ”Ğ°Ğ½Ğ¸Ğ»ÑĞº', '0957778899', 500, 11000),
(N'Ğ’Ñ–ĞºÑ‚Ğ¾Ñ€', N'Ğ“Ğ¾Ğ½Ñ‡Ğ°Ñ€', '0731239876', 700, 13000),
(N'Ğ†Ğ½Ğ½Ğ°', N'Ğ Ğ¾Ğ¼Ğ°Ğ½ÑĞº', '0966543210', 900, 12500),
(N'ĞĞ°Ñ‚Ğ°Ğ»Ñ–Ñ', N'Ğ¡Ğ°Ğ²Ñ‡ÑƒĞº', '0994321987', 1100, 15500),
(N'ĞœĞ¸Ñ…Ğ°Ğ¹Ğ»Ğ¾', N'Ğ¢ĞºĞ°Ñ‡ĞµĞ½ĞºĞ¾', '0675557777', 300, 10000),
(N'Ğ®Ğ»Ñ–Ñ', N'Ğ§ĞµÑ€Ğ½ĞµĞ½ĞºĞ¾', '0638889999', 1800, 17500),
(N'Ğ”Ğ¼Ğ¸Ñ‚Ñ€Ğ¾', N'Ğ¡Ğ¸Ğ´Ğ¾Ñ€ĞµĞ½ĞºĞ¾', '0503334444', 700, 13500),
(N'Ğ¢ĞµÑ‚ÑĞ½Ğ°', N'ĞšÑ€Ğ°Ğ²Ñ‡ÑƒĞº', '0681112222', 950, 14200);
GO

-- Examinations
INSERT INTO Examinations (Name, DayOfWeek, StartTime, EndTime) VALUES
(N'Ğ—Ğ°Ğ³Ğ°Ğ»ÑŒĞ½Ğ¸Ğ¹ Ğ¾Ğ³Ğ»ÑĞ´', 1, '08:00', '08:30'),
(N'Ğ ĞµĞ½Ñ‚Ğ³ĞµĞ½', 2, '09:00', '09:45'),
(N'ĞšĞ°Ñ€Ğ´Ñ–Ğ¾Ğ³Ñ€Ğ°Ğ¼Ğ°', 3, '10:00', '10:30'),
(N'Ğ£Ğ—Ğ” Ñ‡ĞµÑ€ĞµĞ²Ğ½Ğ¾Ñ— Ğ¿Ğ¾Ñ€Ğ¾Ğ¶Ğ½Ğ¸Ğ½Ğ¸', 4, '11:00', '11:40'),
(N'ĞĞ½Ğ°Ğ»Ñ–Ğ· ĞºÑ€Ğ¾Ğ²Ñ–', 5, '08:15', '08:45'),
(N'ĞĞ³Ğ»ÑĞ´ Ğ¾Ñ„Ñ‚Ğ°Ğ»ÑŒĞ¼Ğ¾Ğ»Ğ¾Ğ³Ğ°', 6, '09:30', '10:00'),
(N'ĞĞµĞ²Ñ€Ğ¾Ğ»Ğ¾Ğ³Ñ–Ñ‡Ğ½Ğµ Ğ¾Ğ±ÑÑ‚ĞµĞ¶ĞµĞ½Ğ½Ñ', 7, '10:30', '11:15'),
(N'Ğ¤Ğ»ÑĞ¾Ñ€Ğ¾Ğ³Ñ€Ğ°Ñ„Ñ–Ñ', 1, '11:30', '12:00'),
(N'Ğ¢ĞµÑÑ‚ Ğ½Ğ° Ğ°Ğ»ĞµÑ€Ğ³Ñ–Ñ', 2, '08:45', '09:30'),
(N'Ğ•ĞšĞ“', 3, '09:00', '09:30'),
(N'ĞœĞ Ğ¢ Ğ³Ğ¾Ğ»Ğ¾Ğ²Ğ¸', 4, '12:00', '12:45'),
(N'Ğ”ĞµĞ½ÑĞ¸Ñ‚Ğ¾Ğ¼ĞµÑ‚Ñ€Ñ–Ñ', 5, '13:00', '13:40'),
(N'Ğ“Ğ°ÑÑ‚Ñ€Ğ¾ÑĞºĞ¾Ğ¿Ñ–Ñ', 6, '10:15', '11:00'),
(N'ĞŸÑĞ¸Ñ…Ğ¾Ğ»Ğ¾Ğ³Ñ–Ñ‡Ğ½Ğµ Ñ‚ĞµÑÑ‚ÑƒĞ²Ğ°Ğ½Ğ½Ñ', 7, '14:00', '14:30'),
(N'ĞÑ‚Ğ¾Ğ»Ğ°Ñ€Ğ¸Ğ½Ğ³Ğ¾Ğ»Ğ¾Ğ³Ñ–Ñ‡Ğ½Ğµ Ğ¾Ğ±ÑÑ‚ĞµĞ¶ĞµĞ½Ğ½Ñ', 1, '15:00', '15:30');
GO

-- Wards
INSERT INTO Wards (Building, Floor, Name) VALUES
(1, 1, N'ĞŸĞ°Ğ»Ğ°Ñ‚Ğ° â„–101'),
(1, 2, N'ĞŸĞ°Ğ»Ğ°Ñ‚Ğ° â„–201'),
(2, 1, N'ĞŸĞ°Ğ»Ğ°Ñ‚Ğ° â„–102'),
(2, 2, N'ĞŸĞ°Ğ»Ğ°Ñ‚Ğ° â„–202'),
(3, 1, N'ĞŸĞ°Ğ»Ğ°Ñ‚Ğ° â„–103'),
(3, 2, N'ĞŸĞ°Ğ»Ğ°Ñ‚Ğ° â„–203'),
(4, 1, N'ĞŸĞ°Ğ»Ğ°Ñ‚Ğ° â„–104'),
(4, 2, N'ĞŸĞ°Ğ»Ğ°Ñ‚Ğ° â„–204'),
(5, 1, N'ĞŸĞ°Ğ»Ğ°Ñ‚Ğ° â„–105'),
(5, 2, N'ĞŸĞ°Ğ»Ğ°Ñ‚Ğ° â„–205'),
(1, 3, N'ĞŸĞ°Ğ»Ğ°Ñ‚Ğ° â„–301'),
(2, 3, N'ĞŸĞ°Ğ»Ğ°Ñ‚Ğ° â„–302'),
(3, 3, N'ĞŸĞ°Ğ»Ğ°Ñ‚Ğ° â„–303'),
(4, 3, N'ĞŸĞ°Ğ»Ğ°Ñ‚Ğ° â„–304'),
(5, 3, N'ĞŸĞ°Ğ»Ğ°Ñ‚Ğ° â„–305');
GO
>>>>>>> 91e847130ffec2b92463c063ce8d6ab964a87e3c

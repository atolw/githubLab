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

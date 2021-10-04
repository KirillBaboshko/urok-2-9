#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//union 
//{
//	short int comp1;
//	int comp2;
//	long comp3;
//}Myunion;
//union Employee{
//	int id;
//	double salary;
//};
struct Date
{
	unsigned short Day : 5;
	unsigned short  Chas :  5;
	unsigned short Month : 4;
	unsigned short Year : 7;
	unsigned short  Sec : 6;
	unsigned short  Min : 6;
};
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	Date ty;
	/*Myunion.comp1 = 22;
	cout << Myunion.comp1<< endl;
	Myunion.comp2 = 2;
	cout << Myunion.comp2 << endl;
	Myunion.comp3 = 222222222;
	cout << Myunion.comp3 << endl;*/
	/*Employee myEmployee;
	myEmployee.id = 15;
	cout << myEmployee.id << endl;
	myEmployee.salary = 100.35;
	cout << myEmployee.salary << endl;*/
	int i;
	cout << "¬ведите день:"<<endl;
	cin >> i;
	ty.Day = i;
	cout << "\n";
	cout << "¬ведите мес€ц:" << endl;
	cin >> i;
	ty.Month = i;
	cout << "\n";
	cout << "¬ведите год:" << endl;
	cin >> i;
	ty.Year = i;
	cout << "\n";
	cout << "¬ведите час:" << endl;
	cin >> i;
	ty.Chas = i;
	cout << "\n";
	cout << "¬ведите секунды:" << endl;
	cin >> i;
	ty.Sec = i;
	cout << "\n";
	cout << "¬ведите минуты:" << endl;
	cin >> i;
	ty.Min = i;
	cout << "\n";
	cout << ty.Day << "." << ty.Month << ".20" << ty.Year << "." << ty.Chas << ":" << ty.Min << ":" << ty.Sec << endl;
	cout << sizeof(ty);


	return 0;
}
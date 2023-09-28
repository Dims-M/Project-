//Директива подпроцессора
#include<iostream>
#include <cpr/cpr.h>

//Подключаем библиотеки. Пространство имен. Нужный функционал.
using namespace std;


void main()
{
	setlocale(LC_ALL,"Rus");
	/*system("chcp 1251>nul");*/
	cout << "Запуск программы" <<endl ; 

	//Get запрос к API
	
	auto r = cpr::Get(cpr::Url{ "http://185.87.48.87/api/мusictrackinfo/getallproducts/getallproducts" });

	auto& gg = r.text;
	cout << gg << endl;
	std::cout << "Returned Status:" << r.status_code << std::endl;

}

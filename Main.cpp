//��������� �������������
#include<iostream>
#include <cpr/cpr.h>

//���������� ����������. ������������ ����. ������ ����������.
using namespace std;


void main()
{
	setlocale(LC_ALL,"Rus");
	/*system("chcp 1251>nul");*/
	cout << "������ ���������" <<endl ; 

	//Get ������ � API
	
	auto r = cpr::Get(cpr::Url{ "http://185.87.48.87/api/�usictrackinfo/getallproducts/getallproducts" });

	auto& gg = r.text;
	cout << gg << endl;
	std::cout << "Returned Status:" << r.status_code << std::endl;

}

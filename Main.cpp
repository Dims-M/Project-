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


}

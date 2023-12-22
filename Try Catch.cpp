﻿
#include <iostream>
#include <fstream>
#include<string>
#include <vector>
using namespace std;


void task1(string path) {
	//Чтение файла : Напишите программу, которая пытается открыть и прочитать файл с заданным именем.
	//Используйте блок try и catch, чтобы обработать исключение, которое возникает, если файл не существует.

	ifstream in;

	in.exceptions(ifstream::badbit | ifstream::failbit);



	try
	{
		in.open(path);
	}
	catch (const std::exception& ex)
	{
		cout << "file is not fund" << endl;
	}
}


int task2(string str) {
	//Перевод строки в число : Запросите у пользователя строку, которая должна представлять собой целое число.
	//Используйте try и catch, чтобы обработать исключение, которое возникает, если введенная строка не может 
	//быть преобразована в целое число.
	int i;

	

	try
	{
		if (str.find(".")!= string::npos || str.find(",") != string::npos) {
			throw exception("is duuble");
		}
		i = stoi(str);
		return i;
		
	}
	catch (const std::exception& err)
	{
		cout << err.what() << endl;
		cout << "строка не может быть преобразована в целое число" << endl;
	}
	

	


}


void task3() {
	//
//Стек исключений : Создайте несколько классов исключений с разными типами.
// Затем напишите программу,в которой вызываются функции, которые могут генерировать исключения разных типов.
// Используйте try и catch для обработки этих исключений с разными типами.



}


void task4() {
//Собственное исключение : Напишите программу, которая считывает возраст пользователя.
//Если возраст меньше 0 или больше 150, сгенерируйте собственное исключение с информативным сообщением.
//Затем используйте try и catch, чтобы обработать это исключение.

	int age;
	cout << "Enter You AGE ! ";
	cin >> age;

	if (age < 0) {
		throw exception("БРЕД ВАШ возраст не млжет быть отрицательним !!!");
	}
	else if (age >= 150) {
		throw exception("БРЕД ваш возраст не может быть болше 150 лет !!!");
	}
	else
	{
		cout << age << endl;
	}

}



	//Работа с динамической памятью : Напишите программу, которая выделяет динамическую память с помощью оператора new 
	// и затем в блоке try выполняет операции с этой памятью(например, чтение или запись), 
	//а затем в блоке catch обрабатывает исключение, если что - то пошло не так.

void Task5(int num){
	int size = 10;
	int* dynamicArray = new int[size];
	try
	{
		dynamicArray[0] = num;

		cout << dynamicArray[0];
	}
	catch (const std::exception&err)
	{
		cout << err.what() << "чтото не так " << endl;
	}
	

	

	
	
	
	
}


void main()
{
	setlocale(LC_ALL, "ru");
	//task1("test.txt");
	/*cout<< task2("4");*/
	
	//
	//try
	//{
	//	task4();
	//}
	//catch (const std::exception&err)
	//{
	//	cout << err.what() << endl;
	//}

	Task5(3);

}



﻿

//
//Стек исключений : Создайте несколько классов исключений с разными типами.
// Затем напишите программу,в которой вызываются функции, которые могут генерировать исключения разных типов.
// Используйте try и catch для обработки этих исключений с разными типами.
//
//Собственное исключение : Напишите программу, которая считывает возраст пользователя.
//Если возраст меньше 0 или больше 150, сгенерируйте собственное исключение с информативным сообщением.
//Затем используйте try и catch, чтобы обработать это исключение.
//
//Работа с динамической памятью : Напишите программу, которая выделяет динамическую память с помощью оператора 
//new и затем в блоке try выполняет операции с этой памятью(например, чтение или запись), 
//а затем в блоке catch обрабатывает исключение, если что - то пошло не так.



#include <iostream>
#include <fstream>
#include<string>

using namespace std;


void task1() {
	//Чтение файла : Напишите программу, которая пытается открыть и прочитать файл с заданным именем.
	//Используйте блок try и catch, чтобы обработать исключение, которое возникает, если файл не существует.

	ifstream in;

	in.exceptions(ifstream::badbit | ifstream::failbit);



	try
	{
		in.open("test.txt");
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


void main()
{
	setlocale(LC_ALL, "ru");
	
	cout<< task2("4");
	




}



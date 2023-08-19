#include <iostream>

class  Calculator
{
public:
	double num1=0,num2=0;

	double add() {		
		return num1 + num2;
	}
	double multiply() {
		return num1 * num2;
	}
	double subtract_1_2() {		
		return num1 - num2;
	}
	double subtract_2_1() {
		return num2 - num1;
	}
	double divide_1_2() {
		return num1 / num2;
	}
	double divide_2_1() {
		return num2 / num1;
	}
	bool set_num1(double num1) {
		if (num1 == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	bool set_num2(double num2) {
		if (num2 == 0) {
			return true;			
		}
		else {
			return false;
		}
	}
};

int main() {
	Calculator cal;

	setlocale(LC_ALL, "Russian");
	
	while (true)
	{
		if (cal.num1==0) {
			std::cout << "Введите num1: ";
			std::cin >> cal.num1;
			if (cal.set_num1(cal.num1)) {
				std::cout << "Неверный ввод!" << std::endl;
				continue;
			}
		}
		std::cout << "Введите num2: ";
		std::cin >> cal.num2;
		if (cal.set_num2(cal.num2)) {
			std::cout << "Неверный ввод!" << std::endl;
			continue;
		}		
		std::cout << "num1 + num2 = " << cal.add() << std::endl;
		std::cout << "num1 * num2 = " << cal.multiply() << std::endl;
		std::cout << "num1 - num2 = " << cal.subtract_1_2() << std::endl;
		std::cout << "num2 - num1 = " << cal.subtract_2_1() << std::endl;
		std::cout << "num1 / num2 = " << cal.divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << cal.divide_2_1() << std::endl;
		cal.num1 = 0;
	}
}
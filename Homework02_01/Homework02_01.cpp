#include <iostream>

enum month
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};



int main() {

	setlocale(LC_ALL, "Russian");

	int a{};
	int* b;
	b = new int[a];
	month months = static_cast<month>(a);

	do
	{
		std::cout << "Введите номер месяца: " << std::endl;
		std::cin >> a;

		switch (a)
		{
		case month::January:
			std::cout << "Январь" << std::endl;
			break;
		case month::February:
			std::cout << "Февраль" << std::endl;
			break;
		case month::March:
			std::cout << "Март" << std::endl;
			break;
		case month::April:
			std::cout << "Апрель" << std::endl;
			break;
		case month::May:
			std::cout << "Май" << std::endl;
			break;
		case month::June:
			std::cout << "Июнь" << std::endl;
			break;
		case month::July:
			std::cout << "Июль" << std::endl;
			break;
		case month::August:
			std::cout << "Август" << std::endl;
			break;
		case month::September:
			std::cout << "Сентябрь" << std::endl;
			break;
		case month::October:
			std::cout << "Октябрь" << std::endl;
			break;
		case month::November:
			std::cout << "Ноябрь" << std::endl;
			break;
		case month::December:
			std::cout << "Декабрь" << std::endl;
			break;
		case 0:
			std::cout << "До свидания!" << std::endl;
			break;
		default:
			std::cout << "Нет такого номера!" << std::endl;

		}
	}
	while (a != 0);

	delete[] b;
}

	/*case month::March:
		//std::cout << "Март" << std::endl;
	case month::April:
		std::cout << "Апрель" << std::endl;
	case month::May:
		std::cout << "Май" << std::endl;
	case month::June:
		std::cout << "Июнь" << std::endl;
	case month::July:
		std::cout << "Июль" << std::endl;
	case month::August:
		std::cout << "Август" << std::endl;
	case month::September:
		std::cout << "Сентябрь" << std::endl;
	case month::October:
		std::cout << "Октябрь" << std::endl;
	case month::November:
		std::cout << "Ноябрь" << std::endl;
	case month::December:
		std::cout << "Декабрь" << std::endl;
	case 0:
		std::cout << "До свидания!" << std::endl;*/

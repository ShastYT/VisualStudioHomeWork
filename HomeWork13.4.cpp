/*
* Прощу прощения за долгое отсутствие,
* я был сильно занят подготовкой к ЕГЭ
* и последующей пересдачей одного из предметов
*/
#include <iostream>
#include <time.h>

class Vector3 {
private:
	double x;
	double y;
	double z;
public:
	Vector3() : x(0), y(0), z(0){}

	Vector3(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}

	double Lenght(){
		return pow((x * x + y * y + z * z),0.5);
	}

	void Show() 
	{
		std::cout << '\n' << x << " " << y << " " << z;
	}


};

int main()
{
	int x = 2; //
	int y = 3; //Длины вектора по осям xyz для 2го вывода
	int z = 4; //
	Vector3 V, V1(x,y,z);
	V.Show();
	V1.Show();
	std::cout << '\n' << V1.Lenght();
}


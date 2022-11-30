
#include<iostream>
#include<random>



int func(int x) {return x + 3;}

int sum(int a, int b) { return a + b; }

int fc(int x) { return x * x + 7 * x - 100; }

int pow(int base, int exp) {
	int r = 1;

	for (int i = 0; i < exp; i++)
	{
		r = base * r;
	}

	return r;
}

int functie_fara_parametri()
{
	int a = 10;
	int b = 5;
	int rezultat = pow(a, b) + 3;
	return rezultat;
}


int nondeterministic(int x) 
{
	return x + rand() % 10;
}

//int increment
void main()
{
	int rezultat = func(2);
	std::cout << "Rezultatul f(2)=" << rezultat << std::endl;
	//------------------------------------------------------
	std::cout << "Rezultatul sum(5,91)=" << sum(5,91) << std::endl;

	//fc(5)
	int calcul1 = 5 * 5 + 2 * 5 + 1;
	std::cout << "calcul1=" << calcul1 << std::endl;
	int calcul1_cu_functie = fc(5);
	std::cout << "calcul1_cu_functie=" << calcul1_cu_functie << std::endl;
	//...
	//...
	//...

	int calcul2 = 7 * 7 + 2 * 7 + 1;
	std::cout << "calcul2=" << calcul2 << std::endl;
	int calcul2_cu_functie = fc(7);

	std::cout << "calcul2_cu_functie=" << calcul2_cu_functie << std::endl;
	//...

	int a = 7;
	a++;//<=> a = a+1;
	std::cout << "valoarea lui a dupa aplicarea operatorului ++ (increment) este" << a << std::endl;
	a--;
	std::cout << "valoarea lui a dupa aplicarea operatorului -- (decrement) este" << a << std::endl;
	//a + b <=> sum(a,b)


	std::cout << "2 la a treia=" << pow(2, 3) << std::endl;


	std::cout << "10 la a 7=" << pow(10, 7) << std::endl;


	std::cout << " 10 % 3 = " << 10 % 3 << std::endl;
	std::cout << " 20 % 17 = " << 20 % 17 << "\n";
	std::cout << " 100 % 10 = " << 100 % 10 << std::endl;
	std::cout << " 99 % 5 = " << 99 % 5 << "\n";


	std::cout << " nondeterministic(5) = " << nondeterministic(5) << "\n";
	std::cout << " nondeterministic(5) = " << nondeterministic(5) << std::endl;
	std::cout << " nondeterministic(5) = " << nondeterministic(5) << "\n";
	std::cout << " nondeterministic(5) = " << nondeterministic(5) << std::endl;
	std::cout << " nondeterministic(5) = " << nondeterministic(5) << "\n";
	std::cout << " nondeterministic(5) = " << nondeterministic(5) << std::endl;
}
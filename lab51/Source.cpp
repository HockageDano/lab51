#include <iostream>
#include <cmath>
using namespace std;
double g (const double a, const double b); 
int main()
{
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = (g(2, s) + pow((1 + g(t, 1) * g(t, 1)), 3)) / sqrt(1 + g(s, t) * g(s, t));
	cout << "c = " << c << endl;
	return 0;
}
double g(const double a, const double b) 
{
	return (a*b)/((a*a)*(b*b));
}


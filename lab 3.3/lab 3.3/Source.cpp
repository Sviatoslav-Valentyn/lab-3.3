// Lab_03_3.cpp
// ������� ��������� - ��������
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 6
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x <= -5)
		y = -3;
	else
		if (-5 < x && x <= -R)
			y =(3 * (R + x)) / (5 - R) ;
		else
			if (-R < x && x <= R)
				y = sqrt(pow(R, 2)-pow(x, 2)); 
			else
				if (R < x && x <= 8)
					y = (R * (x - R)) / (8 - R);
				else
					if (x < 8)
					y = R;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}
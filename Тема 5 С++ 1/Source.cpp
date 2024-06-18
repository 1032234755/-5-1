#include <iostream>
#include <vector>
#include <cmath>
#include "spline.h" // ���������� ���������� ��� ��������, ��������, splines.h

using namespace std;

int main() {
    vector<double> xi = { 0.0, 1.0, 2.0, 3.0, 4.0 };
    vector<double> yi = { 0.0, 0.5, 0.86603, 1.0, 0.86603 };

    tk::spline s;
    s.set_points(xi, yi, tk::spline::cspline); // cspline ��� ����������� �������

    double x_star = 1.5;
    double y_star = s(x_star);

    cout << "�������� ������� � ����� x* = " << x_star << ": " << y_star << endl;

    return 0;
}

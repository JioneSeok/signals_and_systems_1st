#include <iostream> // c++�� ������� ����
#include <fstream> // file�� �а� ���� ����
#include <cmath> // cosine ���� ������ ����ϱ� ����

using namespace std;

const double PI = 3.141592653589793238462643383279502884197; // pi�� �� ����

// x1(t) = 2 �׷����� ���� �Լ� ��
double x1() {
	double aa = 2;
	return aa;
}

// x2(t) = 2 * cos((30 * PI * tt) - (0.2 * PI))�� ���� �Լ� ��
double x2(double tt) {
	double bb = 2 * cos((30 * PI * tt) - (0.2 * PI));
	return bb;
}

// x3(t) = 4 * cos((30 * PI * tt) - (0.25 * PI))�� ���� �Լ� ��
double x3(double tt) {
	double cc = 4 * cos((30 * PI * tt) - (0.25 * PI));
	return cc;
}

// x4(t) = 3 * cos((30 * PI * tt) - (0.4 * PI))�� ���� �Լ� ��
double x4(double tt) {
	double dd = 3 * cos((30 * PI * tt) - (0.4 * PI));
	return dd;
}

int main() {

	// x�� ���� time�� y�� ���� cosine �׷����� ���� value�� �����ϴ� file ����
	ofstream out_time;
	ofstream out_value;
	out_time.open("cosine_signal_time.txt");
	out_value.open("cosine_signal_value.txt");

	double freq, sample_freq, t, dt; //double�� ���ļ�, ���� ���ļ�, �ð�, �ð� ��ȭ�� ����

	t = 0;
	freq = 440;

	cout << "sample frequency : "; // sample frequency�� ���� �Է� �ؾ����� �˷��ֱ� ���� ���
	cin >> sample_freq; // ����ڰ� ���ϴ� sample frequency�� �Է� ����

	dt = 1.0 / sample_freq;

	for (int i = 0; i < 30; i++, t += dt) {
		out_time << t << endl; // x�� value�� time
		out_value << x1() + x2(t) + x3(t) + x4(t) << endl; // y�� value�� 4���� ��ȣ�� ��ģ �ϳ��� ��ȣ
	}

	// ������ file���� �ݴ´�.
	out_time.close();
	out_time.close();

}
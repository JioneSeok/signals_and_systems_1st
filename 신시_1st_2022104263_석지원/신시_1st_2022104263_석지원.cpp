#include <iostream> // c++의 입출력을 위함
#include <fstream> // file을 읽고 쓰기 위함
#include <cmath> // cosine 등의 수학을 사용하기 위함

using namespace std;

const double PI = 3.141592653589793238462643383279502884197; // pi의 값 정의

// x1(t) = 2 그래프에 대한 함수 값
double x1() {
	double aa = 2;
	return aa;
}

// x2(t) = 2 * cos((30 * PI * tt) - (0.2 * PI))에 대한 함수 값
double x2(double tt) {
	double bb = 2 * cos((30 * PI * tt) - (0.2 * PI));
	return bb;
}

// x3(t) = 4 * cos((30 * PI * tt) - (0.25 * PI))에 대한 함수 값
double x3(double tt) {
	double cc = 4 * cos((30 * PI * tt) - (0.25 * PI));
	return cc;
}

// x4(t) = 3 * cos((30 * PI * tt) - (0.4 * PI))에 대한 함수 값
double x4(double tt) {
	double dd = 3 * cos((30 * PI * tt) - (0.4 * PI));
	return dd;
}

int main() {

	// x축 값인 time과 y축 값인 cosine 그래프에 대한 value를 저장하는 file 생성
	ofstream out_time;
	ofstream out_value;
	out_time.open("cosine_signal_time.txt");
	out_value.open("cosine_signal_value.txt");

	double freq, sample_freq, t, dt; //double로 주파수, 샘플 주파수, 시간, 시간 변화율 선언

	t = 0;
	freq = 440;

	cout << "sample frequency : "; // sample frequency의 값을 입력 해야함을 알려주기 위해 출력
	cin >> sample_freq; // 사용자가 원하는 sample frequency를 입력 받음

	dt = 1.0 / sample_freq;

	for (int i = 0; i < 30; i++, t += dt) {
		out_time << t << endl; // x축 value인 time
		out_value << x1() + x2(t) + x3(t) + x4(t) << endl; // y축 value인 4개의 신호를 합친 하나의 신호
	}

	// 열었던 file들을 닫는다.
	out_time.close();
	out_time.close();

}
#include<iostream>
#include"Counter.h"
using namespace std;

int main() {
	Counter cnt; //Counter 객체의 정의
	cnt.reset();
	cout << "계수기의 현재 값: " << cnt.getValue()<< endl;
	cnt.count(); //계수기를 1만큼 증가시킴
	cnt.count();  //계수기를 1만큼 증가시킴

	cout << "계수기의 현재 값: " << cnt.getValue() << endl;
	return 0;
}
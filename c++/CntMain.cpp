#include<iostream>
#include"Counter.h"
using namespace std;

int main() {
	Counter cnt; //Counter ��ü�� ����
	cnt.reset();
	cout << "������� ���� ��: " << cnt.getValue()<< endl;
	cnt.count(); //����⸦ 1��ŭ ������Ŵ
	cnt.count();  //����⸦ 1��ŭ ������Ŵ

	cout << "������� ���� ��: " << cnt.getValue() << endl;
	return 0;
}
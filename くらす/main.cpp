# include "class.h"

student::student(int kokugo, int sansuu, int eigo)
	: japanese(kokugo), math(sansuu), english(eigo)
{
	
}

void student::allsub() {
	cout << japanese << endl;
	cout << math << endl;
	cout << english << endl;
}

void student::sum(){
	cout << "sum=";
	cout << japanese + math + english << endl;
}

void student::avg(){
	cout << "avg=";
	cout << (japanese + math + english) / 3 << endl;
}

int main() {
	stu.pushback();

	stu.allsub();

	stu.sum();

	stu.avg();

	return 0;
}
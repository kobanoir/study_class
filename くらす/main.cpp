# include "class.h"

Student::Student(int kokugo, int sansuu, int eigo)
	: japanese(kokugo), math(sansuu), english(eigo)
{}

void Student::allsub() {
	cout << japanese << endl;
	cout << math << endl;
	cout << english << endl;
}

void Student::sum(){
	cout << "sum=";
	cout << japanese + math + english << endl;
}

void Student::avg(){
	cout << "avg=";
	cout << (japanese + math + english) / 3 << endl;
}

void Student::set_japanese(int number){
	this -> japanese = number;
}

void Student::set_math(int number){
	this -> math = number;
}

void Student::set_english(int number){
	this -> english = number;
}

void Teacher::add(Student stu){
	students.push_back(stu);
}

void Teacher::print(){
	for(int i = 0;i < students.size();i++){
		students[i].allsub();
		students[i].avg();
		students[i].sum();
		cout << endl;
	}
}

void Teacher::disguise(int i){
	int state;
	int stu_number;
	cout << "chose disguise langage. japanese.1 math.2 english.3:";
	cin >> state;
	cout << "Please type disguise point. :";
	cin >> stu_number;
	if(state == 1){
		students[i].set_japanese(stu_number);
	}
	else if(state == 2){
		students[i].set_math(stu_number);
	}
	else if(state == 3){
		students[i].set_english(stu_number);
	}
}
int main() {
	Teacher t;

	Student stu(100,80,59);

	t.add(Student(100,100,100));
	t.add(stu);

	for(int i = 0;i < 10;i++){
		t.add(Student(i,i,i));
	}

	t.print();

	t.disguise(0);

	t.print();

	return 0;
}
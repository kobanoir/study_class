#pragma once
# include <iostream>
# include <vector>
using namespace std;

class Student{
public:
	Student(int japanese, int math, int english);

	//各教科の点数の表示
	void allsub();
	//合計点を表示するやつ
	void sum();
	//平均を表示するやつ
	void avg();

	void set_japanese();
	void set_math();
	void set_english();
private:
	int japanese;
	int math;
	int english;
};

class Teacher {
public:
	void add(Student stu);
	void print();
	void disguise(int i);
private:
	vector<Student> students;
};
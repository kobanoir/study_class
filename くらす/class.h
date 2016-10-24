#pragma once
# include <iostream>
# include <vector>
using namespace std;

class student{
public:
	student(int japanese, int math, int english);

	//各教科の点数の表示
	void allsub();
	//合計点を表示するやつ
	void sum();
	//平均を表示するやつ
	void avg();
private:
	int japanese;
	int math;
	int english;
};

class teacher {
public:
	
private:
	vector<student> stu;
};
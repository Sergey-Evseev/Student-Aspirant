//Lesson 11. Task 1. �������� ����� Student, ������� ����� ��������� ���������� � ��������. � ������� ��������� ������������,
//���������� ����� Aspirant(�������� � �������, ������� ��������� � ������ ������������ ������) ����������� �� Student.

#include <iostream>
#include <string>
using namespace std;

class Student {//������������ �����
protected:
	int age;
	int course;
public:
	Student(int age, int course) {//����������� ���.������ � �����������
		this->age = age;
		this->course = course;
	}
	//������ ��������
	int& GetAge() {
		return age;
	}
	//������ �����
	int& GetCourse() {
		return course;
	}
};
class Aspirant : public Student {//����������� �� Student
	string Major;//�������������
	bool PaidTuition; //������� �� ��������


public:
	Aspirant(string M, bool P, int age, int course) :Student(age, course) {//������� ���������� ����������� Student � ��������� 2 ���������
		Major = M;                              //��� �������� � ��������� ������-���������� (��� ��������� ������������ ������������ ���.������)  
		PaidTuition = P;
	}
	string& GetMajor() {//������ �������������
		return Major;
	}
	bool& GetPaidTuition() {//������ �������� �����������
		return PaidTuition;
	}
	//��������� ��������
	void ChangeAge(int years) {
		age = years;
	}
	void ChangeCourse(int year) {
		course += year;
	}
	//����� �� �����
	void Show() {
		cout << "--------------" << endl;
		cout << "Age = " << age << "\n\n";  //���������� ���.������
		cout << "Course = " << course << "\n\n"; //���������� ���.������
		cout << "Major = " << Major << "\n\n";
		cout << "Paid Tuition = " << PaidTuition << "\n\n";
		cout << "--------------\n\n";
	}
};
void main() {
	//�������� �������
	Aspirant Andrew("Industrial Design", false, 25, 6);
	Andrew.Show();

	cout << "Aspirant Age: " << Andrew.GetAge() << endl;
	cout << "Asporant Course: " << Andrew.GetCourse() << endl;
	cout << "Aspirant Major: " << Andrew.GetMajor() << endl;
	cout << "Aspirant Paid Tuition: " << Andrew.GetPaidTuition() << endl;
}

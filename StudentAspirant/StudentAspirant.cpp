//Lesson 11. Task 1. —оздайте класс Student, который будет содержать информацию о студенте. — помощью механизма наследовани€,
//реализуйте класс Aspirant(аспирант Ч студент, который готовитс€ к защите кандидатской работы) производный от Student.

#include <iostream>
#include <string>
using namespace std;

class Student {//родительский класс
protected:
	int age;
	int course;
public:
	Student(int age, int course) {//конструктор род.класса с параметрами
		this->age = age;
		this->course = course;
	}
	//геттер возраста
	int& GetAge() {
		return age;
	}
	//геттер курса
	int& GetCourse() {
		return course;
	}
};
class Aspirant : public Student {//наследуетс€ от Student
	string Major;//специализаци€
	bool PaidTuition; //платное ли обучение


public:
	Aspirant(string M, bool P, int age, int course) :Student(age, course) {//сначала вызываетс€ конструктор Student и принимает 2 параметра
		Major = M;                              //дл€ передачи в экземпл€р класса-наследника (два параметра делегируетс€ конструктору род.класса)  
		PaidTuition = P;
	}
	string& GetMajor() {//геттер специализации
		return Major;
	}
	bool& GetPaidTuition() {//геттер платного образовани€
		return PaidTuition;
	}
	//изменение возраста
	void ChangeAge(int years) {
		age = years;
	}
	void ChangeCourse(int year) {
		course += year;
	}
	//показ на экран
	void Show() {
		cout << "--------------" << endl;
		cout << "Age = " << age << "\n\n";  //переменна€ род.класса
		cout << "Course = " << course << "\n\n"; //переменна€ род.класса
		cout << "Major = " << Major << "\n\n";
		cout << "Paid Tuition = " << PaidTuition << "\n\n";
		cout << "--------------\n\n";
	}
};
void main() {
	//создание объекта
	Aspirant Andrew("Industrial Design", false, 25, 6);
	Andrew.Show();

	cout << "Aspirant Age: " << Andrew.GetAge() << endl;
	cout << "Asporant Course: " << Andrew.GetCourse() << endl;
	cout << "Aspirant Major: " << Andrew.GetMajor() << endl;
	cout << "Aspirant Paid Tuition: " << Andrew.GetPaidTuition() << endl;
}

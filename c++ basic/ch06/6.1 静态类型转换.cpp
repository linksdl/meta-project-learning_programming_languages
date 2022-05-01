#include <iostream>
using namespace std;

class Animal {};
class Dog : public Animal {};
class Other {};


// 基本数据类型的转换
void test01() {
	char a = 'a';
	double b = static_cast<double>(a);
	cout << b << endl;

	double d = 3.14;
	int i = static_cast<int>(d);
	cout << i << endl;
}

// 继承关系指针互转
void test02() {
	Animal* animal = nullptr;	// new Cat();
	Dog* dog = nullptr;

	// 子类的指针转换成父类的指针（安全）
	Animal* animal1 = static_cast<Animal*>(dog);
	// 父类的指针转换成子类的指针（不安全）
	Dog* dog1 = static_cast<Dog*>(animal);

}

// 继承关系引用互转
void test03() {

	Animal animal;
	Dog dog;
	
	Animal& ref_ani = animal;
	Dog& ref_dog = dog;

	// 子类的引用转成父类的引用（安全）
	Animal & ref_ani1 = static_cast<Animal&>(ref_dog);
	// 父类的引用转成子类的引用（不安全）
	Dog& ref_dog1 = static_cast<Dog&>(ref_ani);

}

// 没有关系的指针转换
void test04() {
	Animal* animal = nullptr;
	Other* other = nullptr;

	// static_cast<Animal*>(other);	// 类型转换无效
}

// 静态转换 static_cast   语法：static_cast <typename> (expression)
int main() {

	// test01();
	// test02();
	test03();

	return 0;
}
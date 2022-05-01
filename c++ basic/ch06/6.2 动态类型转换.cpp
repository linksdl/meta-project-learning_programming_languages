#include <iostream>
using namespace std;

class Animal {
	virtual void eat() {}
};

class Dog : public Animal {
	virtual void eat() {
		cout << "吃狗粮" << endl;
	}
};

class Other {};

// 基本数据类型的转换
void test01() {

	int a = 10;
	// 动态转换不支持基本数据类型的转换，必须是指向完整的类类型的指针或者引用
	// dynamic_cast<double>(a);

}

// 继承关系指针转换
void test02() {

	Animal* animal = new Animal;
	Dog* dog = new Dog;

	// 子类的指针转换成父类的指针   可以，安全
	Animal * animal1 = dynamic_cast<Animal*>(dog);

	// 父类的指针转换成子类的指针   不可以
	// dynamic_cast<Dog*>(animal);

	// 如果产生多态，则可以进行向下转型
	Animal* animal2 = new Dog;
	dynamic_cast<Dog*>(animal2);
}

// 继承关系引用的转换
void test03() {
	Dog dog;
	Dog& ref_dog = dog;	// dog的引用

	Animal animal;
	Animal& ref_animal = animal;

	// 子类的引用转换成父类的引用  可以
	dynamic_cast<Animal&> (ref_dog);

	// 父类的引用转换成子类的引用
	dynamic_cast<Dog&> (ref_animal);

}

// 没有继承关系 指针转换
void test04() {
	Animal* animal = nullptr;
	Other* other = nullptr;
	// dynamic_cast<Animal*>(other);
}


// 动态转换 dynamic_cast  用于类层次间的上行转换和下行转换
int main() {



	return 0;
}
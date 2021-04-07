#include<iostream>
<<<<<<< HEAD
using namespace std;

int main(int argc, char** argv){
	cout<< "Hallo Welt" << endl;
=======
#include<string>

int main(){
	enum languages {german, english, french};
	std::string greetings[3] = {"Hallo Welt!","Hello world!","Salut monde!"};
	languages lang = french;
	std::cout << greetings[lang] << std::endl;
>>>>>>> languages
	return 0;
}

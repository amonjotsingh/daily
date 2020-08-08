#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

class mystring{
	char *str;
public:
mystring();
mystring(const char *s);
mystring(const mystring &source);
~mystring();
void display() const;
int get_length() const;
const char *getstr() const;
mystring &operator=(const mystring &source);
};

mystring &mystring::operator=(const mystring &source ){
	cout<<"overloading copy is called"<<endl;
	if(this==&source)
		return *this;
	delete[] str;
		str= new char[strlen(source.str)+1];
	strcpy(str,source.str);
	return *this;
}
mystring::mystring()
:str{nullptr}{
	str= new char[1];
	*str='\0';
}
mystring::mystring(const char *s)
:str{nullptr}{
	if(s==nullptr){
		str=new char[1];
		*str='\0';
	}
	else{
		str = new char[strlen(s)+1];
		strcpy(str,s);
	}
}
mystring::mystring(const mystring &source)
:str{nullptr}{
	str= new char[strlen(source.str)+1];
	strcpy(str,source.str);

}
mystring::~mystring(){
	delete[] str;
}
void mystring::display() const{
	cout<<str<<":"<<get_length()<<endl;
}
int mystring::get_length() const {return strlen(str);}
const char *mystring::getstr()const{return str;}
int main()
{
	mystring ak("akash");
	mystring akk;
	akk=ak;
	ak.display();
	akk.display();
	return 0;
}

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
	const string s1 = "Hello";
	const string s2 = "World";
	string s3 = s1 + s2;
	cout << s3 << endl;
	
	s3 = "";
	s3 += s2;
	cout << s3 + "\n";
	s3 += s1;
	cout << s3 << endl;
	//s3++;	//fail
	//s3--;	//fail
	//s3 -= s1;	//fail
	//s3 = 5 * s1; //fail
	//s3 *= 5;	//fail
	
	cout << (s1 < s2 ? "s1<" : "s2<") << endl;
	cout << (s1 < "" ? "s1<" : "null<") << endl;
	
	cout << "0th char is " << s1[0] << endl;
	cout << "4th char is " << s1[4] << endl;
	cout << "5th char is " << s1[5] << endl;
	cout << "6th char is " << s1[6] << endl;
	cout << "-1th char is " << s1[-1] << endl;
	cout << "-2th char is " << s1[-2] << endl;
	
	cout << s1.size() << endl;
	cout << s1.length() << endl;
	
	return 0;
}
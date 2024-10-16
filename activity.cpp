/*
 * activity.cpp
 *
 *  Created on: Jun 15, 2022
 *      Author: dinad
 */

#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include "Date.hpp"
using namespace std;

////part 2
//int main(){
////q1
//	int k = 4; //address is 0x333311
//	int *tmp; //address of tmp is 0x333322
//	tmp = &k;
//
//	cout << tmp << endl;
//
////q2
//	cout << *tmp << endl;
//
////q3
//	k=8;
//	cout << *tmp << endl;
//
////q4
//	*tmp = 21;
//	cout << k<< endl;
//
////q5
//	int *tmp2; //address of tmp2 is 0x333333
//		tmp2 = tmp;
//		int j = 10; //address is 0x333344
//		tmp = &j;
//
//		cout << *tmp2 << endl;
//}
//
////part 4
//void func1(char *i, char &j, char k);
//
//int main(){
//	char a = 'h';
//	char b = 't';
//	char c = 'x';
//	char d = 'w';
//	char f = 'i';
//	cout << b << d << f << c << endl;
//	func1(&c,d,f);
//	cout << d << f << b << d << c << b << endl;
//	return(0);
//}
//
//void func1(char *i, char &j, char k){
//	*i = 'a';
//	j = 'k';
//	k = 'u';
//}

////part 5
//void func2(string *arr);
//
//int main() {
//	string a[5] = {"c","a","n","d","y"};
//	string s1 = "";
//	for (int i = 0; i < 5; i++) {
//		s1+= a[i];
//	}
//	cout << s1 << endl;
//	func2(a);
//	string s2 = "";
//	for (int i = 0; i < 5; i++) {
//		s2+=a[i];
//	}
//	cout << s2 << endl;
//	return(0);
//}
//
//void func2(string *arr) {
//	arr[3] = "t";
//	arr[2] = "vi";
//}

////part 6
//class food{
//public:
//string fname;
//};
//
//void changefood(food x) {
//	x.fname = "hot dog";
//}
//
//int main() {
//food h1;
//h1.fname = "nachos";
//changefood(h1);
//cout << h1.fname << endl;
//return 0;
//}

////part 7
//class Rect {
//	int len;
//	int width;
//	int area;
//public:
//	Rect(int x,int y);
//	Rect();
//	Rect operator+(int z);
//	int getArea();
//};
//
//Rect::Rect(int x, int y) {
//	len = x;
//	width = y;
//	area = x*y;
//}
//
//Rect::Rect() {
//	len = 0;
//	width = 0;
//	area = 0;
//}
//
//int Rect::getArea() {
//	return area;
//}
//
//
//Rect Rect::operator+(int z) {
//	Rect r;
//		r.len = len - z;
//		r.width = width - z;
//
//		if ((r.len > 0) && (r.width > 0)) {
//			r.area = r.len * r.width;
//		}
//		else {
//			r.area = 0;
//		}
//		return r;
//}
//
//int main() {
//	Rect rect1(4,6);
//	cout << rect1.getArea() << endl;
//	Rect rect2 = rect1 + 3;
//	cout << rect2.getArea() << endl;
//	return(0);
//}

//part 8
//void func2(char a[], string *s);
//string func(char arr[], int iarr[], int len);
//
//int main() {
//	char arr[9] = {'l','e','r','t','o','b','o','n','e'};
//	int iarr[4] = {3,0,6};
//	string s = func(arr,iarr,3);
//	cout << s << endl;
//	return 0;
//}
//
//void func2(char a[], string *s) {
//	for (int i = 0; i<3; i++) {
//		*s += string(1, a[i]); //converts type (char to string)
//	}
//}
//
//string func(char arr[], int iarr[], int len) {
//	string *k = new string;
//	*k = ""; // makes blank string
//	for (int i = 0; i < len; i++) {
//		func2(&arr[iarr[i]], k);
//	}
//	return *k;
//}


////part 9
//int fa(int k[]) {
//	int a = 0;
//	for (int i = 0; i < 4; i++) {
//		a += k[i];
//	}
//	return a;
//}
//
//int main() {
//	int x[8] = {3,2,7,1,5,4,3,9};
//	int y = fa(&x[3]);
//	cout << y << endl;
//}

////part 10
//char * letterfunc2(int *size);
//char arr[] = {'l','a','t','t','e'};
//
//int main() {
//	int len = 0;
//	char *letters = letterfunc2(&len);
//	for (int i = 0; i < len; i++ ) {
//		cout << letters[i];
//	}
//	cout << endl;
//	return 0;
//}
//
//char *letterfunc2(int *size) {
//	*size = 5;
//
//return arr;
//}


/////////////////////MIDTERM///////////////////////::

//problem 2:

//void changeChars(char &x, char *y,char z){
//	x = 's';
//	*y = 'a';
//	z = 't';
//}

//problem 7:

////definition
//void func1(int *x, int*y){
//	*y = 0;
//	for(int i=0; i<3; i++){
//		*y+=x[i];
//	}
//	*y/=3;
//}
//
//int *func2(int *a, int &c){
//	int *b = new int[c/3];
//	int j=0;
//	for(int i=0; i<c-2; i+=3){
//		int k =0;
//		func1(&a[i], &k);
//		b[j]=k;
//		j++;
//	}
//	c=j;
//	return b;
//}
//
////calling
//void func1(int *x, int *y);
//int *func2(int *a, int &c);

//problem 4:

//class Date{
//	string month;
//	int day;
//	int year;
//
//public:
//	Date(string m, int d, int y);
//};
//
//Date::Date(string m, int d, int y){
//	month = m;
//	day = d;
//	year = y;
//}
//
//void func2(Date d);
//
//void func2(Date d){
//	d.month = "October";
//}


//extra credit prob:

//void f4(char ***k, int *x, int*y, string s){
//	*x=5;
//	*y=5;
//	*(k)= new char* [*x];
//	for(int i=0; i<*x; i++){
//		(*k)[i] = new char[*y];
//		for(int j=0; j<*y; j++){
//			(*k)[i][j]=s[*x*i+j];
//		}
//	}
//}
//
//void print(char **k, int x, int y){
//	for(int i=0; i<x; i++){
//		for(int j=0; j<y; j++){
//			if(i==j+1){
//				cout<<k[i][j];
//			}
//		}
//	}
//	cout<<endl;
//}


int main(){

//problem 1:

//	int k = 4; //address is 0x333311
//	int *tmp; //address of tmp is 0x333322
//	tmp = &k;
//
//	cout << tmp << endl;
//	cout << *tmp << endl;
////
//	*tmp = 2;
//	cout << tmp << endl;
//	cout <<k<< endl;
//	cout <<&k<< endl;
////
//	int *tmp2;
//	tmp2 = tmp;
//	*tmp2 = 6;
//
//	cout<<tmp2<<endl;
//	cout<<*tmp<<endl;
//	cout<<k<<endl;
////
//	int*tmp4;
//	int tmp5[4] = {1,2,3,4};
//	tmp4=&tmp5[0];
//	cout<<tmp4<<endl;
//	tmp4[2]+=2;
//	cout<<tmp5[2]<<endl;
//	cout<<tmp5<<endl;


//problem 2:

//	char c1 = 'k';
//	char c2 = 'e';
//	char c3 = 'y';
//	cout << c1 << c2 << c3 << endl; // PRINTS KEY
//	changeChars(c1, &c2, c3);
//	cout << c1 << c2 << c3<< endl;

//problem 7:

//	int y = 12;
//	int *arr= new int[y]{1,3,2,0,1,2,6,5,7,4,3,5};
//	arr = func2(arr,y);
//	for(int i = 0; i<y; i++){
//		cout<<arr[i]<<", ";
//	}
//	cout<<endl;
//	return 0;

//problem 4:

//	Date d("September", 30, 2018);
//	func2(d);
//	cout<<d.month;
//	return 0;

//extra credit prob:

	//	string s = "cgeidwjklmaoqrkuvrxypbcmeghijsmnopqursuvwxyzabcd";
//	int x=-1;
//	int y = -1;
//	char **cc = NULL;
//	f4(&cc,&x,&y,s);
//	print(cc,x,y);
}


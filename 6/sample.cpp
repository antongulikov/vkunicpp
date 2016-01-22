#include <bits/stdc++.h> 

using namespace std;

void create() {
  string s0;
  cin >> s0;
  // пустая сттрока
  string s1;
  // строка равная s0
  string s2 (s0);
  // пропускаем первые 5 символов из s0, а потом либо 3 либо меньше, если 3 не сможем взять
  string s3 (s0, 5, 3);
  // отрубим от строки все символы после первых 6
  string s4 ("A character sequence", 6);
  // создаим строку от строки
  string s5 ("Another character sequence");
  // копируем 10 раз символ
  string s6a (10, 'x');
  // вспомним что симовлы могут быть закированы числами от 0 до 255, пожтому можем передавать не симвл а его код
  string s6b (10, 42);  
  cout << s1 << endl << s2 << endl << s3 << endl << s4 << endl << s5 << endl << s6a << "\n" << s6b << endl << endl;
}

void operation() {
	string a,b,c;
	cout << "enter a, b, c:\n";
	cin >> a >> b >> c;
	// конкатенация строк
	string d = a + b;
	string e = c;
	e += d;
	cout << d << endl;
	cout << e << endl;
}

void funciton() {
	string a;
	cin >> a;
	// вычисление длины строки
	int n = a.size();
	int m = a.length();
	cout << n << " " << m << endl;	
	// проверка на пустоту
	if (a.empty()) {
		cout << "Empty\n";
	} else
	{
		cout << "Not an empty!\n";
	}
	// делаем строку пустой
	a.clear();
	if (a.size() == 0) {
		cout << "Empty\n";
	} else {
		cout << "Not an empty!\n";
	}
}

void getset() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		// доступ к i-ому элементу
		cout << s[i] << " " << s.at(i) << "\n";
	}
	string b;
	getline(cin, b);
	cout << b << endl;
	// доступ к первому элементу
	cout << b.front();
	// доступ к последнему элементу
	cout << b.back();
}

void add_symbol() {
	string a;
	cin >> a;
	// добаивили СИМВОЛ!!! "a" - строка, 'a' - символ!!
	// "a" - string, 'a' - char!
	a.push_back('a');
	cout << a << endl;
	// удалил последний символ добавили только в c++11.
	a.pop_back();
	cout << a << endl;

	// insert

  string str="to be question";
  string str2="the ";
  string str3="or not to be";  
  
  str.insert(6,str2);                 // to be (the )question
  str.insert(6,str3,3,4);             // to be (not )the question
  str.insert(10,"that is cool",8);    // to be not (that is )the question
  str.insert(10,"to be ");            // to be not (to be )that is the question
  str.insert(15,5,':');               // to be not to be(:::::) that is the question

  // erase
  cout << str;
  int pos = 4;
  int len = 4;
  // удаляем с позиции pos len символов.
  str.erase(pos, len);
  cout << str << endl;
}

void lower_case() {
	string a;
	cin >> a;
	char ch = a[0];
	if ('a' <= ch && ch <= 'z') {
		char new_char = (ch - 'a') + 'A';		
		a[0] = new_char;
	} else
		if ('A' <= ch && ch <= 'Z'){
			char new_char = (ch - 'A') + 'a';
			a[0] = new_char;
		}
	cout << a << endl;
}

int main() {
	create();
	operation();
	funciton();
	getset();
	add_symbol();
	lower_case();
	// Для большей информации прошу сюда 
	// http://www.cplusplus.com/reference/string/string/
}
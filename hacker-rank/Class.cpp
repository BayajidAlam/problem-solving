
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  int age, standard;
  string first_name, last_name;

  void set_age(int age)
  {
    this->age = age;
  }
  int get_age()
  {
    return age;
  }
  void set_first_name(string first_name)
  {
    this->first_name = first_name;
  }
  string get_first_name()
  {
    return first_name;
  }
  void set_last_name(string last_name)
  {
    this->last_name = last_name;
  }
  string get_last_name()
  {
    return last_name;
  }
  void set_standard(int standard)
  {
    this->standard = standard;
  }
  int get_standard()
  {
    return standard;
  }

  string to_string()
  {
    stringstream ss;
    ss << age << "," << first_name << "," << last_name << "," << standard;
    return ss.str();
  }
};

int main()
{
  Student student;
  int a;
  cin >> a;
  student.set_age(a);

  string fr_name;
  cin >> fr_name;
  student.set_first_name(fr_name);

  string lt_name;
  cin >> lt_name;
  student.set_last_name(lt_name);

  int st;
  cin >> st;
  student.set_standard(st);


  cout << student.get_age() << endl;
  cout <<  student.get_last_name()<< ", " << student.get_first_name() << endl;
  cout << student.get_standard() << endl << endl;

  cout << student.to_string(); 
  
  return 0;
}

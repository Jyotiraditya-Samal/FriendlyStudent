#include <iostream>

using namespace std;

class test{};
/**************************************************
Student Class
**************************************************/
class student
{
    string name;
    int rollNo;
    int age;
    public:
    
void getDetails()
{
  cout<<  "\n |------------------------------|" ;
  cout<<  "\n |        STUDENT INPUT         |  <-input started..." ;
  cout<<  "\n |------------------------------|" ;
  cout<<  "\n | Name      : ";  getline(cin,name);
  cout<<" |\n | Roll No   : ";  cin>>rollNo;
  cout<<" |\n | Age       : ";  cin>>age;
  cout<<    " |------------------------------|" ;
}
void showDetails()
{
  cout<<    "\n |------------------------------|" ;
  cout<<    "\n |           STUDENT            |" ;
  cout<<    "\n |------------------------------|" ;
  cout<<    "\n | Name      : ";  cout<<name;
  cout<<"\n |\n | Roll No   : ";  cout<<rollNo;
  cout<<"\n |\n | Age       : ";  cout<<age;
  cout<<    "\n |------------------------------|" ;    
}
/**************************************************
Declared test as friend class
**************************************************/
  friend class test;
};
class Test
{
    student Student;
    int mark[5];
    public:
void getDetails()
{
  Student.getDetails();
  cout<<  "\n |------------------------------|" ;
  cout<<  "\n |          MARKS INPUT         |" ;
  cout<<  "\n |------------------------------|" ;
  cout<<  "\n | Mark[0]      : ";  cin>>mark[0];
  cout<<" |\n | Mark[1]      : ";  cin>>mark[1];
  cout<<" |\n | Mark[2]      : ";  cin>>mark[2];
  cout<<" |\n | Mark[3]      : ";  cin>>mark[3];
  cout<<" |\n | Mark[4]      : ";  cin>>mark[4];
  cout<<    " |------------------------------|  <-input terminated..." ;
}
void showDetails()
{
    cout<<"\n\n\n |------------------------------|" ;
    cout<<    "\n |          TEST RESULT         |  <-output" ;
                        Student.showDetails();
                /*|------------------------------|*/            
    cout<<    "\n |------------------------------|" ;
    cout<<    "\n |             MARKS            |" ;
    cout<<    "\n |------------------------------|" ;
    cout<<    "\n | Mark[0]      : ";  cout<<mark[0]<<endl;
    cout<<  " |\n | Mark[1]      : ";  cout<<mark[1]<<endl;
    cout<<  " |\n | Mark[2]      : ";  cout<<mark[2]<<endl;
    cout<<  " |\n | Mark[3]      : ";  cout<<mark[3]<<endl;
    cout<<  " |\n | Mark[4]      : ";  cout<<mark[4]<<endl;
    cout<<      " |------------------------------|" ;

    
}

};

int main()
{
    Test adi;
    adi.getDetails();
    adi.showDetails();
    return 0;
}
#include <iostream>
#include <stdio.h>

using namespace std;

class test{};
/**************************************************
Student Class 
**************************************************/
class Student
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
/**************************************************
Test class 
**************************************************/
class Test
{
    Student student;
    int mark[5];
    public:
void getDetails()
{
  student.getDetails();
  cout<<  "\n |------------------------------|" ;
  cout<<  "\n |          MARKS INPUT         |" ;
  cout<<  "\n |------------------------------|" ;
  cout<<  "\n | Mark[0]      : ";  cin>>mark[0];
  cout<<" |\n | Mark[1]      : ";  cin>>mark[1];
  cout<<" |\n | Mark[2]      : ";  cin>>mark[2];
  cout<<" |\n | Mark[3]      : ";  cin>>mark[3];
  cout<<" |\n | Mark[4]      : ";  cin>>mark[4];
  cout<<    " |------------------------------|  <-input terminated...\n\n" ;
}
void showDetails()
{
    cout<<"\n\n\n |------------------------------|" ;
    cout<<    "\n |           TEST INFO          |  <-output" ;
                        student.showDetails();
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
friend class Result;
};

/**************************************************
Result class 
**************************************************/
class Result
{
Test dataset;
float percentage;
int totMarks;
public:
void getDetails()
{
  dataset.getDetails();
}
void showDetails()
{
  dataset.showDetails();
}
void showResult()
{
  for(int subject = 0;subject<5;subject++)
  {
    totMarks+=dataset.mark[subject];
  }
  percentage = (totMarks*100)/500;
    cout<<    "\n |------------------------------|" ;
    cout<<    "\n |            RESULT            |" ;
    cout<<    "\n |------------------------------|" ;
    cout<<    "\n | Total Marks      : ";  cout<<totMarks<<"/500"<<endl;
    cout<<  " |\n | Percentage       : ";  cout<<percentage<<"%"<<endl;
    cout<<      " |------------------------------|" ;
}
};

int main()
{
  Result adi;
  
  printf("\033[0;32m"); //switch color to green
    
  adi.getDetails();
    
  printf("\033[1;33m");  //switch color to yellow
    
  adi.showDetails();
  adi.showResult();
    return 0;
}
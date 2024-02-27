#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "what is your name"<< endl;
    cin >>name;
    cout << "hello" << name << endl;

     string x;
     cout << " what is your student id:" <<endl;
     cin >> x;
     cout <<" your id is:" << x << endl;


     int var1;
     cout<<"what is var1" << endl;
     cin >> var1;
     int var2;
     cout<<"what is var2" << endl;
     cin >> var2;

     int sum;
     sum = var1+var2;
     cout << "sum:"<<sum << endl;
     int prod;
     prod = var1*var2;
     cout <<"prod:"<< prod << endl;
     int diff;
     diff = var1-var2;
     cout <<"diff:"<<diff << endl;

     string name2;
     cout<<"what is your name :"<<endl;
     cin >> name2;

     double lab;
     cout <<"what is your lab grade:"<< endl;
     cin >> lab;

     double midterm;
     cout <<"what is your midterm:"<< endl;
     cin >> midterm;

     int final;
     cout <<"what is your final grade:"<< endl;
     cin >> final;

     double last_score;
     last_score= (lab/4)+(midterm*35/100)+(final*40/100);
     cout<<"your name :"<<name2<<endl;
     cout<<"your lab :"<<lab<<endl;
     cout<<"your midterm :"<<midterm<<endl;
     cout<<"your final :"<<final<<endl;
     cout<<"your last score :"<<last_score<<endl;

     cout<<"*\n**\n***\n**\n*"<< endl;
     
return 0;
}

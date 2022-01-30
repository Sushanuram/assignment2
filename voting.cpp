// assignment2
# include<iostream>
using namespace std;

int main() {
char [20] name;
    int age;
  
  cout<<"enter the name of the user";
  cin>>name;
  
    cout << "Enter age of a user:";
    cin>>age;
cout<<"the name of the user is :"<<name;
    if (age >= 18)
    {
        cout << "You are eligible for voting";
    }
  else 
  {
        cout << "You are not eligible for voting";
    }

    return 0;
}

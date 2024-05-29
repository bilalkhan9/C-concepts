#include<iostream>
#include<cstring>
using namespace std;
class person
{
protected:
    char name[20];
    int age;
public:
    void setname (const char *n)
    strcpy(name,n);
    void setage(int a)
    {
        age = a;
    }
    char * getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
};
class Employee : public person
{
    int empid;
    int salary;
public:
    void setid(int id)
    {
        empid =id;
    }
    void setsalary(int s)
    {
        salary=s;
    }
    int getid()
    {
        return empid
    }
    int getsalary()
    {
        return salary;
    }
    void display()
    {
        cout<<"Name = "<<name<<"Age = "<<age<<"Empid = "<<empid<<"salary ="<<salary<<endl;

    }
};
int main()
{
    Employee e;
    e.setname("Bilal");
    e.setage (23);
    e.setid(123);
    e.salary(1000);

    e.display();
    return 0;
}

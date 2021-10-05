// Question Link: https://www.hackerrank.com/challenges/virtual-functions/problem
/* Input: 
4
1
Walter 56 99
2
Jesse 18 50 48 97 76 34 98
2
Pinkman 22 10 12 0 18 45 50
1
White 58 87
*/
/* Output :
Walter 56 99 1
Jesse 18 403 1
Pinkman 22 135 2
White 58 87 2
*/

class Person
{
    protected:
    string name;
    int age;
    public:
    virtual void getdata()
    {
        string s;
        int x;
        cin>>s>>x;
        name = s;
        age = x;
    };
    virtual void putdata()
    {
        cout<<name<<" "<<age<<" ";
    }
};
class Professor:public Person
{
    protected:
    int a;
    static int range1;
    int id;
    public:
    Professor()
    {
        range1++;
        id = range1;
    }
    void getdata()
    {
       Person::getdata();
       int q;
       cin>>q;
       a = q;
    }
    void putdata()
    {
        Person::putdata();
        cout<<a<<" "<<id<<endl;
    }  
};
int Professor::range1 = 0;
class Student: public Person
{
    protected:
    int a[6];
    static int range2;
    int id;
    public:
    Student()
    {
        range2++;
        id = range2;
    }
    void getdata()
    {
        Person::getdata();
        int x[6];
        for(int i=0;i<6;i++)
        {
            cin>>x[i];
            a[i] = x[i];
        }
    }
    void putdata()
    {
        Person::putdata();
        int sum=0;
        for(int i=0;i<6;i++)
        {
            sum += a[i];
        }
        cout<<sum<<" "<<id<<endl;
    }
};
int Student::range2 = 0;

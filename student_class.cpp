# student
#public inheritance

#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

class personal
{
    int age;
    char name[50],add[50];
    
    public:
    void get_data()
    {
        cout<<"\nEnter name:";
        cin>>name;
        cout<<"\nEnter age:";
        cin>>age;
        cout<<"\nEnter address:";
        cin>>add;
    }
    
    void display()
    {
        cout<<"\nEntered name:"<<name;
        cout<<"\nEntered age:"<<age;
        cout<<"\nEntered address:"<<add;
        
    }
};

class student:public personal
{
    int roll, marks;
    char sub[50];
    
    public:
    void feed_info()
    {
        cout<<"\nEnter roll number:";
        cin>>roll;
        cout<<"\nEnter marks:";
        cin>>marks;
        cout<<"\nEnter subject:";
        cin>>sub;
    }
    
    void show_info()
    {
        cout<<"\nEntered roll number:"<<roll;
        cout<<"\nEntered marks:"<<marks;
        cout<<"\nEntered subject:"<<sub;
    }
};

int main()
{
    int i,n;
    student s1[i];
    printf("\nEnter the number of students whose information has to be added:");
    scanf("%d",&n);
    
    for(i=0; i<n; i++)
    {
        s1[i].get_data();
        s1[i].feed_info();
        s1[i].display();
        s1[i].show_info();
        printf("\n");
    }
}


#private inheritance

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class personal
{
    int age;
    char name[50], add[50];
    public:
    void get_data()
    {
        cout<<"\nEnter Your age: ";
        cin>>age;
        cout<<"\nEnter Your Name: ";
        cin>>name;
        cout<<"\nEnter Your add: ";
        cin>>add;
    }
    void display()
    {
        cout<<"\nage: "<<age;
        cout<<"\nname: "<<name;
        cout<<"\nadd: "<<add;
    }
    char*get_name()
    {
        return name;
    }
};
class student: private personal
{
    int roll, marks;
    char sub[50];
    public:
    void feed_info()
    {
        get_data();
    }
    void show_info()
    {
        display();
    }
    int get_marks()
    {
        return marks;
    }
        int get_roll()
    {
            return roll;
    }
    int comp_sub(char ch[])
    {
        return (strcmp(ch,sub));
    }
};

int main()
{
    int i;
    student s1[5];
    for(i=0; i<5; i++)
    {
        s1[i].feed_info();
        s1[i].show_info();
    }
    return 0;
}






#new project

#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;

class personal
{
    int age;
    char name[50], add[50];
    
    public:
    void feed_data()
    {
        cout<<"\nEnter name:";
        cin>>name;
        cout<<"\nEnter age:";
        cin>>age;
        cout<<"\nEnter address:";
        cin>>add;
    }
    
    void show_info()
    {
        cout<<"\nEntered name:"<<name;
        cout<<"\nEntered age:"<<age;
        cout<<"\nEntered address:"<<add;
    }
};

class student:personal
{
    int roll, marks[5], total, avg;
    char sub[50], grade;
    public:
    void get_info()
    {
        cout<<"\nEnter roll number:";
        cin>>roll;
        cout<<"\nEnter subject:";
        cin>>sub;
        
        int i;
        for(i=0; i<5; i++)
        {
            cout<<"\nEnter marks:";
            cin>>marks[i];
        }
        define();
    }
    
    private:
    void define()
    {
        total=0;
        for(i=0; i<5; i++)
        {
            total=total+marks[i];
        }
        avg=total/5;
        
        if (avg>=90)
        {
            grade="A";
        }
        else if(avg>=70)
        {
            grade="B";
        }
        else if(avg>=60)
        {
            grade="C";
        }
        else if(avg>=40)
        {
            grade="D";
        }
        else
        {
            grade="F";
        }
    }
    
    void display()
    {
        show_info();
        cout<<"\nYour Details are:";
        cout<<total;
        cout<<"\n"<<sub;
        cout<<"\n"<<grade;
        cout<<"\n";
        
        for(i=0; i<5; i++)
        {
            cout<<marks[i];
        }
    }
    
    char get_grade()
    {
        return grade;
    }
    int get_avg()
    {
        return avg;
    }
    char * sub()
    {
        return sub;
    }
    int get_roll()
    {
        return roll;
    }
};



















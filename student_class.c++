# student

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

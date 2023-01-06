/*
*  Author : Sameh Tarek
*  Employee System (Consol Application)
*  Dr Mostafa Saad Projects
*/

#include <bits/stdc++.h>
#define el '\n'
using namespace std;

//create vectors or database to store employees data
vector<string>names;
vector<int>ages;
vector<double>salarys;
vector<char>genders;

int main() {
    while(true){
        cout<<"********************** welcome,which fun? **********************"<<el;
        cout<<"1) Add new Employee"<<el;
        cout<<"2) print all employees"<<el;
        cout<<"3) Delete by age"<<el;
        cout<<"4) Update salary by name"<<el;
        cout<<"5) close the program"<<el;
        cout<<"****************************************************************"<<el;
        cout<<"Enter the choice you want from 1 to 5 :";
        int choice; cin>>choice;
    //if choice 1 to add new employee
    if(choice==1){
        string name;
        int age;
        double salary;
        char gender;

        //enter employee name
        cout<<"Enter name : ";
        cin>>name;
        cout<<el;
        //enter employee age
        cout<<"Enter age : ";
        cin>>age;
        cout<<el;
        //enter employee salary
        cout<<"Enter salary : ";
        cin>>salary;
        cout<<el;
        //enter employee gender;
        cout<<"Enter gender (M/F) : ";
        cin>>gender;
        cout<<el;

        //store data of new employee to my database or vectors
        names.push_back(name);
        ages.push_back(age);
        salarys.push_back(salary);
        genders.push_back(gender);
        cout<<"nice,The employee has been added successfully"<<el;
    }
    //if choice 2 to print all employees
    else if(choice==2){
        if(names.empty()){
            cout<<"NO employees yet"<<el;
        }
        else{
            for(int i=0;i<names.size();i++){
            cout<<names[i]<<" "<<ages[i]<<" "<<salarys[i]<<" "<<genders[i]<<el;
            }
        }

    }
    //if choice 3 to delete employee by age
    else if(choice==3){
         bool findemp=0;
         if(names.empty()){
            cout<<"NO employees yet"<<el;
        }else{
            cout<<"Enter age : ";
            int age; cin>>age;
            //loop on ages vector to delete all employees have the age
            for(int i=0;i<ages.size();i++){
                //delete employee if age equal the age you entered
                if(ages[i]==age){
                    ages.erase(ages.begin()+i);
                    names.erase(names.begin()+i);
                    salarys.erase(salarys.begin()+i);
                    genders.erase(genders.begin()+i);
                    i-=1;
                    findemp=1;
                 }
                if(i==ages.size()-1 && !findemp){
                cout<<"The employee whose entry does not exist, try again"<<el;
            }
        }
        }

    }
    // if choice 4 to update employee salary by name
    else if(choice==4){
        bool findemp=0;
        // loop on names vector to update employee his name = the name you entered
        if(names.empty()){
            cout<<"NO employees yet"<<el;
        }
        else{
            cout<<"Enter Name and new salary : ";
            string name; cin>>name;
            int salary; cin>>salary;
            for(int i=0;i<names.size();i++){
            if(names[i]==name){
                salarys[i]=salary;
                findemp=1;
            }
            if(i==name.size()-1 && !findemp){
                cout<<"The employee whose entry does not exist, try again"<<el;
            }
         }
        }

    }
    else if(choice==5){
        cout<<"************* Goodbye, we hope you have a good time ************"<<el;
        return 0;
    }
    else{
        cout<<"Sorry, this option is not available, try again"<<el;
    }
    cout<<el;
    }

}

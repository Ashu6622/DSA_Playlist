#include<bits/stdc++.h>
using namespace std;

class User{

    private:
    string name;
    double balance;
    static double totalBalance;

    public:
    static int totalUser;


    User(string n, double b){
            this->name = n; 
            this->balance = b;
            totalBalance+=b;
            totalUser++;
    }

    static void total(){
        cout<<totalUser<<endl;
    }

    static void getTotalBalance(){
        cout<<totalBalance<<endl;
    }

    void deposit(double amount){
        this->balance += amount;
        totalBalance += amount;
    }
    void withDraw(double amount){
        this->balance -= amount;
        totalBalance -= amount;
    }

    double showBalance(){
        return this->balance;
    }

    void displayUser(){
        cout<<name<<" "<<balance<<endl;
    }
    
};

// setting inital value of static data member
int User::totalUser = 0;
double User::totalBalance = 0.0;

int main(){

        User u1("Ashu", 1240.89);
        User u2("Rahul", 7896.23);

        u1.displayUser();
        u2.displayUser();
        User::total();

        u1.deposit(300.56);
        cout<<User::totalUser<<endl;
        // cout<<User::totalBalance<<endl;
        User u3("Jaggu", 5500.00);
        User::total();
        // cout<<User::totalBalance<<endl;
        cout<<u1.showBalance()<<endl;
        cout<<User::totalUser<<endl;
        User::getTotalBalance();
        u2.withDraw(200);
        User::getTotalBalance();
        cout<<u2.showBalance()<<endl;
}
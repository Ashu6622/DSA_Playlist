 #include<bits/stdc++.h>
 using namespace std;

 class Base{

    protected:
    string name;
    string address;
    int salary;

 };

 class A: protected Base{

        private:
        double height;
        double weight;

        public:
        A(string name, string address, int salary, double height, double weight){
                this->name = name;
                this->address = address;
                this->salary = salary;
                this->height = height;
                this->weight = weight;
        }

        void display(){
            cout<<name<<" "<<address<<" "<<salary<<" "<<height<<" "<<weight<<endl;
        }
 };

 class B: protected Base{

        private:
        int account;
        double balance;
        
        public:
        B(string name, string address, int salary, double account, double balance){

            this->name = name;
            this->address = address;
            this->salary = salary;
            this->account = account;
            this->balance = balance;

        }   

        void display(){
            cout<<name<<" "<<address<<" "<<salary<<" "<<account<<" "<<balance<<endl;
        }


 };


 int main(){

        A a1("Ashu", "Pune", 89564, 178.5, 80.4);
        A a2("Rahul", "Patna", 70432, 160.5, 60);

        a1.display();
        a2.display();

        B b1("Rohan", "Silvassa", 45983, 167.65, 67.66);
        b1.display();


 }
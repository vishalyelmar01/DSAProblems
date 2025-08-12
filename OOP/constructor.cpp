#include<iostream>

class demo{
    public:
    int age;
    std::string name;

    std::string getGender() const { return gender; }
    void setGender(const std::string &gender_) { gender = gender_; }

    demo(int age_, std::string name_, std::string gender_){
        age = age_;
        name = name_;
        gender = gender_;
    }
    void dataPrint(){
            std::cout<<age<<std::endl;
    std::cout<<name<<std::endl;
    std::cout<<getGender()<<std::endl;
    }
    private:
    std::string gender;

    
};

int main(){

    demo details(12,"vishal","male");
    details.dataPrint();

}
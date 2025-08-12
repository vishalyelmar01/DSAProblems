#include<iostream>
#include<list>
#include<vector>

class channel
{
private:
    std::string Name;
   
    int subscribersCount;
    std::list<std::string>videoTitle;
protected: 
 std::string OwnerName;
    public:

    channel(std::string name, std::string ownerName){
        Name =name;
        OwnerName = ownerName;
        subscribersCount =0;
    }

    void GetInfo(){
        std::cout<<Name<<std::endl;
        std::cout<<OwnerName<<std::endl;
        std::cout<<subscribersCount<<std::endl;
    }
    void Subscribe(){
        subscribersCount++;
    }

    void Unsubscribe(){
        if(subscribersCount>0){
            subscribersCount--;
        }
    }

    void publishVideo(std::string title){
        videoTitle.push_back(title);
    }

};

class codingChannel: public channel{
    public:
    codingChannel(std::string name , std::string ownerName):channel(name,ownerName){

    }
    void Practice(){
        std::cout<<OwnerName<<"  Lets practice some coding today "<<std::endl;
    }
};


int main(){
    codingChannel  data("Coder", "vishal");
    channel data1("food", "xyz");
    data.Subscribe();
    data.GetInfo();
    data.Practice();

}



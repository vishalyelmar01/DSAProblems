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
    int contentQuality;
    public:

    channel(std::string name, std::string ownerName){
        Name =name;
        OwnerName = ownerName;
        subscribersCount =0;
        contentQuality = 0;
    }

    void GetInfo(){
        std::cout<<Name<<std::endl;
        std::cout<<OwnerName<<std::endl;
        std::cout<<subscribersCount<<std::endl;
        std::cout<<contentQuality<<std::endl;
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
    void checkAnalytics(){
        if(contentQuality<5)
            std::cout<<Name<< " has bad quality content"<<std::endl;
        else
            std::cout<<Name<< " has nice content quality"<<std::endl;
    }
};

class codingChannel: public channel{
    public:
    codingChannel(std::string name , std::string ownerName):channel(name,ownerName){

    }
    void Practice(){
        std::cout<<OwnerName<<"  Lets practice some coding today "<<std::endl;
        contentQuality++;
    }
};

class singerChannel:public channel{
    public:
    singerChannel(std::string name , std::string ownerName):channel(name,ownerName){

    }
   void Practice(){
        std::cout<<OwnerName<<"  Lets practice some singing  today "<<std::endl;
    }
};

int main(){
    codingChannel  data("Coder", "vishal");
    data.Subscribe();
    
    data.Practice();
    data.Practice();
    data.Practice();
    data.Practice();
    data.Practice();
    data.Practice();

    singerChannel data2("singer", "John");
    data.Practice();
    data2.Practice();

    data.GetInfo();
    // below is the pointer of base class
    // pointer of base class can point to a variable of derived class
    channel * ch1 = &data;
    channel * ch2 = &data2;

    ch1->checkAnalytics();
    ch2->checkAnalytics();
}



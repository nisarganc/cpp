#include<iostream>
using namespace std;

class WhatsAppV1
{
protected:
    void chat()
    {
        cout<<"Chat feature of whatsapp"<<endl;
    }

    void share()
    {
        cout<<"Share feature of whatsApp"<<endl;
    }
public:
    void listFeatures()
    {
        chat();
        share();
    }
};

class WhatsAppV2 : public WhatsAppV1
{
protected:
    void oneDayStatus()
    {
        cout<<"One day status of new whatsapp"<<endl;
    }
public:
    void listFeatures()
    {
        chat();
        share();
        oneDayStatus();
    }
};

int main()
{
    WhatsAppV1 v1;
    WhatsAppV2 v2;

    v1.listFeatures();
    v2.listFeatures();

}

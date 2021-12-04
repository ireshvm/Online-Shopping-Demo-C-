#include <iostream>

using namespace std;

int main()
{
 char startValue;
 char choiceAgain;
 float onlineShopping(void);
 startlevel:
 cout<<"please press s to start shopping"<<endl;
 start:
 cin>>startValue;
 if(startValue=='s' || startValue=='S')
 {
     float totalAmount=onlineShopping();
     cout<<"total billAmount is ="<<totalAmount;
     shopAgain:
     cout<<"Do you want shopping again yes or No"<<endl;
     cin>>choiceAgain;
     if(choiceAgain=='y' || choiceAgain=='Y'){
            goto startlevel;
}
else if(choiceAgain=='n' || choiceAgain=='N'){
    cout<<"Thanks for shopping"<<endl;
}
else{
    cout<<"you have entered wrong value"<<endl;
    goto shopAgain;
}
 }
 else
 {

     cout<<"you have entered wrong option, Please try again"<<endl;
     goto start;
 }
}
float onlineShopping()
{
    char choice;
    char item;
    float billAmount=0;
    int quantity;
cout<<"**********Welcome to online shopping***********"<<endl;
cout<<"**********Please follow the instructions*******"<<endl;
cout<<"(1) please enter m to order mobile phones"<<endl;
//cout<<"(2) please enter l to order laptops"<<endl;
//cout<<"(3) please enter d to order desktop"<<endl;
//cout<<"(4) please enter s to order speaker"<<endl;
//cout<<"(5) please enter h to order headphones"<<endl;
cin>>choice;
//***********mobile**************//
if(choice=='m' || choice=='M')
{
    mobilelevel:
    cout<<"mobile details"<<endl;
    cout<<"(1) Apple ==> price : 98000"<<endl;
     cout<<"(2) Samsung ==> price : 80000"<<endl;
      cout<<"(3) MI ==> price : 15000"<<endl;
       cout<<"(4) Motorola ==> price : 22000"<<endl;
        cout<<"(5) oppo ==> price : 18000"<<endl;
        cout<<"please enter your choice"<<endl;
        cin>>item;
        if(item=='1')
        {
            cout<<"enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*98000;
        }
        else if(item=='2')
        {

              cout<<"enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*80000;
        }
     else if(item=='3')
        {

              cout<<"enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*15000;
        }
     else if(item=='4')
        {

              cout<<"enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*22000;
        }
     else if(item=='5')
        {

              cout<<"enter quantity"<<endl;
            cin>>quantity;
            billAmount=billAmount+quantity*18000;
        }
else
{
    cout<<"you have entered wrong option, Please enter try with right entry"<<endl;
     goto mobilelevel;
}
}
return billAmount;
}

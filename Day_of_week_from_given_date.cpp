#include <iostream>
using namespace std;

int main() {
    int y,m,d;
    cout<<endl<<"Enter day:";
    cin>>d;
    cout<<endl<<"Enter month:";
    cin>>m;
    cout<<endl<<"Enter year:";
    cin>>y;
    int temp=y/100;
    int odd=0;
    int century=temp*100;
    int check=century%400;
    if(check==0){
        odd+=0;
    }
    else if(check==100){
        odd+=5;
    }else if(check==200){
        odd+=3;
    }else if(check==300){
        odd+=1;
    }
    //---------------------------century division
    //cout<<odd<<endl;
    int remainY=(y-century)-1;
    //cout<<remainY<<endl;
    int leapY=remainY/4;
    //cout<<leapY<<endl;
    int ordiY=remainY-leapY;
    //cout<<ordiY<<endl;
    int count=ordiY+(leapY*2);
    count+=odd;
    count%=7;
    //cout<<count<<endl;
    int Modd=0;
    //----------------------------
    if((remainY+1)%4==0 && m>2)
    {
        Modd=1;
    }
    //cout<<Modd<<endl;
    if(m==1){            //1/jan  3
        Modd+=d%7;
    }else if(m==2){      //2/feb  
        Modd+=3%7;
        Modd+=d%7;
    }else if(m==3){        //3/mar  3
        Modd+=3%7;
        Modd+=d%7;
    }else if(m==4){        //4/apr  2
        Modd+=6%7;
        Modd+=d%7;
    }else if(m==5){       //5/may   3
        Modd+=8%7;
        Modd+=d%7;
    }else if(m==6){       //6/jun   2
        Modd+=11%7;
        Modd+=d%7;
    }else if(m==7){       //7/jul   3
        Modd+=13%7;
        Modd+=d%7;
    }else if(m==8){       //8/aug    3
        Modd+=16%7;
        Modd+=d%7;
    }else if(m==9){       //9/sep    2
        Modd+=19%7;
        Modd+=d%7;
    }else if(m==10){       //10/oct   3
        Modd+=21%7;
        Modd+=d%7;
    }else if(m==11){       //11/nov   2
        Modd+=24%7;
        Modd+=d%7;
    }else if(m==12){       //12/dec   3
        Modd+=26%7;
        Modd+=d%7;
    }
    Modd+=count;
    Modd%=7;
    cout<<endl<<"The Day is: ";
    switch(Modd){
        case 0:
        cout<<"Sunday";
        break;
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
    }
    return 0;
}
#include<iostream>
#include<cstdio>
#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include <math.h>
using namespace std;
int flag=1;
class jisuanqi
{
private:
    double answer;
public:
    jisuanqi(){}
};
class j:public jisuanqi
{
private:
    double a,b;
public:
    j(double a1,double b1)
    {
        a=a1;
        b=b1;
    }
    double jia()
    {
        return a+b;
    }
    double jian()
    {
        return a-b;
    }
    double cheng()
    {
        return a*b;
    }
    double chu()
    {
        return a/b;
    }
};
class pingfang:public jisuanqi
{
private:
    double a;
public:
    pingfang(double a1)
    {
        a=a1;
    }
    double mi2()
    {
        return a*a;
    }
};
class kaifang:public jisuanqi
{
private:
    double a;
public:
    kaifang(double a1)
    {
        a=a1;
    }
    double kai2()
    {
        return sqrt(a);
    }
};
class sjhs:public jisuanqi
{
private:
    double a;
public:
    sjhs(double a1)
    {
        a=a1;
    }
    double sin_()
    {
        double b=a/180*3.1415926;
        return sin(b);
    }
    double cos_()
    {
        double b=a/180*3.1415926;
        return cos(b);
    }
    double tan_()
    {
        double b=a/180*3.1415926;
        return tan(b);
    }
};
class jz:public jisuanqi
{
private:
    int a;
public:
    jz(int a1)
    {
        a=a1;
    }
    
    void bjz()
    {
        cout<<"该数的8进制为:"<<std::oct<<a<<endl;
    }
    void sjz()
    {
        cout<<"该数的10进制为:"<<std::dec<<a<<endl;
    }
    void sljz()
    {
        cout<<"该数的16进制为:"<<std::hex<<a<<endl;
    }
};
void o()
{
    cout<<"************************************ hello！ welcome！ ***************************"<<endl;
    cout<<"          1.  加减乘除"<<endl;
    cout<<"          2.  平方"<<endl;
    cout<<"          3.  开根号"<<endl;
    cout<<"          4.  三角函数"<<endl;
    cout<<"          5.  进制转换"<<endl;
    cout<<"          6.  退出"<<endl;
    cout<<"请输入想要进行的运算："<<endl;
}
void t()
{
    int n;
    cin>>n;
   
    if(n==1)
    {
        cout<<"请输入需要运算的两个数"<<endl;
        double a1,b1;
        cin>>a1>>b1;
        j x1(a1,b1);
        char c;
        cout<<"请输入想要进行的运算,如+或-或*或/"<<endl;
        cin>>c;
        if(c=='+')
        {
            double answer=x1.jia();
            cout<<"结果为："<<answer<<endl;
        }
        if(c=='-')
        {
            double answer=x1.jian();
            cout<<"结果为："<<answer<<endl;
        }
        if(c=='*')
        {
            double answer=x1.cheng();
            cout<<"结果为："<<answer<<endl;
        }
        if(c=='/')
        {
            double answer=x1.chu();
            cout<<"结果为："<<answer<<endl;
        }
        return ;
    }


    if(n==2)
    {
        double a1;
        cout<<"请输入需要运算的数据"<<endl;
        cin>>a1;
        pingfang x3(a1);
        double answer=x3.mi2();
        cout<<"结果为："<<answer<<endl;
        return ;
    }
    if(n==3)
    {
        double a1;
        cout<<"请输入需要运算的数据"<<endl;
        cin>>a1;
        kaifang x4(a1);
        double answer=x4.kai2();
        cout<<"结果为："<<answer<<endl;
        return ;
    }


	    if(n==4)
    {
       double a1;
       cout<<"请输入角度"<<endl;
       cin>>a1;
       sjhs x2(a1);
       cout<<"请输入需要的三角函数转化(正弦为s,余弦为c,正切为t)"<<endl;
       char z;
       
       cin>>z;
	   switch(z)
	   {
	   case's':
       {
           double answer=x2.sin_();
           cout<<"结果为："<<answer<<endl;
		   break;
       }
	   case'c':
       {
           double answer=x2.cos_();
           cout<<"结果为："<<answer<<endl;
		   break;
       }
	   case't':
       {
           double answer=x2.tan_();
           cout<<"结果为："<<answer<<endl;
		   break;
       }
	             
	   }
       return ;
    }


    if(n==5)
    {
        int a1;
        cout<<"请输入需要运算的数据"<<endl;
        cin>>a1;
        jz x5(a1);
        cout<<"请选择需要进行的进制转换"<<endl;
        cout<<"请输入8或10或16"<<endl;
        int a2;
        cin>>a2;
        
        if(a2==8)
            x5.bjz();
        if(a2==10)
            x5.sjz();
        if(a2==16)
            x5.sljz();
        return ;
    }
	if(n==6)
    {
        flag=0;
        return;
    }
}
int main()
{
    while(flag)
    {
        o();
        t();
    }
	
}
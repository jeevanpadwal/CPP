#include<iostream>
using namespace std;
int main()
{

    struct Demo
{

    int no;
    int no1;
};

    struct Demo obj;
    struct Demo *p=&obj;
    struct Demo **q=&p;

    typedef struct Demo DEMO;
    typedef struct Demo * PDEMO;
    typedef struct Demo ** PPDEMO;

    
    //struct Demo obj;
    PDEMO obj;

    //struct Demo *p=&obj;

    PDEMO q=&oBj;
    //struct Demo **q=&p;
    PPDEMO q=&p;



return 0;
}
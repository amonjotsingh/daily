/* basic usage of pointers */
#include<iostream>



using namespace std;
int main()
{
int scores[]{10,20,30};
int *poi{scores};
cout<<poi[0]<<endl;
cout<<scores[0]<<endl;
cout<<*scores<<endl;
cout<<*poi<<endl;

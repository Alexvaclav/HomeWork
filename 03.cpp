#include <iostream>
#include<assert.h>
#include<cstring>

using namespace std;
char *array;
int c;


void scob( int o, int z){

assert(0<=o);
assert(o<=c);
assert(0<=z);
assert(z<=c);
if (o==c && z==c){
    cout<<array<<endl;
    return;}

if (o<c){
            array[o+z]='(';
           scob(o+1,z);

    }
if( z<c && z<o){
    array[o+z]=')';
    scob(o,z+1);
}
}

int main()
{

    cout<<"C = ";
    cin>>c;
    array= new char[c*2+1];

    memset(array,0,c*2+1);//заполняем строчку нулями

    scob(0,0);


   delete[] array;

   return 0;
}

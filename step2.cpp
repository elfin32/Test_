#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

const int RACE_END = 70;

void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr );
void moveTortoise( int *const );


int main()
{
    int tortoise=1;
    int hare = 1;
    
    srand( time( 0 ) );
    
    while ( tortoise != RACE_END && hare != RACE_END ) 
   {
      Sleep( 500 );
      system("cls");    
      moveTortoise( &tortoise );
      printCurrentPositions( &tortoise, &hare );
   }
}

/*�L�X�Q�t�P�ߤl��m*/
void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr )
{
	for(int i=1;i<=7;i++)
		cout<<"---------|";
	cout<<endl;
	cout<<setw(*bunnyPtr)<<"H"<<endl;
	cout<<setw(*snapperPtr)<<"T"<<endl;
}

/*���ʯQ�t*/
void moveTortoise( int * const turtlePtr )
{
	int i=rand()%10+1;
	if(i>=1&&i<=5){
		*turtlePtr+=3;
	}
	else if(i>=6&&i<=7){
		*turtlePtr-=6;
	}
	else if(i>=8&&i<=10){
		*turtlePtr+=1;
	}
	
	if(*turtlePtr>70)
		*turtlePtr=70;
	else if(*turtlePtr<1)
		*turtlePtr=1;
}

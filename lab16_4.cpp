#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &a,int &b,int &c,int &d)
{
	int Q[4] = {};

	int i = rand()%4;
	Q[i] = 50 ;
	do{ i = rand()%4;	}while (Q[i]!=0);
	Q[i] = 100 ;
	do{ i = rand()%4;	}while (Q[i]!=0);
	Q[i] = 500 ;
	do{ i = rand()%4;	}while (Q[i]!=0);
	Q[i] = 1000 ;

	a=Q[0];
	b=Q[1];
	c=Q[2];
	d=Q[3];
}

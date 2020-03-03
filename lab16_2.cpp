#include<iostream>
using namespace std;

//Write the definition of myString() here
 void myString(char * &k , int N){
          k = new char[N] ;
  for(int i=0;i<N;i++){
		 k[i] = 'A'+i;
  }
 }
int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}

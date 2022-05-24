#include<iostream>
#include<math.h>
using namespace std;

int fact(int a){
	if (a==0)
	{
		return 1;
	}
	else return a*fact(a-1);
}

float kos(int x,int n){
	float sonuc=0;
	for(int i=2;i<=n;i+=2){
		sonuc=sonuc+pow(x,i)/fact(i);
	}
	return sonuc+1;

}
int main()
{
	int x,n;
	cout<<"x ve n yi giriniz:"<<endl;
	cin>>x;
	cin>>n;
	cout<<"taylor değeri = "<<kos(x,n);
	
	return 0;
}

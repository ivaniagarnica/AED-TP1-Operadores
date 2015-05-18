// Ivania Garnica
// Trabajo pactico 1.
// 16-04-2015
# include <iostream>
using namespace std;
int main ()
{
int n1;
int n2;
int n3;
int sum;
float prome;
cout<<"\n\nIngrese tres numeros diferentes";
cin>> n1;
cin>> n2;
cin>> n3;
sum= n1 + n2 + n3;
prome= (n1+n2+n3)/3;
if (n1>n2 and n1>n2)
{ cout<<"\n\nEl numero mayor es" <<n1;
}
else{ if(n2>n3)
	{cout<<"\n\nEl numero mayor es" <<n2;
	}
	else{ cout<<"\n\nEl numero mayor es" <<n3;
	}
}
cout <<"\n\nLa suma es";
cout<< sum;
cout<<"\n\nEl promedio es";
cout<< prome;
}


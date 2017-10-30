//Crsecenciano Cuautle Coyotl
//30 De Octubre 2017
//Saber la edad pomedio a la que se gradun los estudiantes de la licenciatura 
//de fisica
# include <iostream>
using namespace std;
int main (){
int edad [14]; 
int suma=0;
for(int i=0; i<14 ; i++)
{
cout<<"¿a que edad te graduaste?" <<endl;
cin >>edad[i];
suma+=edad[i];
}
for(int j=0; j<14;j++)
cout<<edad[j]<< ",";
cout<<endl;
cout<<"La edad promedio de graduacion esperada es"<< suma << endl;
return 0;
}

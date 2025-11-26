#include <iostream>
#include <cstdlib>
#include <ctime>

 using namespace std;
/* int main(){
int x;
cout<<"podaj x:";
cin>>x;	
if(x%21==0){
cout<<"liczba jest podzielna przez 21"<<endl;
}else{
cout<<"nie podzielna przez 21"<<endl;
}
return 0;
}



int main(){
int n;
cout<< "podaj liczby:";
cin >> n;
bool pierwsza = true;

if(n <= 1)pierwsza = false;

for(int i = 2; i < n; i++){
if(n % i == 0){
pierwsza = false;
break;
}
}

if(pierwsza) cout<<"liczba pierwsza";
else cout<<"nie jest pierwsza";
return 0;
}
*/

int main(){
srand(time(0));
int liczba1 = rand() % 10 + 1;
int liczba2 = rand() % 100 + 50;
std::cout<<"losowa liczba z zakresu [1,10]:"<<liczba1<<std::endl;
std::cout<<"losowana liczba z zakresu [100,50]:"<<liczba2<<std::endl;
return 0;
}

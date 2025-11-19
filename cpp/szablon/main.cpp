#include <iostream>
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

*/

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

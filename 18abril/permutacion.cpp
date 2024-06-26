#include <iostream>
using namespace std;

int main(){
    int n,r, nPr,fn,fr;
    int i,j; //yo use dos contadores para evitar problemas
    cin>>n>>r;

    if (n<0&&r<0){
        return 1;
    }
//procedemos a sacar el factorial primero para hacer mas eficiente el proceso
 fn=1;
    for(i=n;i>=1;i--){
        fn*=i; //se obtiene el factorial de n
    }
fr=1;
    for ( j = (n-r); j >=1; j--)
    {
        fr*=j; //se obtiene el factorial de r
    }
    nPr= fn/fr; //aplicamos la formula para obtener la permutacion de n con r
    cout<< nPr;
    

return 0;
}
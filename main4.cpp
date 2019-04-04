
#include <iostream> 
using namespace std;
              
int main(){

        int q[8],c,i;
        int count = 1;
        q[0] = 0;
        c = 0;
      

NC:
        c++;
        if(c == 8) goto print;
        q[c] = -1;
              

NR:
        q[c]++; 
        if(q[c] == 8) goto back;
        
        for (i = 0; i < c; i++) {
                if((q[i] == q[c]) || ((c - i) == abs(q[c] - q[i]))) goto NR;}
        goto NC;


back:
        c--;
        if (c == -1) return 0;
        goto NR;

print:
        cout << endl;
        cout << "#" << count << endl;
        for(i = 0;i < 8; i++){
                cout << q[i] << " ";
        }
        cout << endl;
        count++;
        goto back;
        system("pause");

        return 0;
}
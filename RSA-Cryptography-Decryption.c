#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
int gcd(int a, int b)
{

    int g,i;
    for(i=1; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
            g = i;
    }
    return g;
}


void main()
{
    int p,q,N,Q,e,d;
    printf("Enter the value of first prime no. ");
    scanf("%d",&p);
    printf("Enter the value of second prime no. ");
    scanf("%d",&q);
    N=p*q;
    Q=(p-1)*(q-1);
    for(e=2;e<Q;e++){
        if(gcd(e,Q)==1)
            break;
    }
    for(d=rand()%100000;;d++){
        if(d!=1 && (d*e)%Q==1){
            break;
        }
    }
    crypto(e,d,N);
    //printf("The possible values for p and q are\n p= %d, q= %d",e,d);
}

void crypto(int e, int d, int N)
{
    char a[1000];
    int p,i;
    printf("Enter the message you want to decrypt:\n");
    fflush(stdin);
    gets(a);
    printf("Your decrypted message will be:\n");
    for(i=0;i<strlen(a);i++){
        if(a[i]>='A' && a[i]<='Z'){
          p=((a[i]-'A')^d)%N;
          printf("%c",p+'A');
        }
        else if(a[i]>='a' && a[i]<='z'){
            p=((a[i]-'a')^d)%N;
            printf("%c",p+'a');
        }
        else
            printf("%c",a[i]);
    }
}


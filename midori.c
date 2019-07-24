#include<stdio.h>
char sbox[16]={'c', 'a', 'd', '3', 'e', 'b', 'f', '7', '8', '9', '1', '5', '0', '2', '4', '6'};
char alpha[15][16]={
    '0', '0', '0', '1', '0', '1', '0', '1', '1', '0', '1', '1', '0', '0', '1', '1',
    '0', '1', '1', '1', '1', '0' ,'0', '0', '1' ,'1' ,'0', '0' ,'0' ,'0' ,'0' ,'0',
    '1', '0', '1', '0', '0', '1' ,'0' ,'0' ,'0' ,'0', '1' ,'1' ,'0', '1' ,'0' ,'1',
    '0', '1' ,'1', '0', '0', '0', '1' ,'0' ,'0' ,'0', '0', '1', '0' ,'0', '1', '1',
    '0' ,'0' ,'0' ,'1' ,'0' ,'0' ,'0', '0', '0' ,'1', '0', '0', '1', '1', '1' ,'1',
    '1' ,'1' ,'0' ,'1' ,'0' ,'0' ,'0' ,'1' ,'0' ,'1' ,'1' ,'1' ,'0' ,'0' ,'0' ,'0',
    '0' ,'0', '0', '0', '0', '0', '1', '0', '0', '1', '1', '0', '0', '1', '1' ,'0',
    '0' ,'0' ,'0' ,'0' ,'1' ,'0' ,'1' ,'1' ,'1' ,'1' ,'0', '0', '1' ,'1', '0', '0',
    '1', '0', '0' ,'1' ,'0' ,'1' ,'0' ,'0' ,'1' ,'0' ,'0' ,'0' ,'0' ,'0' ,'0', '1',
    '0', '1', '0', '0', '0', '0', '0', '0', '1', '0', '1', '1', '1', '0', '0' ,'0',
    '0', '1', '1', '1', '0', '0', '0', '1', '1', '0', '0', '1', '0', '1', '1', '1',
    '0', '0', '1', '0', '0', '0', '1', '0', '1', '0', '0', '0', '1', '1', '1', '0',
    '0', '1', '0' ,'1', '0', '0', '0', '1', '0', '0', '1', '1', '0', '0', '0', '0',
    '1', '1', '1' ,'1', '1', '0', '0', '0', '1', '1', '0', '0', '1', '0', '1', '0',
    '1', '1', '0' ,'1', '1', '1', '1', '1', '1', '0', '0', '1', '0', '0', '0', '0'
};
int chartoint(char x)
{
    if(x<='9')return (int)x-48;
    return (int)x-87;
}
char inttochar(int x)
{
    char y;
    if(x<=9)y=x+48;
    else y=x+87;
    return y;
}
char xor(char p,char q,int k)
{
    int i,j;int a[100];
    int x=chartoint(p);
    int y=chartoint(q);
    for(i=0;i<k;i++)
    {
        a[i]=((x%2)+(y%2))%2;
        x=x/2;y=y/2;
    }
    int result=0;
    for(i=1,j=0;j<k;j++,i=i*2)
    {
        result+=((a[j])*i);
    }
    return inttochar(result);
}
void subcell(char state[])
{
    int i,stateval;
    for(i=0;i<16;i++)
    {
        stateval=chartoint(state[i]);
        state[i]=sbox[stateval];
    }
    return;
}
void invsubcell(char state[])
{
    subcell(state);
    return;
}
void shufflecell(char state[])
{
    int i;
    char local[16];
    for(i=0;i<16;i++)
        local[i]=state[i];
    state[1]=local[10];
    state[2]=local[5];
    state[3]=local[15];
    state[4]=local[14];
    state[5]=local[4];
    state[6]=local[11];
    state[7]=local[1];
    state[8]=local[9];
    state[9]=local[3];
    state[10]=local[12];
    state[11]=local[6];
    state[12]=local[7];
    state[14]=local[2];
    state[15]=local[8];
    return;
}
void invshufflecell(char state[])
{
    char local[16];
    int i;
    for(i=0;i<16;i++)
        local[i]=state[i];
    state[1]=local[7];
    state[2]=local[14];
    state[3]=local[9];
    state[4]=local[5];
    state[5]=local[2];
    state[6]=local[11];
    state[7]=local[12];
    state[8]=local[15];
    state[9]=local[8];
    state[10]=local[1];
    state[11]=local[6];
    state[12]=local[10];
    state[14]=local[4];
    state[15]=local[3];

}
void mixcolumn(char state[])
{
    int i;
    for(i=0;i<16;i+=4)
    {
        state[i]=xor(xor(state[i+1],state[i+2],4),state[i+3],4);
        state[i+1]=xor(xor(state[i],state[i+2],4),state[i+3],4);
        state[i+2]=xor(xor(state[i],state[i+1],4),state[i+3],4);
        state[i+3]=xor(xor(state[i],state[i+1],4),state[i+2],4);
    }
    return;
}
void keyadd(char state[],char key[])
{
    int i;
    for(i=0;i<16;i++)
        state[i]=xor(state[i],key[i],4);
    return;
}
void keyexpansion(char keys[16][16],char key[])
{
    int i,j;
    for (i=0;i<16;i++)
        keys[0][i]=xor(key[i],key[i+16],4);
    for(i=1;i<16;i++)
    {
        if(i%2==1){
            for(j=0;j<16;j++)
                keys[i][j]=xor(key[j],alpha[i-1][j],4);
        }
        else {
            for(j=0;j<16;j++)
                keys[i][j]=xor(key[j+16],alpha[i-1][j],4);
        }
    }
    return;
}
void encrypt(char state[],char keys[16][16])
{
    int i;
    keyadd(state,keys[0]);
    for(i=0;i<15;i++)
    {
        subcell(state);
        shufflecell(state);
        mixcolumn(state);
        keyadd(state,keys[i+1]);
    }
    subcell(state);
    keyadd(state,keys[0]);
    return;
}
int main()
{
    int i,j;int n;
    char input[16];
    for(i=0;i<16;i++)
        scanf(" %c",&input[i]);
    char key[32];
    for(i=0;i<32;i++)
        scanf(" %c",&key[i]);
    char keys[16][16];
    keyexpansion(keys,key);
    encrypt(input,keys);
    for(i=0;i<16;i++)
        printf("%c ",input[i]);
    return 0;
}

#include<stdio.h>
char sbox1[16][16]={
    '6',	'7',	'7',	'7',	'f',	'6',    '6',	'c',	'3',	'0',	'6',	'2',	'f',	'd',	'a',	'7',
	'c',	'8',	'c',	'7',	'f',	'5',	'4',	'f',	'a',	'd',	'a',	'a',	'9',	'a',	'7',	'c',
	'b',	'f',	'9',	'2',	'3',	'3',	'f',	'c',	'3',	'a',	'e',	'f',	'7',	'd',	'3',	'1',
	'0',	'c',	'2',	'c',	'1',	'9',	'0',	'9',	'0',	'1',	'8',	'e',	'e',	'2',	'b',	'7',
	'0',	'8',	'2',	'1',	'1',	'6',	'5',	'a',	'5',	'3',	'd',	'b',	'2',	'e',	'2',	'8',
	'5',	'd',	'0',	'e',	'2',	'f',	'b',	'5',	'6',	'c',	'b',	'3',	'4',	'4',	'5',	'c',
	'd',	'e',	'a',	'f',	'4',	'4',	'3',	'8',	'4',	'f',	'0',	'7',	'5',	'3',	'9',	'a',
	'5',	'a',	'4',	'8',	'9',	'9',	'3',	'f',	'b',	'b',	'd',	'2',	'1',	'f',	'f',	'd',
	'c',	'0',	'1',	'e',	'5',	'9',	'4',	'1',	'c',	'a',	'7',	'3',	'6',	'5',	'1',	'7',
	'6',	'8',	'4',	'd',	'2',	'2',	'9',	'8',	'4',	'e',	'b',	'1',	'd',	'5',	'0',	'd',
	'e',	'3',	'3',	'0',	'4',	'0',	'2',	'5',	'c',	'd',	'a',	'6',	'9',	'9',	'e',	'7',
	'e',	'c',	'3',	'6',	'8',	'd',	'4',	'a',	'6',	'5',	'f',	'e',	'6',	'7',	'a',	'0',
	'b',	'7',	'2',	'2',	'1',	'a',	'b',	'c',	'e',	'd',	'7',	'1',	'4',	'b',	'8',	'8',
	'7',	'3',	'b',	'6',	'4',	'0',	'f',	'0',	'6',	'3',	'5',	'b',	'8',	'c',	'1',	'9',
	'e',	'f',	'9',	'1',	'6',	'd',	'8',	'9',	'9',	'1',	'8',	'e',	'c',	'5',	'2',	'd',
	'8',	'a',	'8',	'0',	'b',	'e',	'4',	'6',	'4',	'9',	'2',	'0',	'b',	'5',	'b',	'1',
};
char sbox2[16][16]={
    '3',	'c',	'7',	'b',	'2',	'b',	'f',	'5',	'0',	'1',	'7',	'b',	'e',	'7',	'b',	'6',
	'a',	'2',	'9',	'd',	'a',	'9',	'7',	'0',	'd',	'4',	'2',	'f',	'c',	'4',	'2',	'0',
	'7',	'd',    '3',	'6',	'6',	'f',	'7',	'c',	'4',    '5',	'5',	'1',	'1',	'8',	'1',	'5',
	'4',	'7',	'3',	'3',	'8',	'6',	'5',	'a',	'7',	'2',	'0',	'2',	'b',	'7',	'2',	'5',
	'9',	'3',	'c',	'a',	'b',	'e',	'a',	'0',	'2',	'b',	'6',	'3',	'9',	'3',	'f',	'4',
    '3',	'1',	'0',	'd',	'0',	'c',	'1',	'b',	'a',	'b',	'e',	'9',	'a',	'c',	'8',	'f',
	'0',	'f',	'a',	'b',	'3',	'd',	'3',	'5',	'5',	'9',	'2',	'f',	'0',	'c',	'f',	'8',
	'1',	'3',	'0',	'f',	'2',	'd',	'8',	'5',	'c',    '6',	'a',	'1',	'0',    'f',	'3',	'2',
    'd',	'c',	'3',	'c',	'f',	'7',	'4',	'7',	'4',	'7',	'e',	'd',	'4',	'd',	'9',	'3',
	'0',	'1',	'f',	'c',	'2',	'a',	'0',	'8',	'6',	'e',	'8',	'4',	'e',	'e',	'b',	'b',
	'0',	'2',	'a',	'a',	'9',	'6',	'4',	'c',	'2',	'3',	'c',	'2',	'1',	'5',	'4',	'9',
	'7',	'8',	'7',	'd',	'd',    '5',	'e',	'9',	'c',	'6',	'4',	'a',	'5',	'a',	'e',	'8',
	'a',	'8',	'5',	'e',	'c',	'6',	'4',	'6',	'8',	'd',	'4',	'f',	'b',	'd',	'b',	'a',
	'0',	'e',	'5',	'6',	'8',	'3',	'6',	'e',	'1',	'5',	'7',	'9',	'6',	'1',	'd',	'e',
	'1',	'8',	'8',	'1',	'9',	'9',	'e',	'4',	'b',	'e',	'7',	'9',	'e',	'5',	'8',	'f',
	'c',	'1',	'9',	'd',	'f',	'6',	'2',	'8',	'1',	'9',	'd',	'f',	'0',	'4',	'b',	'6',
};
char RC1[10]={'0','0','0','0','1','2','4','8','1','3'};
char RC2[10]={'1','2','4','8','0','0','0','0','b','6'};
char invsbox1[16][16]={
    '5',	'0',	'6',   	'd',	'3',	'3',	'a',	'3',	'b',	'4',	'a',	'9',	'8',	'f',	'd',	'f',
	'7',	'e',	'3',	'8',	'9',	'2',	'f',	'8',	'3',	'8',	'4',	'4',	'c',	'd',	'e',	'c',
	'5',	'7',	'9',	'3',	'a',	'c',	'2',	'3',	'e',	'4',	'9',	'0',	'4',	'f',	'c',	'4',
	'0',	'2',	'a',	'6',	'2',	'd',	'2',	'b',	'7',	'5',	'a',	'4',	'6',	'8',	'd',	'2',
	'7',	'f',	'f',	'6',	'8',	'6',	'9',	'1',	'd',	'a',	'5',	'c',	'5',	'6',	'b',	'9',
	'6',	'7',	'4',	'5',	'f',	'e',	'b',	'd',	'5',	'1',	'4',	'5',	'a',	'8',	'9',	'8',
	'9',	'd',	'a',	'0',	'8',	'b',	'd',	'0',	'f',	'e',	'5',	'0',	'b',	'b',	'4',	'0',
	'd',	'2',	'1',	'8',	'c',	'3',	'0',	'0',	'c',	'a',	'b',	'0',	'0',	'1',	'8',	'6',
	'3',	'9',	'1',	'4',	'4',	'6',	'd',	'e',	'9',	'f',	'c',	'c',	'f',	'b',	'e',	'7',
	'9',	'a',	'7',	'2',	'e',	'a',	'3',	'8',	'e',	'f',	'3',	'e',	'1',	'7',	'd',	'6',
	'4',	'f',	'1',	'7',	'1',	'2',	'c',	'8',	'6',	'b',	'6',	'0',	'a',	'1',	'b',	'1',
	'f',	'5',	'3',	'4',	'c',	'd',	'7',	'2',	'9',	'd',	'c',	'f',	'7',	'c',	'5',	'f',
	'1',	'd',	'a',	'3',	'8',	'0',	'c',	'3',	'b',	'1',	'1',	'5',	'2',	'8',	'e',	'5',
	'6',	'5',	'7',	'a',	'1',	'b',	'4',	'0',	'2',	'e',	'7',	'9',	'9',	'c',	'9',	'e',
	'a',	'e',	'3',	'4',	'a',	'2',	'f',	'b',	'c',	'e',	'b',	'3',	'8',	'5',	'9',	'6',
	'1',	'2',	'0',	'7',	'b',	'7',	'd',	'2',	'e',	'6',	'1',	'6',	'5',	'2',	'0',	'7'
};
char invsbox2[16][16]={
    '2',	'9',	'a',	'5',	'0',	'6',	'5',	'8',	'f',	'0',	'3',	'e',	'1',	'3',	'7',	'b',
	'c',	'3',	'9',	'2',	'b',	'f',	'f',	'7',	'4',	'e',	'3',	'4',	'4',	'e',	'9',	'b',
	'4',	'b',	'4',	'2',	'6',	'2',	'3',	'd',	'e',	'c',	'5',    'b',    '2',	'a',	'3',	'e',
	'8',	'e',	'1',	'6',	'8',	'9',	'4',	'2',	'6',	'b',	'2',	'9',	'd',	'b',	'1',	'5',
	'2',	'8',	'6',	'4',	'6',	'8',	'8',	'6',	'4',	'4',	'c',	'c',	'd',	'5',	'6',	'2',
	'c',	'0',	'8',	'0',	'd',	'd',	'9',	'a',	'e',	'5',	'6',	'7',	'7',	'd',	'd',	'4',
	'0',	'8',	'b',	'0',	'c',	'c',	'3',	'a',	'7',	'4',	'8',	'5',	'8',	'3',	'5',	'6',
	'0',	'c',	'e',	'f',	'a',	'f',	'f',	'2',	'1',	'f',	'd',	'3',	'1',	'3',	'a',	'b',
	'a',	'1',	'1',	'1',	'f',	'7',	'c',	'a',	'7',	'2',	'f',	'e',	'0',	'4',	'6',	'3',
	'6',	'c',	'4',	'2',	'7',	'd',	'5',	'5',	'2',	'9',	'7',	'8',	'c',	'5',	'f',	'e',
	'7',	'1',	'a',	'1',	'd',	'9',	'5',	'9',	'f',	'7',	'2',	'e',	'a',	'8',	'e',	'b',
	'c',	'6',	'e',	'b',	'6',	'2',	'9',	'0',	'a',	'b',	'0',	'e',	'8',	'd',	'a',	'4',
	'f',	'd',	'8',	'3',	'8',	'7',	'7',	'1',	'1',	'2',	'0',	'9',	'7',	'0',	'c',	'f',
	'0',	'1',	'f',	'9',	'9',	'5',	'a',	'd',	'd',	'5',	'a',	'f',	'3',	'9',	'c',	'f',
	'0',	'0',	'b',	'd',	'e',	'a',	'5',    '0',	'8',	'b',	'b',	'c',	'3',	'3',	'9',	'1',
	'7',	'b',	'4',	'e',	'a',	'7',	'6',	'6',	'1',	'9',	'4',	'3',	'5',	'1',	'c',	'd'
};
int chartoint(char x)                                   //function which converts hexadecimal form to integer form of 4-bit
{
    if(x<='9')return (int)x-48;
    else return (int)x-87;
}
char inttochar(int x)                                   //function which converts integer form to hexadecimal form of 4-bit
{
    char y;
    if(x<=9)y=x+48;
    else y=x+87;
    return y;
}
void substitution(char state[])                         //sub-byte function
{
    int i;int m,n;
    for(i=0;i<32;i+=2)
    {
        m=chartoint(state[i]);
        n=chartoint(state[i+1]);
        state[i]=sbox1[m][n];
        state[i+1]=sbox2[m][n];
    }
    return;
}
void swap(char state[],int i,int j)                     //function which swaps the values in a given array
{
    char temp=state[i];
    state[i]=state[j];
    state[j]=temp;
}
void shiftrow(char state[])                             //shiftrow function
{
    int i=2;
    int flag1=state[2],flag2=state[3];
    while(i!=26)                                        //for second row
    {
        state[i]=state[i+8];
        state[i+1]=state[i+9];
        i+=8;
    }
    state[26]=flag1;state[27]=flag2;
    flag1=state[4];flag2=state[5];
    swap(state,4,20);                                    //for third row
    swap(state,5,21);
    swap(state,12,28);
    swap(state,13,29);
    flag1=state[30];flag2=state[31];
    i=30;
    while(i!=6)                                          //for fourth row
    {
        state[i]=state[i-8];
        state[i+1]=state[i-7];
        i-=8;
    }
    state[6]=flag1;state[7]=flag2;
    return;
}
int xor(int x,int y,int k)                               //function which gives output of xor operation performed bitwise on k-bit integers x,y
{
    int i,j;int a[100];
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
    return result;
}
char XOR(char m,char n)                                  //function which gives xor output performed on two hexadecimal digits
{
    int result;
    int mval,nval;
    mval=chartoint(m);
    nval=chartoint(n);
    result=xor(mval,nval,4);
    char x;
    x=inttochar(result);
    return x;
}
void addroundkey(char state[],char key[])                //addroundkey function
{
    int i;
    for(i=0;i<32;i++)
    {
        state[i]=XOR(state[i],key[i]);
    }
    return;
}
int multiply2(int x)                                     //function which multiplies 2 with given integer x in GF(2^8)
{
    if(x>127)return xor(2*(x%128),27,8);
    else return 2*(x%128);
}
int value(char m,char n)                                 //function which gives converts number formed by concatenate of m,n from hexadecimal to decimal form
{
    int mval,nval;
    mval=chartoint(m);
    nval=chartoint(n);
    return mval*16+nval;
}
int multiply(int k,char m,char n)                        //function which multiplies with single hexadecimal bit k with 8bit number(concatenating m,n)
{
    int result=0;
    int flag;
    flag=value(m,n);
    int mval,nval;
    mval=chartoint(m);
    nval=chartoint(n);
    if(k==2)
    {
        return multiply2(flag);
    }
    else if(k==3)                                       //x*3=(x*2)+x
    {
        flag=multiply2(flag);
        return xor(flag,mval*16+nval,8);
    }
    else if(k==9)                                       //x*9=(((x*2)*2)*2)+x
    {
        flag=multiply2(flag);
        flag=multiply2(flag);
        flag=multiply2(flag);
        return xor(flag,mval*16+nval,8);
    }
    else if(k==11)                                     //x*11=((((x*2)*2)+x)*2)+x
    {
        flag=multiply2(flag);
        flag=multiply2(flag);
        flag=xor(flag,mval*16+nval,8);
        flag=multiply2(flag);
        return xor(flag,mval*16+nval,8);
    }
    else if(k==13)                                     //x*13=((((x*2)+x)*2)*2)+x
    {
        flag=multiply2(flag);
        flag=xor(flag,mval*16+nval,8);
        flag=multiply2(flag);
        flag=multiply2(flag);
        return xor(flag,mval*16+nval,8);
    }
    else if(k==14)                                     //x*14=((((x*2)+x)*2)+x)*2
    {
        flag=multiply2(flag);
        flag=xor(flag,mval*16+nval,8);
        flag=multiply2(flag);
        flag=xor(flag,mval*16+nval,8);
        return multiply2(flag);
    }
    return 0;
}
void mixcolumn(char state[])                           //mixcol function
{
    char local[32];
    int i=0;int flag;
    for(i=0;i<32;i++)
    {
        local[i]=state[i];
    }
    for(i=0;i<25;i+=8)
    {
        flag=xor(xor(multiply(2,local[i],local[i+1]),multiply(3,local[i+2],local[i+3]),8),xor(value(local[i+4],local[i+5]),value(local[i+6],local[i+7]),8),8);
        state[i]=inttochar(flag/16);
        state[i+1]=inttochar(flag%16);
        flag=xor(xor(value(local[i],local[i+1]),multiply(2,local[i+2],local[i+3]),8),xor(multiply(3,local[i+4],local[i+5]),value(local[i+6],local[i+7]),8),8);
        state[i+2]=inttochar(flag/16);
        state[i+3]=inttochar(flag%16);
        flag=xor(xor(value(local[i],local[i+1]),value(local[i+2],local[i+3]),8),xor(multiply(2,local[i+4],local[i+5]),multiply(3,local[i+6],local[i+7]),8),8);
        state[i+4]=inttochar(flag/16);
        state[i+5]=inttochar(flag%16);
        flag=xor(xor(multiply(3,local[i],local[i+1]),value(local[i+2],local[i+3]),8),xor(value(local[i+4],local[i+5]),multiply(2,local[i+6],local[i+7]),8),8);
        state[i+6]=inttochar(flag/16);
        state[i+7]=inttochar(flag%16);
    }
    return;
}
void keyexpansion(char keys[44][8],char key[])
{
    int i,j=0,k;char flag1,flag2;char temp[8];int mval,nval;char m,n;
    for(i=0;i<4;i++)
    {
        for(;j<8*i+8;j++)
        keys[i][j%8]=key[j];
    }
    for(i=4;i<44;i++)
    {
        for(k=0;k<8;k++)
            temp[k]=keys[i-1][k];
        if(i%4==0)
        {
            flag1=temp[0];
            flag2=temp[1];
            for(k=0;k<5;k+=2)
            {
                temp[k]=temp[k+2];
                temp[k+1]=temp[k+3];
            }
            temp[6]=flag1;temp[7]=flag2;
            for(k=0;k<8;k+=2)
            {
                m=temp[k];n=temp[k+1];
                mval=chartoint(m);
                nval=chartoint(n);
                temp[k]=sbox1[mval][nval];
                temp[k+1]=sbox2[mval][nval];
            }
            temp[0]=XOR(temp[0],RC1[(i/4)-1]);
            temp[1]=XOR(temp[1],RC2[(i/4)-1]);
        }
            for(k=0;k<8;k++)
                keys[i][k]=XOR(keys[i-4][k],temp[k]);
    }
    return;
}
void encrypt(char input[],char keys[44][8])
{
    char temp[32];
    int j,k,count=0;
    for(j=0;j<4;j++)
    {
        for(k=0;k<8;k++)
        {
            temp[count]=keys[j][k];
            count++;
        }
    }
    addroundkey(input,temp);
    int i;
    for(i=1;i<=10;i++)
    {
        substitution(input);
        shiftrow(input);
        if(i!=10)mixcolumn(input);
        count=0;
        for(j=4*i;j<4*i+4;j++)
        {
            for(k=0;k<8;k++)
            {
                temp[count]=keys[j][k];
                count++;
            }
        }
        addroundkey(input,temp);
    }
    return;
}
void invsubstitution(char state[])
{
    int i,mval,nval;
    for(i=0;i<32;i+=2)
    {
        mval=chartoint(state[i]);
        nval=chartoint(state[i+1]);
        state[i]=invsbox1[mval][nval];
        state[i+1]=invsbox2[mval][nval];
    }
    return;
}
void invshiftrow(char state[])
{
    int i;
    char flag1,flag2;
    flag1=state[26];flag2=state[27];
    for(i=26;i>2;i-=8)
    {
        state[i]=state[i-8];
        state[i+1]=state[i-7];
    }
    state[2]=flag1;state[3]=flag2;
    swap(state,4,20);
    swap(state,5,21);
    swap(state,12,28);
    swap(state,13,29);
    flag1=state[6];flag2=state[7];
    for(i=6;i<30;i+=8)
    {
        state[i]=state[i+8];
        state[i+1]=state[i+9];
    }
    state[30]=flag1;state[31]=flag2;
    return;
}
void invmixcol(char state[])
{
    char local[32];int i;int flag;
    for(i=0;i<32;i++)
        local[i]=state[i];
    for(i=0;i<25;i+=8)
    {
        flag=xor(xor(multiply(14,local[i],local[i+1]),multiply(11,local[i+2],local[i+3]),8),xor(multiply(13,local[i+4],local[i+5]),multiply(9,local[i+6],local[i+7]),8),8);
        state[i]=inttochar(flag/16);
        state[i+1]=inttochar(flag%16);
        flag=xor(xor(multiply(9,local[i],local[i+1]),multiply(14,local[i+2],local[i+3]),8),xor(multiply(11,local[i+4],local[i+5]),multiply(13,local[i+6],local[i+7]),8),8);
        state[i+2]=inttochar(flag/16);
        state[i+3]=inttochar(flag%16);
        flag=xor(xor(multiply(13,local[i],local[i+1]),multiply(9,local[i+2],local[i+3]),8),xor(multiply(14,local[i+4],local[i+5]),multiply(11,local[i+6],local[i+7]),8),8);
        state[i+4]=inttochar(flag/16);
        state[i+5]=inttochar(flag%16);
        flag=xor(xor(multiply(11,local[i],local[i+1]),multiply(13,local[i+2],local[i+3]),8),xor(multiply(9,local[i+4],local[i+5]),multiply(14,local[i+6],local[i+7]),8),8);
        state[i+6]=inttochar(flag/16);
        state[i+7]=inttochar(flag%16);
    }
    return;
}
void decrypt(char state[],char keys[44][8])
{
    int i,j;char keyflag[32];
    for(i=0;i<32;i++)
    {
        keyflag[i]=keys[40+(i/8)][i%8];
    }
    addroundkey(state,keyflag);
    for(j=1;j<=10;j++)
    {
        invsubstitution(state);
        invshiftrow(state);
        if(j!=10)invmixcol(state);
        for(i=0;i<32;i++)
            keyflag[i]=keys[4*(10-j)+(i/8)][i%8];
        if(j!=10)invmixcol(keyflag);
        addroundkey(state,keyflag);
    }
    return;
}
void formkey(char keys[44][8],char key[],int round)
{
    if(round==0){
        keyexpansion(keys,key);
        return;
    }
    int i,j,k;char temp[32];char flag1,flag2;char m,n;int mval,nval;
    for(j=0;j<32;j++)
        keys[(4*round)+(j/8)][j%8]=key[j];
    for(i=4*(round+1);i<44;i++)
    {
        for(k=0;k<8;k++)
            temp[k]=keys[i-1][k];
        if(i%4==0)
        {
            flag1=temp[0];
            flag2=temp[1];
            for(k=0;k<5;k+=2)
            {
                temp[k]=temp[k+2];
                temp[k+1]=temp[k+3];
            }
            temp[6]=flag1;temp[7]=flag2;
            for(k=0;k<8;k+=2)
            {
                m=temp[k];n=temp[k+1];
                mval=chartoint(m);
                nval=chartoint(n);
                temp[k]=sbox1[mval][nval];
                temp[k+1]=sbox2[mval][nval];
            }
            temp[0]=XOR(temp[0],RC1[(i/4)-1]);
            temp[1]=XOR(temp[1],RC2[(i/4)-1]);
        }
            for(k=0;k<8;k++)
                keys[i][k]=XOR(keys[i-4][k],temp[k]);
    }
    for(i=(4*round)-1;i>=0;i--)
    {
        for(k=0;k<8;k++)
            temp[k]=keys[i+3][k];
        if(i%4==0)
        {
            flag1=temp[0];
            flag2=temp[1];
            for(k=0;k<5;k+=2)
            {
                temp[k]=temp[k+2];
                temp[k+1]=temp[k+3];
            }
            temp[6]=flag1;temp[7]=flag2;
            for(k=0;k<8;k+=2)
            {
                m=temp[k];n=temp[k+1];
                mval=chartoint(m);
                nval=chartoint(n);
                temp[k]=sbox1[mval][nval];
                temp[k+1]=sbox2[mval][nval];
            }
            temp[0]=XOR(temp[0],RC1[i/4]);
            temp[1]=XOR(temp[1],RC2[i/4]);
        }
        for(k=0;k<8;k++)
            keys[i][k]=XOR(keys[i+4][k],temp[k]);
    }
    return;
}
int main()
{
    char input[32];int i,j,round;
    printf("Enter a 128-bit plaintext in hexadecimal form:\n");
    for(i=0;i<32;i++)
        scanf(" %c",&input[i]);
    printf("\n");
    char key[32];
    printf("Enter a 128-bit key in hexadecimal form:\n");
    for(i=0;i<32;i++)
        scanf(" %c",&key[i]);
    printf("\n");
    printf("Enter the round number of the given key:\n");
    scanf("%d",&round);
    printf("\n");
    char keys[44][8];
    formkey(keys,key,round);
    encrypt(input,keys);
    printf("Ciphertext produced after encryption:\n");
    for(i=0;i<32;i++)
        printf("%c ",input[i]);
    printf("\n");
    decrypt(input,keys);
    printf("\nActual text prodcued after decryption:\n");
    for(i=0;i<32;i++)
        printf("%c ",input[i]);
    printf("\n");
    return 0;
}

//#include<iostream>
//#include<iomanip>
//#include<conio.h>

//using namespace std;

int c= 0,k,l,x,y;
int a[5][5] = {{-1, 1, 0, 1, 1},
{1, 1, 1, 0, 1},
{1 ,1 ,-5 , 1, 1},
{1 ,0,1, 1, 1},
{1, 1, 1, 0, 1}};

int b[5][5];

int adjacent(int x,int y)
{
        if(x<4 && y<5)
        {
        if(b[x+1][y]>=c)
               b[x+1][y]=c+1;
        }
        if(x<5 && y<4)
        {
                if(b[x][y+1]>=c)
                b[x][y+1]=c+1;
        }
        if(x>0 && y>-1)
        {
                if(b[x-1][y]>=c)
                        b[x-1][y]=c+1;
        }
        if(x>-1 && y>0)
        {
                if(b[x][y-1]>=c)
                        b[x][y-1]=c+1;
        }
        return 0;
}


/*int main()
{
       
        return 0;
       
}*/




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   int i,j;    
        for(i=0;i<5;i++)
        {
                for(j=0;j<5;j++)
                {
                        if(a[i][j]<=0)
                        b[i][j]=a[i][j];
                        if(a[i][j]==1)
                        b[i][j]=100;
                }
        }
        for(i=0;i<5;i++)
        {
                for(j=0;j<5;j++)
                        if(b[i][j]==-1)
                adjacent(i,j);
        }
        for(c=1;c<15;c++)
        {
                for(i=0;i<5;i++)
                {
                for(j=0;j<5;j++)
                        if(b[i][j]==c)
                                adjacent(i,j);
                }
        }
         for(k= 0 ; k<5 ;k++)
  {
    for(l= 0 ; l <5 ;l++)
    {
      Serial.print( b[k][l]);
    }
    Serial.println();
 
  //Serial.println("sdfcvb");
}
}

void loop() {
 
   //main();
/*  for(k= 0 ; k<5 ;k++)
  {
    for(l= 0 ; l <5 ;l++)
    {
      Serial.print(b[k][l]);
    }
    Serial.println();
  }*/

  // put your main code here, to run repeatedly:

}

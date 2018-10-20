#include <StackArray.h>
StackArray <int> s;
int c= 0,k,l,x,y;
/*int a[5][11] = {{-1, 1, 0, 1, 1,1,1,1,1,1,1},
{1, 1, 1, 1, 1,1,1,1,0,1,1},
{1 , 1, 0, 1, 1,1,1,1,1,1,1},
{1 , 1, 1, 1, 1,1,1,0,1,1,1},
{1, 1, 0, 1, 1,1,1,1,1,1,-5}};*/
int a[8][9] = {//{-1, 0, 1, 1, 1,1,1,1,1},
{-1, 1, 1, 1, 1,1,1,1,0},
{1 , 1, 0, 1, 1,1,1,1,1},
{1 , 1, 1, 1, 1,1,1,0,1},
{1, 1, 0, 1, 1,1,1,1,1},
{1 , 1, 1, 1, 1,1,1,0,1},
{1 , 1, 1, 1, 1,1,1,0,1},
{1 , 1, 1, 1, 1,1,1,0,1},
{1 , 1,1, 1, 1,1,1,0,-5}};
int i,j,ex,ey,ec,minimum=600,stackdata;



int b[8][9];
int m=8;
int n=9;

void setup() {

   Serial.begin(9600);
    s.setPrinter (Serial);
   int i,j;    
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        if(a[i][j]<=0)
                        b[i][j]=a[i][j];
                        if(a[i][j]==1)
                        b[i][j]=100;
                }
        }
       
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                        if(b[i][j]==-1)
                adjacent(i,j);
        }
        for(c=1;c<72;c++)
        {
                for(i=0;i<m;i++)
                {
                for(j=0;j<n;j++)
                        if(b[i][j]==c)
                                adjacent(i,j);
                }
        }
           for(i=0 ; i<m; i++)
     {
      for(j=0 ; j< n ; j++)
      {
        if(b[i][j] == -5)
        {
          ex=i;
          ey=j;
          ec = ex*100+ ey;
          s.push(ec);
        }
      }
     }

     while(minimum !=-1 )
     {
      shortestpath(ex,ey);
      ex = stackdata/100;
      ey = stackdata%100;
      
     }

    while (!s.isEmpty ())
    {
   Serial.println(s.pop());
    }
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}












int adjacent(int x,int y)
{
        if(x<(m-1) && y<n)
        {
        if(b[x+1][y]>c)
               b[x+1][y]=c+1;
        }
        if(x<m && y<(n-1))
        {
                if(b[x][y+1]>c)
                b[x][y+1]=c+1;
        }
        if(x>0 && y>-1)
        {
                if(b[x-1][y]>c)
                        b[x-1][y]=c+1;
        }
        if(x>-1 && y>0)
        {
                if(b[x][y-1]>c)
                        b[x][y-1]=c+1;
        }
        return 0;
}
int shortestpath(int x, int y)
{ 

  int c=0,d=0;
 if(x<(m-1) && y<n)
 {
  if(b[x+1][y] != 0)
  {
    minimum = b[x+1][y];
    c=x+1;
    d=y;
  }
 }

 if(x>0 && y>-1)
 {
  if((b[x-1][y]< minimum )&& (b[x-1][y] != 0 ))
  {//Serial.println("abcd");
     minimum = b[x-1][y];
     c = x-1;
     d= y; 
  }
 }

 
 if(x<m && y<(n-1))
 {
   if((b[x][y+1]< minimum )&& (b[x][y+1] != 0 ))
  {
     minimum = b[x][y+1];
     c = x;
     d= y+1; 
  }
 }

 if(x>-1 && y>0)
 {
   if((b[x][y-1]< minimum )&& (b[x][y-1] != 0 ))
  {//Serial.println("sdfgh");
     minimum = b[x][y-1];
     c = x;
     d= y-1; 
  }
 }

 stackdata = 100*c+d;
// Serial.println(stackdata);
 s.push(stackdata);

 if(b[x][y]== minimum)
 {

 s.pop();
 s.pop();
 }

 b[x][y] = 500;


 return 0;
 
}


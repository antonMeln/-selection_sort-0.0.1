#include <iostream>
#include <sstream>

using namespace std;

bool read (int & n, int * mas)
{
  string str;
   getline(cin,str);
    istringstream stream(str);
     bool F = true;
    
       for (int i=0;i<n;i++)
        {
          if (!(stream >> mas[i])) { F = false; break;}
        }
   return F;
}

int main ()
 { 
   int * mas = new int; 
   int i,j,n;
   string str;
   getline(cin,str);
   istringstream  stream (str);
    
       if (stream >> n ){   
         if ( read (n , mas) ) {
            for (i = 0; i < n; i++) {
                  for (j = i+1; j < n; j++) {
                 
                   if (mas[i] > mas[j])
                       swap(mas[i],mas[j]);
                  }}                          
            
             for (i = 0; i < n; i++)
                 cout << mas[i]<<' ';
         }
       
                else {cout << "An error has occured while reading input data." ; }
                 
         }
        
 return 0;
 }  

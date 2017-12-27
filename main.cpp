
#include <iostream>
#include <sstream>

using namespace std;

bool read (int & n, int * mas)
{
  string str;
  getline(cin,str);
  istringstream stream(str);
  bool F = true;
    
      for (int i=0;i<n;i++){
       
       if (!(stream >> mas[i])) {
         F = false; 
         break;
         
       }
      }
   return F;
}

int main ()
 { 
   int i,j,n;
   int * mas = new int[n]; 
   int min;
   string str;
   getline(cin,str);
   istringstream  stream (str);
    
       if (stream >> n){
          if (read(n,mas)){
            int min_i;
            for (int i = 0;i <n;i++){
              min = mas[i];
              min_i = i;
              for (int j = i; j < n; j++){
                if (mas[j]< min) {
                  min = mas[j];
                  min_i = j;
                }
               
              }
              swap(mas[i],mas[min_i]);
            }
            for (int i = 0;i <n;i++) 
              cout << mas[i] << ' ';
                
          }
          else cout << "An error has occured while reading input data.";
           
  }
  delete[] mas;      
  return 0;
 }  

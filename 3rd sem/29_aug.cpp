// FRIEND FUNCTION 

#include<iostream> 
 #include<conio.h> 
 class rational 
 { 
        private: 
        int n,d; 
        public: 
               void set(int a,int a1) 
            { 
                 n=a; 
                d=a1; 
            } 
              void put() const 
           { 
                cout<<"Sum:"; 
                cout<<n<<"/"<<d; 
           } 
              void add(rational u1, rational u2) 
          { 
              n=u1.n*u2.d+u2.n*u1.d; 
              d=u1.d*u2.d; 
         } 
 }; 
            void main() 
        { 
               
               rational obj1 ,obj2,obj3; 
               obj1.set(15,5); 
               obj2.set(3,5); 
               obj3.add(obj1,obj2); 
               obj3.put(); 
               getch(); 
        } 
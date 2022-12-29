#include<iostream>
#include<conio.h>
#include<string>
using namespace std;



// void input(int *ptr)
// {
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", ptr+i);
//     }
    
// }

// void display(int *ptr)
// {
//     for (int i = 0; i < 10; i++)
//     {
//         cout << *(ptr+i);
//         cout<<endl;
//     }
    
// }

// void sort(int *ptr)
// {
//     int round , t , i;
//     for(round = 0 ; round < 10 ; round++)
//     {
//         for(i = 0 ; i < 10 - round ; i++)
//         {
//             if(*(ptr+i) > *(ptr+i+1))
//             {
//                 t = *(ptr+i);
//                 *(ptr + i) = *(ptr + i +1);
//                 *(ptr +i +1) = t;
//             }
//         }
//     }
// }


// int main(int argc, char const *argv[])
// {
//     int a[10];
//     // int *ptr = a;
//     input(a);   // *ptr = a or &a[0]
//     cout<<endl;
//     display(a);
//     printf("\n");
//     printf("%d", a[6]);
//     sort(a);
//     cout<<endl;
//     display(a);
//     return 0;
// }


// template<typename T> 


// T func(T a)
// {
//     cout<<a;
//     return a;
// }

// // int func(int a)
// // {
// //     cout<<a;
// // }

// int main(int argc, char const *argv[])
// {
//     // int a = 5;
//     // int z = func(a);
//     // float d = 5.5;
//     // float e = func(d);
//     // cout<<endl;
//     // cout << e <<"  " << z;

//     func(5);
//     int c = func(5);
    
// }









// class  Complex{
// private:
//     int a , b;    
// public:
//     void  setData(int x , int y)
//     {
//         a = x;
//         b = y;
//     }
//     void showData()
//     {
//         cout<<a<<"\n"<<b;
//     }

//     Complex add(Complex c)
//     {
//         Complex temp;
//         temp.a = a + c.a;
//         temp.b = b + c.b;
//         return(temp);

//     }

      
// };

// int main()
// {
//     Complex c1, c2,c3,c4;
//     c2.setData(8,9);
//     c1.setData(4,6);
//     c1.showData();
//     cout<<"\n";
//     c2.showData();
//     cout<<"\n";
//     c3 = c1.add(c2);
//     c4 = c2.add(c1);
//     return 0 ; 
// }

int main(int argc, char const *argv[])
{
    int arr[10];
    int *p;
    p = arr;
    int i;
    cout<<"Enter the elements of array:";
    for(i=0;i<10;i++)
    {
        cin>>*(p+i);
    }
    for(i=0;i<5;i++)
    {
        int temp ;
        temp = *(p+i);
        *(p+i) = *(p+10-1-i);
        *(p+10-1-i) = temp;
    }
    for(i=0;i<10;i++)
    {
        cout<<*(p+i)<<endl;
    }
    return 0;
}
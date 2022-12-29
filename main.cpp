#include<iostream>
#include<string>
#include<cstdint>
#include<memory>
#include<vector>
using namespace std;
// #include<conio.h>
// using namespace std;
//int main(int argc, const char * argv[])
//{
//    cout<<"hello";
//    return 0;
//}
// #include <cstdio>
// using namespace std;

// int main()
// {
//     puts("Click on Button");
//     puts("Create a new player");
//     puts("Add life to player");
//     return  0;
// }
// TODO: RETURN TYPE AND  COMMENTS
/*
int main(){
    std::cout<< "hello world";
    return 0; // exit code will be 0 after the sucessfull compilateion  of the program
}
int number(){
    cout<< "Helle world";
    return 0;  // exit code will be integer here because return type is integer
}
 
void nothing(){  //  return type is void mean nothing 
    cout<<"Hello world";
}

char iamchar(){
    return 'h'; // exit code will be a 'h' character beacause return type is character 
}
*/
// single line comment
/*
multiple 
line 
comment
*/
// int main(){
//     string my_color;
//     cout<<"Enter your favoroute color \n";
//     getline(cin,my_color);
//     cout << " Hey " << my_color << " is my favoroute too "<<endl;
//     return 0;

// }
// int main(){
//     string first_name , last_name;
//     cout << "Enter your first name \n";
//     getline(cin , first_name);
//     cout << "Enter your last name \n";
//     getline(cin,last_name);
//     cout << "welcome " <<  first_name << last_name << endl;
//     return 0;

// }
// TODO: POINTRES AND REFRENCES 



// void swap(int *x , int *y)
// {
//     int z;
//     z = *x;
//     *x = *y;
//     *y = z;

// }

// int main(){

//     int a ,b;
//     a = 10 ; 
//     b = 5;
//     cout << a <<" , "<< b <<endl;
//     swap(&a,&b);
//     cout << a <<" ,"<< b;
//     return 0;
// }
// int main(){
//     int score = 200;
//     int *myp = &score;

//     printf("Value of score is %d \n", score);
//     printf("Value of score is %p \n", myp);

//     int &another_score = score;
//     another_score = 1000;

//     printf("Value of score is %d \n", score);
//     printf("Value of score is %d \n", *myp);  
//     printf("Value of score is %p \n", myp); 
//     printf("Value of score is %p \n", &another_score);
//     printf("Value of score is %d \n", another_score);


//     return 0;





// }
// TODO: ARRAYS
// int main(){
//     int integer_array[4] = {1,2,3,4};
//     //cout << integer_array<< endl; // outputs the position of the memory from where array started to allocate the memory

//     int another_array[4];
//     another_array[0] = 9;
//     cout << another_array[3] << endl;
//     return  0;



// }
// int main(){
//     int my_array[5] = {1,2,3,4,5};

//     cout << my_array[0] <<endl;
//     cout << &my_array[0]<<endl;
//     *my_array = 67;
//     cout << my_array[0] <<endl;
//     cout << &my_array[1]<<endl;
//     int *my_ptr = my_array;
//     my_ptr++;
//     cout << my_array<<endl;

//     return 0;
// }
// int main(){
//     int my_arr[5] = {1,2,3,4,5};

//     cout<<&my_arr[0]<< endl;

//     int *my_ptr = my_arr;
//     my_ptr++;
//     cout<<&my_arr[0] << endl ;
//     cout<<my_arr << endl;

// }
// int main(){
//     printf("size of this data type is %ld  bits \n", sizeof(char)*8);
//     printf("size of this data type is %ld  bits \n", sizeof( short int)*8);
//     printf("size of this data type is %ld  bits \n", sizeof(int)*8);
//     printf("size of this data type is %ld  bits \n", sizeof(long int)*8);
//     printf("size of this data type is %ld  bits \n", sizeof(long long int)*8);
//     return 0;
// }
// int main(){
//     int rating = 3;
//     printf("Your rating feedback is: %s\n", rating == 4 ? "awsome" : "we will work on it");
//     return 0;
// }

// int main(){
//     int rating;
//     cout << "Please rate us  between 1-5: " << endl;
//     cin>> rating;
//     if (rating >5 || rating <1)
//     {
//         cout << "Please enter rating between 1-5"<< endl;
//         cout << "Please enter rating again:";
//         cin >> rating;
//     }
//     if (rating == 1){
//         cout << "We will surely work upon " << endl;
//     }
//     else if(rating == 2){
//         cout << "We will work" << endl;
//     }
//     else if (rating == 3){
//         cout << "We hope we will do better this time" << endl;
//     }
//     else if(rating ==4)
//     {
//         cout << "Thanks for youe valueable feedback" << endl;
//     }
//     else if (rating == 5){
//         cout<<"Thanks you very much for your rating"<<endl;
//     }
//     else{
//         cout << "Invalid Rating";
//     }
  
// }
// int main(int argc, char const *argv[])
// {
//     char my_name[] = {'h','i','m','a','n','s','h','u',0};

//     for(char *cp = my_name ; *cp != 0; cp++)
//     {
//         cout << "Chracter is " << *cp << endl;
//     }

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     printf("Size of float is %ld bits \n",sizeof( long double) * 8);

//     return 0;
// }
// TODO: EXCEPTION HANDLING OR ERROR HANDLING
// int main(int argc, char const *argv[])
// {
//     char call_api = 'h';
//     try{
//         cout<<"trying to use api value\n";
//         cout<<"did some testing with api value\n";
//         throw call_api;
//     }
//     catch(int x){
//         cout<<"integer exception handled\n";
//     }
//     catch(float f)
//     {
//         cout<<"float exception handled\n";
//     }
//     catch(...){
//         cout<<"Something went wrong\n";
//     }
//     cout<< "rest of the progam is running smopothly";
//     return 0;
// }
// int lifeup()
// {
//     int  life =3;
//     return ++life;
// }
// int main(int argc, char const *argv[])
// {
//     int static life = 3;
//     cout<< life<<endl;
//     life = lifeup();
//     cout<< life<<endl;
//     life = lifeup();

//     return 0;
// }

// enum bix
// {
//     a = 1 ,b,c
// };
 
// int main(int argc, char const *argv[])
// {
//     int x = c ;
//     int &y = x ;
//     int &z = x;
//     y = b;
//     cout<<z--;
//     return 0;
// }

// int main()
// {
//     int x =10 , y =20;
//     int *ptr;
//     ptr = &x;
//     int &ref = y;

//     *ptr++;
//     ref++;

//     cout << x << " " << y << endl;
//     cout<<*ptr;
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int x =0;
//     int &y = x;
//     y = 5;
//     while(x<=5){
//         cout<<y++<<" ";
//         x++;
//     }
//     cout<<x;
//     return 0;
// }

// int main()
// {
//     int m = 2 ,n =6;
//     int &x = m;
//     int &y = n;
//     m = x++;
//     x = m++;
//     n = y++;
//     y = n++;
//     cout<< m << " " <<n<<endl;
//     cout<< ++x;
//     return 0;
// }

// int main()
// {
// int i=5;
// int a=i++;
// cout<<a<<endl;
// cout<<a<<endl;
// cout<<i<<endl;
// cout<<a;
// return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int m =2 , n =6;
//     int &x = m;
//     int &y = n;
//     m = x++;
//     x = m++;
//     cout<<x<<endl;
//     cout<<m;
//     return 0;
// }
// int main(int argc, char const *argv[])
// {
//     int x[] = {1,20,30,40,50,60,70};
//     int *ptr = x;
//     *ptr++;
//     cout<<*ptr;
//     return 0;
// }


// int main(int argc, char const *argv[])
// {
//     int x = 5;
//     int y = x;
//     //int &y = x; // y is a copy of x 
//     //x = y++;
//     y = x++;
//     cout<<x<<" "<<y<<endl;
//     return 0;
// }
// int main(int argc, char const *argv[])
// {
//     int x =10;
//     int *ptr = &x;
//     (*ptr)++;
//     cout<<x;
//     return 0;
// }

// struct student
// {
//     const int roll_no;
//     const char *name;
//     const char *email; // here only pointer is constant not what value pointer is containig 
//     int course_count;
// };

// int main(int argc, char const *argv[])
// {
//     student himanshu = {001,"Himanshu","krhimanshuiet766",4};
//     cout<<himanshu.roll_no << " "<<himanshu.email<<endl;
//     student * h = &himanshu; //  student type pointer means it will always points to the student type variable ;
//     h->email = "hks@gmail.com";
//     cout<<himanshu.email<<endl;

//     return 0;
// }


// CALL BY VALUE

// void life_up(int life = 3)
// {
//     ++life;
// }

// int main(int argc, char const *argv[])
// {
//     int life;
//     life_up(life);
//     cout<<life<<endl;
//     return 0;
// }

// CALL BY REFRENCE

// void life_up(int &life)
// {
//     ++life;
// }

// int main(int argc, char const *argv[])
// {
//     int life = 4;
//     life_up(life);
//     cout<<life<<endl;
//     return 0;
// }

// CALL BY ADDRESS 

// void life_up(int * life)
// {
//     ++(*life);
// }

// int main(int argc, char const *argv[])
// {
//     int life = 4;
//     life_up(&life);
//     cout<<life<<endl;
//     return 0;
// }

// TODO: FACTORIAL OF NUMBER;

// int factorial(int n); // Declaration/Protype of the function 

// int main()
// {
//     int n;
//     label:cout<<"Enter the value for the factorial: ";
//     cin>>n;
//     if(n>0)
//     {
//         int result = factorial(n);
//         cout<<"Factorial of "<<n<<" is: "<<result<<endl;
//     }
//     else{
//         cout<<"Please enter Positive number for factorial:"<<endl;
//         goto label;

//     }
//     return 0; 
// }



// int factorial(int n)
// {
//     if(n>1)
//     {
//         return n * factorial(n-1);
        
//     }
//     else{
//         return 1;
   
//     }
// }


// TODO: CLASSES AND OBJECTS 

// class User{
//     int secret = 7;
//     public:
//     string name = "Himanshu Kumar Singh";
//     User(){
//         cout<<"Constructor called!!!" <<endl;
//         cout<<secret<<endl;
//     }
//     void classMessage()
//     {
//         cout<<"Hey Everyone  this is "<<name<<endl;
//     }

//     void operator ()(int num){
//         cout<<secret+num<<endl;
//     }
// };

// int main(){
//     User himanshu;
    
//     himanshu.classMessage();
//     himanshu(6);
//     return 0;
// }


// class User{
//     private:
//     int  _secret  = 22;
//     public:
//     void setsecret(const int & newsecret)
//     {
//         _secret = newsecret;

//     }
//     int getsecret()const{
//         return _secret;
//     }
// };

// int main()
// {
//     // User sam;
//     // sam.setsecret(333);
//     User const sam;
//     cout<< "The updated secret value is " << sam.getsecret() <<endl;
//     return 0;
// }


// class phone{
//     private:
//     string _name = "";
//     string _os  = "";
//     int _price  = 0;
//     phone();  // Default Constructor
//     public:

//     int _model_no;
   
//     phone(const string & name , const string & os , const int  & price , const int  & model_no); //Parameter constructor
//     phone(const phone &); // copy constructor
   
//     string getname(){
//         printf("Value of getname is %p \n", this);
//         return _name;
//     }
//     int getprice();
//     string getos();
//     ~phone();   //destructor
   
// };

// string phone::getos(){
//     printf("The value of getos is %p \n",this);
//     return _os;
// }

// int phone::getprice(){
//     printf("Value of getprice is %p \n",this);
//     return _price;
// }

// phone::phone(): _name() , _os("Android") , _price()
// {
//     puts("Default constructor!!");
// }

// phone::phone(const string & name , const string & os , const int  & price , const int & model_no): _name(name) , _os(os) , _price(price) , _model_no(model_no)
// {
//     puts("This is parameter constructor!!");
    
// }

// phone::phone(const phone & values)
// {
//     puts("Overwrite copy constructor");
//     _name = values._name;
//     _os   = "skinned-"+values._os;
//     _price  = values._price;

// }
// phone::~phone()
// {
//     cout<<"Distructor is called for " <<_name<<endl;
// }
// int main(int argc, char const *argv[])
// {
//     // phone samsungA1;                               // It will run for default constructor
//     // cout<<samsungA1.getname()<<endl;

//     phone oneplus8("OP8","Android-oxy",300, 786765); 

//     cout<<oneplus8.getname()<<endl;       
//     cout<<oneplus8._model_no<<endl;                             
//     printf("Value of object is %p \n", &oneplus8);
//     cout<<oneplus8.getprice()<<endl;
//     cout<<oneplus8.getos()<<endl;

//     // phone onplus8s = oneplus8;
//     // cout<<onplus8s.getname()<<endl;                //It will run for copy constructor

//     return 0;
// }





// class Rectangle{
// private:
//     double _length;
//     double _breadth;
// public:
//     Rectangle(double l =  2.0 , double b = 2.0): _length(l) , _breadth(b){

//     }
//     double Area(){
//         return _length*_breadth;
//     }
//     int Compare(Rectangle rectangle){
//         return this->Area() > rectangle.Area();
//     }


// };

// int main(int argc, char const *argv[])
// {
//     Rectangle h1 (3.0,4.0);
//     Rectangle h2 (4.0,5.0);

//     if (h1.Compare(h2)){
//         cout<<"h1 is bigger than h2 ";

//     }
//     else{
//         cout<<"h2 is bigger than h1 ";
//     }
//     return 0;
// }



// class User{
//     public:
//     User(){
//         cout<<"User Created \n";
//     }
//     ~User(){
//         cout<<"User distroyed \n";
//     }
//     void testFunc(){
//         cout<<"I am a test function \n";
//     }
    

// };
// int main(int argc, char const *argv[])
// {
//     {
//         unique_ptr<User> sam = make_unique<User>();
//         sam->testFunc();
//         // unique_ptr<User> samm = sam; // This is not allowed
//         //       unique_ptr<User> sam(new User());


//     }
//     cout<<"Outside code \n";   
//     return 0;
// // }


// TODO: Move Semantics;


//  Swap the two numbers .

// void swap(int *a , int *b)
// {
//     int c = 0;
//     c  = *a;
//     *a = *b;
//     *b = c;

// }

// int main()
// {
//     int x = 4 , y =10;
//     cout<<"Unswaped values : " <<x<<" , "<<y<<endl;
//     swap(&x,&y);
//     cout<<"Swaped values: "<<x<<" , "<<y<<endl;
//     return 0;
// }




// int main(int argc, char const *argv[])
// {
//     vector<int> inty;

//     inty.push_back(1);
//     inty.push_back(2);
//     inty.push_back(3);
//     inty.push_back(4);
//     inty.push_back(5);
//     inty.push_back(6);

//     for(auto i = inty.begin() ; i != inty.end() ; i++)
//     {
//         cout<< *i<<endl;

//     }



//     return 0;
// }


// int main(int argc, char const *argv[])
// {
//     // []{cout<< "Hello learn Code Online ";}();
//     // [](){return 100;};


//     auto sum = [](auto a ,auto b){return a+b;};


//     // cout<<"Sum 2.5 and 5.6 is: "<<sum(2,5)<<endl;

//     string a = "abc";
//     string b = "def";
//     cout<<sum(a,b)<<endl;
//     return 0;
// }


// TODO: File Handling 

// int main(int argc, char const *argv[])
// {
//     static const char * originalfiles = "originalfile.txt";

//     static const char * editedfile = "editedfile.txt";

//     remove(editedfile);

//     // rename(originalfiles,editedfile);

//     // FILE *fh = fopen(originalfiles, "w" );
//     // fclose(fh);
//     return 0;
// }

// constexpr int maxbuffer = 1024;

// int main(int argc, char const *argv[])
// {
//     const char * myfile = "myfile.txt";
//     const char * information = "lorem ipsum sit more";
//     // FILE * fh = fopen(myfile,"a");

//     // for(int i =0 ; i< 50;++i)
//     // {
//     //     fputs(information,fh);
//     // }
//     // fclose(fh);

//     char buf[maxbuffer];
//     FILE *fh = fopen(myfile,"r");
//     while (fgets(buf, maxbuffer,fh))
//     {
//         fputs(buf,stdout);
//     }
//     fclose(fh);
    

//     return 0;
// }


// TODO: STANDARD TEMPLETE LIBRARY

// template<typename T>

// T getsum(T a, T b)
// {
//     return(a+b);
// }
// int main(int argc, char const *argv[])
// {
//     cout<<getsum(9,3);
//     return 0;
// }



// class MyFloat{
//     float  ft;
// public:
//     MyFloat(){
//         cout<<"Constructor called "<<endl;
//         ft = 0.1;
//     }
//     void getValue(){
//         cout<< ft << endl;
//     }

//     template<typename T>

//     void operator()(T v){
//         cout<<ft+v<<endl;
//     }
 
      
// };

// int main(int argc, char const *argv[])
// {
//     MyFloat floaty;
//     floaty.getValue();
//     floaty(7.9);
//     return 0;
// }

// #include<algorithm>
// int main(int argc, char const *argv[])
// {
//     int numbers[6] = {3,2,6,4,7,9}; //call this array as itrator
//     cout<<"Unsorted Values : ";
//     for(int n:numbers){
//         cout<<n<<" ";
//     }
//     cout<<"\n";

//     sort(numbers , numbers+6);


//     if( binary_search(numbers , numbers+6 , 7))
//     {
//         cout<<"NUMBER FOUND"<<endl;    
//     }
//     else{
//         cout<<"NUMBER NOT FOUND"<<endl;
//     }


   


//     cout<<"Sorted Values : ";
//     for(int n:numbers){
//         cout<<n<<" ";
//     }



//     return 0;
// }

// #include<algorithm>
// int main()
// {
//     vector<int> myints = {1,2,3,4,5,6,7,8,9,10};

//     for(int x: myints)
//     {
//         cout<<x << " ";
//     }
//     cout<<"\n";

//     stable_partition(myints.begin() , myints.end(), [](auto x){return x % 2== 0;});
//     for(int x : myints)
//     {
//         cout<<x<<" ";

//     }
//     cout<<"\n";
//     return 0;
// }



// TODO: MORE ON STL
// Containers
// int main(int argc, char const *argv[])
// {
//     vector<int> nums;
//     vector<string> heros {"batman" , "flash" , "superman" , "rebin"};

//     nums.push_back(5);
//     nums.push_back(6);
//     nums.push_back(7);
//     nums.push_back(8);
    
//     for (int i = 0; i < 5; i++)
//     {
//         nums.push_back(i);
//     }

//     cout << nums.size() << endl << nums.capacity() << endl << nums.max_size()<<endl;
    
//     // nums.begin() = begin(nums);

//     cout << nums.empty() << endl;


//     for (auto i = nums.begin(); i < nums.end(); i++)
//     {
//         cout<< *i << " ";
//     }
    
//     return 0;
// }


#include<algorithm>
#include<list>
#include<queue>

// int main(int argc, char const *argv[])
// {
//     list<int> mylist;
//     for(int i = 3 ; i <= 10 ; ++i)
//     {
//         mylist.push_back(i);
//     }

//     cout << mylist.front() << endl;

//     cout << mylist.back() << endl;

//     mylist.pop_back();

//     //mylist.pop_front();
//     mylist.reverse();

//     for(auto i : mylist){
//         cout << i << " ";
//     }
//     cout<< endl;

//     mylist.sort();
//     for(auto i : mylist){
//         cout << i << " ";
//     }


//     return 0;
// }


// int main(int argc, char const *argv[])
// {
//     queue<int> myq;

//     myq.push(10);
//     myq.push(12);
//     myq.push(14);
//     myq.push(16);

//     cout << myq.front() << endl;
    
//     cout << myq.back() << endl;

//     myq.pop();
//     cout << myq.front() << endl;

//     while(!myq.empty())
//     {
//         cout << " " << myq.front();
//         myq.pop();
//     }
//     cout << "\n" ; 
//     cout << "Outside "<<endl;
//     cout << myq.front() << endl;




//     priority_queue<int> mypq;

//     mypq.push(10);
//     mypq.push(40);
//     mypq.push(50);
//     mypq.push(5);

//     while(!mypq.empty())
//     {
//         cout << " " << mypq.top();
//         mypq.pop();
//     }
//     cout << "\n" ; 



//     return 0;
// }

// #include<deque>

// int main(int argc, char const *argv[])
// {
//     deque<int> mynums;

//     mynums.push_back(10);
//     mynums.push_front(20);
//     mynums.push_front(30);
//     mynums.push_front(40);

//     cout << mynums.size() << endl;
//     cout<< mynums.at(3) << endl;    // 10

//     mynums.pop_back();

//     for(auto n : mynums){
        
//         cout << n << " ";


//     }
    

//     return 0;
// }


// #include<stack>
// int main(int argc, char const *argv[])
// {
//     stack<int> mystack;

//     mystack.push(10);
//     mystack.push(12);
//     mystack.push(14);
//     mystack.push(15);

//     cout << mystack.size() << endl;
//     cout << mystack.top() << endl;

//     mystack.pop();
//     cout << mystack.top() << endl;

//     while(!mystack.empty())
//     {
//         cout << " " << mystack.top();
//         mystack.pop();
//     }
//     cout << "\n";

//     return 0;
// }


// include<forward_list>

// int main()
// {
//     forward_list<int> fl;

//     fl.push_front(4);
//     fl.push_front(5);
//     fl.push_front(6);
//     fl.push_front(7);
//     fl.push_front(8);


//     for(auto i : fl)
//     {
//         cout<<" " << fl.front();
//         fl.pop_front();
//     }
//     cout<<"\n";


    
// }



// class User{
// public:
//     string name;
//     int score;
//     bool operator < (const User& u)const{return score < u.score;};
//     bool operator > (const User& u)const{return score > u.score;};
      
// };

// #include<set>

// int main()
// {
//     set<int>  myset {12,13,14,15,14,12};

//     myset.insert(2);
//     myset.insert(3);
//     myset.insert(4);
//     myset.insert(2);
//     myset.insert(6);

//     for (auto i = myset.begin(); i != myset.end(); ++i)
//     {
//         cout<<" " << *i << endl;
//     }
    

//     for(const auto &y: myset)
//     {
//         cout<< y << " ";
//     }
//     cout <<"\n";

//     set<User, greater<>> myUserSet = {{"sam", 200},{"tim",22},{"sam",200}};
//     for(const auto &y:myUserSet)
//     {
//         cout << y.name << " ";
//     }
//     return 0;




// }

// #include<map>
// int main(){
//     map<string , string> languages;

//     languages["py"] = "python";
//     languages["cpp"] = "c plus plus";
//     languages["js"] = "javascript";
//     languages["rb"] = "ruby";
//     languages["rb"] = "ruby -one";

//     languages.insert(make_pair("pl","perl"));

//     for (auto &val : languages)
//     {
//         cout<< val.first << ": " << val.second << endl;
//     }
//     return 0; 

// }

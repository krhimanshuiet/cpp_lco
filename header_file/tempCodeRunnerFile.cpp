int main(int argc, char const *argv[])
{
    const int a = 5;
    int * const  ptr;
    ptr = &a;
    ++(*ptr); 
    cout<<a<<endl;
    return 0;
}

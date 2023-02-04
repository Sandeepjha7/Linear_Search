#include<iostream>
using namespace std;

int Search(int array[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
       if(array[i]==key)
        return 1;
    }

    return 0;
    
}

int main()
{
    int arr[10]={28,48,3,-32,4,83,5,8,-37,1};

    cout<< "Enter the element to search for"<<endl;
    int key;
    cin>>key;

    bool found = Search(arr,10,key);

    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is absent"<<endl;
    }

    return 0;
}
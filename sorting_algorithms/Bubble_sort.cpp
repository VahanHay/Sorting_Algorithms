////bubble sort for bigger to less
#include <iostream>









template <int N>
void foo(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 13 +(-6) ;
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}

template <int N>
void bubble_sort_bigger_to_less_static(int(&arr)[N])
{
    for(int i = 0 ; i < N - 1 ; ++i)
    {
        for(int j = N - 1 ; j >= i+1 ; --j)
        {
            if(arr[j] > arr[j-1])
            {
                int tmp = arr[j] ;
                arr[j] = arr[j-1] ;
                arr[j-1] = tmp ;
            }
        }
    }
}


template <int N>
void test(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
       
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}


void foo_heap(int*&arr, int N)
{
    for(int i = 0 ; i < N ; ++i)
    {
        arr[i] = rand() % 13 +(-6) ;
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}










void bubble_sort_bigger_to_less_heap(int*&arr ,int N)
{
    for(int i = 0 ; i < N - 1 ; ++i)
    {
        for(int j = N - 1 ; j >= i+1 ; --j)
        {
            if(arr[j] > arr[j-1])
            {
                int tmp = arr[j] ;
                arr[j] = arr[j-1] ;
                arr[j-1] = tmp ;
            }
        }
    }
}

void test(int*&arr ,int N)
{
    for(int i = 0 ; i < N ; ++i)
    {
       
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}


int main()
{
    const int size = 10;
    int arr[size] = {0};
    foo(arr) ; 
    bubble_sort_bigger_to_less_static(arr);
      test(arr);
      std::cout << "Now for heap ))" << std::endl ;
    int size_heap = 5 ;
    int * harr = new int[size_heap];
    foo_heap(harr,size_heap);
    bubble_sort_bigger_to_less_heap(harr,size_heap) ;
    test(harr,size_heap);


  
}
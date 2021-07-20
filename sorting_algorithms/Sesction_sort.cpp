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
void selection_sort(int(&arr)[N])
{
    for(int i = 0 ; i < N ; ++i)
    {
        int k = i ;
        for(int j = i ; j < N ; ++j)
        {
            if(arr[k] < arr[j])
            {
                k = j ;
            }
        }
        int tmp = arr[i] ;
        arr[i] = arr[k] ;
        arr[k] = tmp ; 
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
void selsection_sort_bigger_to_less_heap(int*& arr, int N) 
{

    for(int i = 0 ; i < N ; ++i)
    {
        int k = i ;
        for(int j = i ; j < N ; ++j)
        {
            if(arr[k] < arr[j])
            {
                k = j ;
            }
        }
        int tmp = arr[i] ;
        arr[i] = arr[k] ;
        arr[k] = tmp ; 
    }
}


void test_heap(int*& arr, int N)
{
    for(int i = 0 ; i < N ; ++i)
    {
      
        
        std::cout << arr[i] << " " ; 
    }
    std::cout << std::endl;
}






int main()
{
    const int size = 10 ;
    int arr[size] = {0} ;
    foo(arr) ;
    selection_sort(arr);
    test(arr) ;
    std::cout << "Now for heap ))" << std::endl ;
    int size_heap = 5 ;
    int * harr = new int[size_heap];
    foo_heap(harr,size_heap);
    selsection_sort_bigger_to_less_heap(harr,size_heap) ;
    test_heap(harr,size_heap);
}
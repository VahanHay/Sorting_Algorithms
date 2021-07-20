//insertion sort for bigger to less
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
void insertion_sort_bigger_to_less_static(int(&arr)[N])
{
    for(int i = 1 ; i < N ; ++i)
    {
        int j = i - 1 ;
        int key = arr[i] ;
        while (j >= 0 and arr[j] < key)
        {
              arr[j+1] = arr[j] ;
              --j;
        }
        arr[j+1] = key ;
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

void foo_heap(int*&arr,int size_of_heap_arr)
{
    for(int i = 0 ; i < size_of_heap_arr ; ++i)
    {
        arr[i]= rand() % 15 ;
        std::cout << arr[i] << " " ; 
    }
      std::cout << std::endl;

}

void insertion_sort_bigger_to_less_heap(int*&arr,int size_of_heap_arr)
{
    for(int i = 1 ; i < size_of_heap_arr ; ++i)
    {
        int j = i - 1 ;
        int key = arr[i] ;
        while (j >= 0 and arr[j] < key)
        {
              arr[j+1] = arr[j] ;
              --j;
        }
        arr[j+1] = key ;
    }
}




int main()
{
    
    const int size = 10 ; 
    int arr[size] = {0} ;
    foo(arr) ; //
    insertion_sort_bigger_to_less_static(arr);
    test(arr) ;
    std::cout << "Now for heap ))" << std::endl ;
    int size_of_heap_arr = 5 ;
    int* harr = new int[size_of_heap_arr] ;
    foo_heap(harr,size_of_heap_arr);
    insertion_sort_bigger_to_less_heap(harr,size_of_heap_arr);

    for(int i = 0 ; i < size_of_heap_arr ; ++i)
    {
       
        std::cout << harr[i] << " " ; 
    }
      std::cout << std::endl;

}
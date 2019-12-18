#include <iostream>
#include <iterator> 
#include <cmath>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

template <typename T>

const T&  Median(const T& first,const T& last, int n)
{
    int size = 0;
    int check = 0;
    auto count = 0;
    
    for(auto it = first; (it != last); it++)
    {   
        size++;
    }
    
    check = size % n ;
    
    if(check == 0 && n != 1)
    {
        for(auto it = first; (it != last); it+=n)
        {
           sort(it,it+n);
        }
    
    if(n % 2 != 0)
    {
        for(auto it = first; (it != last); it+=n)
        {
            auto median = *(it+n/2);
            auto it1 = (first + count) ;
            *it1=median;
            count++;
        }
		
    }
    
    if(n % 2 == 0)
    {
        for(auto it = first; (it != last); it+=n)
        {
            auto median1 = std::accumulate((it+(n/2)-1),(it+(n/2)+1),0) / 2;
            auto it2 = (first + count);
            *it2=median1;
            count++;
            
        }
		auto it = (first+n);
    }
    
    for(auto it = first; (it != (first+(size/n))); it++)
    {   
        cout << *(it) << " ";
    }
	
    }
    
    else 
    {
        for(auto it = first; (it != last); it++)
        {   
         cout << *(it) << " ";
        }
    }
    
     return (first);
  
}


template <typename T>

const T& Transpose(const T& first , const T& last)
{
    auto size = 0 , count = 0 ;
    
    for(auto it = first; (it != last); it++)
    {   
        size++;
    }
    
    if(size % 2 == 0)
    {
        for(auto it = first; (it != last); it+=2)
        {
           std::swap(*it,*(it+1));
        
        }
    }
    
    else 
    {
        for(auto it = first; (it != last-1); it+=2)
        {
           std::swap(*it,*(it+1));
           
        }
    }
    
    
    
    if(size % 2 == 0)
    {
        return last;
    }
    static const auto ah = (last-1);
    return ah;
    
    
}


template <typename T,typename S>

const T& Transformations(const T& first , const T& last,S&& lambada)
{
    
    auto size = 0,count = 0;
    
    for(auto it = first; (it != last); it++)
    {   
        size++;
    }
    
    if(size % 2 != 0)
    {
        return last;
    }
    
    else
    {
        
        for(auto it = first; (it != last); it+=2)
        {
             auto ans = lambada(*(it),*(it+1));
             auto it1 = (first + count) ;
             *it1=ans;
             count++;
        }
        for(auto it = first; (it != (first+(size/2))); it++)
        {
            cout << *(it) <<" ";
        }
        
        return first;
    }
    
    
    
    
    
    
    
}
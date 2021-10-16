// Tanaka Nhenga

#include <stdio.h>    
     
int main()    
{    
    // entries array created 
    int entries[] = {1,2,3,1,2,3,1,2,3,4,5,8,11,13,14,14};    
        
    // entries len   
    int len = sizeof(entries)/sizeof(entries[0]);    
        
    // array 'occur' tracks repetition of integers  
    int occur[len];    
    int visited = -1;    
        
    for (int i = 0; i < len; i++)
    {    
        int count = 1;    
        for (int j = i+1; j < len; j++)
        {    
            if (entries[i] == entries[j])
            {    
                count++;    
                // Prevents same element being looked at  
                occur[j] = visited;    
            }    
        }    
        
        if (occur[i] != visited)
        {
            occur[i] = count;
        }
                
    }    
        
    // Print occurances of integers to user       
    for (int i = 0; i < len; i++)
    {    
        if (occur[i] != visited)
        {    
            printf("The number '%d'", entries[i]);    
            printf(" has appeared a total of %d", occur[i]);
            printf(" time(s)! \n");  
        }    
    }      
    return 0;    
}


#include<iostream>
#include<stdio.h>


void funcSort (int arr[] ,int sortFunc, int arraySize)
{
    int tempVar = 0;
    /*This is my sort Function. Takes in an array
     integer of the sortFunc (which is based on user choice, and the array size (integer)
     within this sorting Function, sorting will take place, which why its a sorting function*/
    
    
    //Sorting function for descending order
    /*  Example 4 < 6   so 4 is less than 6
     tempVar=6       the temporary value saves the number 6
     arr[j] = 4      the index of j will now take the value of 4
     arr[i] = tempVar now the index of i will take the value of 6
     before : 4, 6, etc >>> after = 6, 4, etc basically changing the order into descending
     */
    if( sortFunc == 1)
    {
        for(int i = 0; i < arraySize; i++)
        {
            for(int j = i; j < arraySize; j++)
            {
                if(arr[i] < arr[j])
                {
                    tempVar = arr[j];
                    arr[j] = arr[i];
                    arr[i] = tempVar;
                    
                    
                }
            }
        }
    }
    
    
    //Sorting function for ascending order
    /*
     Example 7 > 3 so 7 is obviously greater than 3
     So the temporary value will take in the number 7 in order to use it for later, and not lose it!
     Since we want it in ascending order, we want the smaller number to go first. In this case 3.
     Since we're going from left to right, we want the number 7 to go after 3. So the index of j will be 7.
     Before: 7, 3, etc >> after = 3, 7, etc in ascending order
     */
    if (sortFunc == 0)
    {
        for(int i = 0; i <arraySize; i++)
        {
            for(int j = i; j < arraySize; j++)
            {
                if( arr[i] > arr[j])
                {
                    tempVar = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tempVar;
                }
            }
        }
    }
    
    
    
    
    
}//closes structure



int main()
{
    int arraySize;
    int sortFunc;
    
    
    std::cout<<"Enter the size of the array: ";
    std::cin>>arraySize;
    
    if(arraySize <= 0)
    {
        std::cout<<"ERROR: you entered an incorrect value for the array size!";
        std::cout<<std::endl;
    }//ends if statement
    
    
    else
    {
        std::cout<<"Enter the numbers in the array, separated by a space, and press enter: ";
        
        int arr[arraySize];
        
        for (int i = 0; i< arraySize; i++)
        {
            scanf("%d" ,&arr[i]);
            
        }//closes for loop
        
        
        std::cout<<"Sort in ascending(0) or descending(1) order? ";  //user chooses which function they desire
        std::cin>> sortFunc;
        
      
       
        
        if(sortFunc == 0)                                    // In this case the user chose the ascending function
        {
            std::cout<<"This is the sorted array in ascending order: ";
            
            funcSort( arr, sortFunc, arraySize);             //Since the ascending function is not within the main function
                                                            //We must call it. -> function ( with variables as arguments within the parameter)
            for(int i = 0; i< arraySize; i++)               // Keep in mind that data types aren't placed before the variables again
            {
                std::cout<< arr[i] << " ";                       //As we previously learned: arrays can only be printed out by a for-loop process
            }//closes this for loop
            
        } //closes if statement
        
        
        
        if(sortFunc == 1)
        {
            std::cout<<"This is the sorted array in descending order: ";
            
            funcSort( arr, sortFunc, arraySize);
            
            for (int i = 0; i < arraySize; i++)
            {
                std:: cout<< arr[i] <<" ";
           
            }//closes for loop
        }//closes this if statement
        
        
        
        
    }//closes else statement
    return 0;
}//closes main
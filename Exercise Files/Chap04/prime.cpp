#include <cstdio>

int main()
{
 bool is_prime = false;
 
 for(unsigned int number = 2; number < 100; ++number){
        is_prime = true;
        
        for(unsigned int divisible = 2; divisible < number; ++divisible){
              if(number % divisible == 0){
                  is_prime = false;
                  break;
            }
        }
        
        if(is_prime) printf("%d\n", number);
  }
    
}

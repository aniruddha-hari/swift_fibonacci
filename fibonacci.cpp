// Generate  n Fibonacci numbers & print a message based on the output value
#include<iostream>
 
long long int Fibonacci(int count)
{
int  first(0), second(1), next(1);  

   for(int i = 2; i <= count; i++)
   {
      next = first + second; 
      first = second;
      second = next; 
   }
   return next;
}
      
      
      
// Seperate function to check if no is prime
bool isPrime(int n){

    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i=3; (i*i)<=n; i+=2){
        if(n % i == 0 ) return false;
    }
    return true;

}


    
int main()
{
   int count;
   long long int ans;
   std::cout << "Enter the number of terms" << "\n";
   std::cin >> count;
   ans = Fibonacci(count);
   std::cout << "Sum total=" << ans << "\n";
   if(ans % 3 == 0)
     std::cout << "Buzz";
   else if(ans % 5 ==0)
    std::cout << "Fizz";
   else if(ans % 15 ==0)
    std::cout << "FizzBuzz";
   else if(isPrime(count))
    std::cout << "BuzzFizz";
   else
    std::cout << ans << " "; 
return 0;
}

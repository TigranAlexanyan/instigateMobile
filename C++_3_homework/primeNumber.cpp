#include <iostream>


bool isPrime(int n, int i = 2){
    if (n <= 2)
        return false;
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
 
    return isPrime(n, i + 1);
}

int main(){
    int n;
    std::cout << "Please enter number: ";
    std::cin >> n;
    if (isPrime(n))
      std::cout << "Yes " <<  n << " is prime number" << "\n";
    else
       std::cout << "No " << n << " is not a prime number" << "\n"; 
    return 0;
}

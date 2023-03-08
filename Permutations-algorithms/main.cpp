#include <iostream>
#include "Exercises.h"
#include <vector>
#include <algorithm>

bool is_prime(int n){
int i;
bool is_prime = true;
if (n == 0 || n == 1) {
is_prime = false;
}


for (i = 2; i <= n/2; ++i) {
if (n % i == 0)
return false;
}

return true;
}
int how_many_primes(){
    int n;
    std::cout<<"Enter the superior limit";
    std::cin>>n;
    int k=0;
    for(int i=1;i<=n;i++)
        if(is_prime(i)==true)
            k++;
    return k-1;
}
int main() {
    Exercises exercises;


    //Is permutation
 //  exercises.is_permutation();

    //Next Permutation
//exercises.NextPermutation();

          //Previous Permutation
//    exercises.PreviousPermutation();

//        Inverse of a permutation
//    exercises.Inverse_of_a_Permutation();

//rank of permutation:
//    int n;
//        std::cin>>n;
//        int a[n];
//        for(int i=0;i<n;i++)
//        {
//            std::cin>>a[i];
//        }
//        std::cout<<exercises.RankofPermutation(n,a);

     //Unrank permutation
//exercises.UnrankPermutation();
std::cout<<how_many_primes();
}
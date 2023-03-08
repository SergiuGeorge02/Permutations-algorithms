#include "Exercises.h"
#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
Exercises::Exercises()
{
    //default
}

Exercises::~Exercises()
{
    //default
}
//exercise from lecture 2;
void Exercises::is_permutation(){
    int n,x;
    std::cout<<"Please insert the number of numbers which will be in the squence"<<std::endl;
    std::cin>>n;
    std::set<int> permutationset;
    int maxim=-1;
    for(int i=0;i<n;i++){
        std::cin>>x;
        permutationset.insert(x);
        if(x>maxim)
            maxim=x;
    }
    if(permutationset.size()==n && maxim==n)
        std::cout<<"The squence of numbers is a permutation"<<std::endl;
    else
        std::cout<<"The sequence of numbers is not a permutation"<<std::endl;


}
//exercise 2 from laboratory 2
long long int Exercises::factorial(){
    int n;
    std::cout<<"Please insert the number on which u want to calculate the factorial"<<std::endl;
    std::cout<<"The number should be lower or equal with 20"<<std::endl;
    std::cin>>n;
    if(n>20){
        throw std::invalid_argument("The number is too big");

    }
    else{
        long long int p=1;
        for(int i=2;i<=n;i++)
            p*=i;
        return p;
    }

}
//next permutation
void Exercises::NextPermutation() {
    int n,x;
    std::vector<int> v;
    std::cout<<"Please insert the number of elements you want to have in the permutation"<<std::endl;
    std::cin>>n;
    std::cout<<"Please insert the permutation on which you want to generate the next lexicographic permutation:"<<std::endl;
    for(int f=0;f<n;f++)
    {
        std::cin>>x;
        v.push_back(x);
    }

    int j,i;
    for(i=n-2;i>=0;i--){
        if(v[i]<v[i+1])
            break;
    }
    if(i<0)
        std::cout<<"No more next permutations";
    else
    {
        for(j=n-1;j>i;j--)
            if(v[j]>v[i])
                break;
    }
    std::swap(v[i],v[j]);
    std::reverse(v.begin()+i+1,v.end());
    std::cout<<"< ";
    for(int k:v)
        std::cout<<k<<" ";


    std::cout<<">"<<std::endl;
}
int Exercises::factorialpermutation(int n) {
    int p=1;
    for(int i=2;i<=n;i++)
        p*=i;
    return p;

}
int Exercises::RankofPermutation(int n, int a[]) {
    {
        if (n==1)
            return 0;
        int v[n];
        for (int i=1; i<n; i++)
        {
            if (a[i]>a[0])
                v[i-1]=a[i]-1;
            else
                v[i-1]=a[i];
        }
        return (a[0]-1) * factorialpermutation(n-1) + RankofPermutation(n-1, v);
    }
}
void Exercises::Inverse_of_a_Permutation() {
    int n,x;
    std::cout<<"Please insert the number of elements which your permutation has:"<<std::endl;
    std::cin>>n;
    int a[n],v[n];
    std::cout<<"Please insert the initial permutation"<<std::endl;
    for(int i=1;i<=n;i++){
        std::cin>>x;
        a[i]=x;
    }
    for(int i=1;i<=n;i++)
        v[a[i]]=i;

    std::cout<<"The inverse of the permutation is: "<<std::endl;
    std::cout<<"< ";
    for(int i=1;i<=n;i++)
        std::cout<<v[i]<<' ';

    std::cout<<">"<<std::endl;
}
void Exercises::PreviousPermutation() {
    int n,x;
    std::vector<int> v;
    std::cout<<"Please insert the number of elements you want to have in the permutation"<<std::endl;
    std::cin>>n;
    std::cout<<"Please insert the permutation on which you want to generate the previous lexicographic permutation:"<<std::endl;
    for(int f=0;f<n;f++)
    {
        std::cin>>x;
        v.push_back(x);
    }
    n=v.size();
    int i,j;
    for(i=n-2;i>=0;i--)
        if(v[i]>v[i+1])
            break;
    if(i<0)
        std::cout<<"No previous permutation";
    else{

        for(j=n-1;j>i;j--)
            if(v[j]<v[i])
                break;

    }
    std::swap(v[i],v[j]);
    std::reverse(v.begin()+i+1,v.end());
    std::cout<<"< ";
    for(int k:v)
        std::cout<<k<<" ";


    std::cout<<">"<<std::endl;


}


void Exercises::UnrankPermutation() {
    int n, rank, x;
    std::cout << "Please introduce the number of elements in the permutation" << std::endl;
    std::cin >> n;
    int a[n];
    std::cout<<"Please introduce the sequence of numbers with the number of elements introduced above"<<std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> x;
        a[i] = x;
    }
    sortvec(a, n);
    std::cout << std::endl;
    std::cout << "Please introduce the rank of the permutation" << std::endl;
    std::cin >> rank;

    while (RankofPermutation(n, a) < rank) {
        std::next_permutation(a + 0, a + n);
    }

    std::cout << "The permutation is: " << std::endl;
    std::cout << "<";
    for (int i = 0; i < n; i++)
        std::cout << a[i] << " ";
    std::cout << ">";


}

void Exercises::sortvec(int a[],int n) {
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(a[j]<a[i]){
                int aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
}

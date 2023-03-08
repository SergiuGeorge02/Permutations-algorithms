#ifndef EXERCISES_H
#define EXERCISES_H
#include <vector>

class Exercises {
public:
    Exercises();
    virtual ~Exercises();

    //exercise from lecture 2
    void is_permutation();

    //exercise 2 from laboratory 2
    long long int factorial();

    //next permutation problem
    void NextPermutation();

    //rank of a permutation
    int factorialpermutation(int);
    int RankofPermutation (int , int[]);
    //inverse of a permutation exercises
    void Inverse_of_a_Permutation();
    //previous permutation exercise
    void PreviousPermutation();
//Unrank a permutation
    void UnrankPermutation();
//private:
    void sortvec(int [],int );



};
#endif // EXERCISES_H
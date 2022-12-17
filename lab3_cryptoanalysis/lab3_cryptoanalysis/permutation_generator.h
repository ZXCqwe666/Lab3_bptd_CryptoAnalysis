#pragma once

#include <stdio.h>
#include <vector>

class PermutationGenerator
{
public:
    static std::vector<int> permutations;
    static int permute_size;

private:
    static void swap(int* variation, int a, int b);
    static void h(int* variation, int n, int size);
    static void heap(int* variation, int size);

public:
    static void print_permutations();
    static void generate_permutations(int size);
};

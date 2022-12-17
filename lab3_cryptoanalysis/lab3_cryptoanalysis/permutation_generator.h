#pragma once

#include <stdio.h>
#include <string>
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
    static bool generate_permutations(int size);
    static void permute_string_collums(int id, int cols, int rows, std::string& str_target, const std::string& str_source);
    static void print_string_matrix(int cols, int rows, const std::string& str_source);
};

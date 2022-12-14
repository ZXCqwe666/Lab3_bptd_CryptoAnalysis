#include "permutation_generator.h"

std::vector<int> PermutationGenerator::permutations;
int PermutationGenerator::permute_size;

void PermutationGenerator::swap(int* variation, int a, int b)
{
    int t = variation[a];
    variation[a] = variation[b];
    variation[b] = t;
}

void PermutationGenerator::h(int* variation, int n, int size)
{
    int i;

    for (i = 0; ; i++)
    {
        if (n > 2)
            h(variation, n - 1, size);

        if (i == n - 1)
            break;

        if (n % 2 == 0)
        {
            swap(variation, i, n - 1);
        }
        else
        {
            swap(variation, 0, n - 1);
        }

        for (int i = 0; i < size; i++)
        {
            permutations.push_back(variation[i]);
        }
    }
}

void PermutationGenerator::heap(int* variation, int size)
{
    if (size < 2)
    {
        return;
    }

    for (int i = 0; i < size; i++)
    {
        permutations.push_back(variation[i]);
    }

    h(variation, size, size);
}

void PermutationGenerator::print_permutations()
{
    for (int i = 0; i < permutations.size(); i++)
    {
        if (i % permute_size == 0) printf("\n");
        printf("%i ", permutations[i]);
    }

    printf("\n");
}

bool PermutationGenerator::generate_permutations(int size)
{
    permutations.clear();
    permute_size = size;

    if (size > 10)
    {
        printf("[ERROR] Cant generate permutation of SIZE > 10");
        return false;
    }

    int* variation = new int[size];
    for (int i = 0; i < size; i++)
        variation[i] = i;

    heap(variation, size);
    return true;
}

void PermutationGenerator::permute_string_collums(int id, int cols, int rows, std::string& str_target, const std::string& str_source)
{
    for (int row = 0; row < rows; row++)
    {
        int word_index = row * cols;

        for (int col = 0; col < cols; col++)
        {
            int perm_value = permutations[id * cols + col];
            str_target[word_index + col] = str_source[word_index + perm_value];
        }
    }
}

void PermutationGenerator::print_string_matrix(int cols, int rows, const std::string& str_source)
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        printf("%c ", str_source[row * cols + col]);
        printf("\n");
    }
    printf("\n");
}
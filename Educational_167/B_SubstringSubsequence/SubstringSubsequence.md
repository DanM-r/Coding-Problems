# B. Substring and Subsequence

**time limit per test**: 2 seconds
**memory limit per test**: 256 megabytes

You are given two strings a and b, both consisting of lowercase Latin letters.

A subsequence of a string is a string which can be obtained by removing several (possibly
zero) characters from the original string.

A substring of a string is a contiguous subsequence of that string.
For example, consider the string abaca:

    a, b, c, ab, aa, ac, ba, bc, aba, abc, aac, bac and abac are its subsequences;
    a, b, c, ab, ba, ac, aba, bac and abac are its substrings.

Your task is to calculate the minimum possible length of the string that contains
a as a substring and b as a subsequence.

## Input

The first line contains a single integer t (1≤t≤103) — the number of test cases.

a : substring
The first line of each test case contains a string $´a (1≤|a|≤100)´$, consisting of lowercase Latin letters.

b : subsequence
The second line of each test case contains a string $´b (1≤|b|≤100)´$, consisting of lowercase Latin letters.

## Output

For each test case, print a single integer — the minimum possible length of the string that contains a
as a substring and b as a subsequence.

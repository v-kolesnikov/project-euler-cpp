/*!
    \file main.cpp
    \brief Problem #1. Multiples of 3 and 5

    If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
    The sum of these multiples is 23.
    Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

/*!
 * \brief Find of all the multiples of divisors below limit.
 * \param divs Pair of divisors
 * \param limit Limit
 * \return Vector of found numbers
 */

vector<int> getMultiples(const pair<int, int> &divs, const int limit)
{
    vector<int> multiples;
    for (int i = 1; i < limit; ++i) {
        if ( !(i % divs.first) || !(i % divs.second) ) {
            multiples.push_back(i);
        }
    }

    return multiples;
}

int main()
{
    int limit = 1000;
    pair<int, int> divisors(3, 5);

    vector<int> result = getMultiples(divisors, limit);

    cout << accumulate(result.begin(), result.end(), 0) << endl;

    return 0;
}


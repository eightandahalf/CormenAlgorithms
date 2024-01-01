This project demonstrate realisation of merge sort algorithm

Many useful algorithms are recursive in structure: to solve a given problem, they
call themselves recursively one or more times to deal with closely related subproblems. 
These algorithms typically follow a divide-and-conquer approach: they
break the problem into several subproblems that are similar to the original problem but 
smaller in size, solve the subproblems recursively, and then combine these
solutions to create a solution to the original problem.

The divide-and-conquer paradigm involves three steps at each level of the recursion:
    1. Divide the problem into a number of subproblems that are smaller instances of the
same problem.
    2. Conquer the subproblems by solving them recursively. If the subproblem sizes are
small enough, however, just solve the subproblems in a straightforward manner.
    3. Combine the solutions to the subproblems into the solution for the original problem.

The merge sort algorithm closely follows the divide-and-conquer paradigm. Intuitively, it operates as follows.
    1. Divide: Divide the n-element sequence to be sorted into two subsequences of n/2
elements each.
    2. Conquer: Sort the two subsequences recursively using merge sort.
    3. Combine: Merge the two sorted subsequences to produce the sorted answer.

The recursion “bottoms out” when the sequence to be sorted has length 1, in which
case there is no work to be done, since every sequence of length 1 is already in
sorted order.

The key operation of the merge sort algorithm is the merging of two sorted
sequences in the “combine” step. We merge by calling an auxiliary procedure
MERGE(A, p, q, r), where A is an array and p, q, and r are indices into the array
such that p <= q < r. The procedure assumes that the subarrays A[p...q] and
A[q + 1..r] are in sorted order. It merges them to form a single sorted subarray
that replaces the current subarray A[p..r].

Our MERGE procedure takes time teta(n), where n = r - p + 1 is the total
number of elements being merged, and it works as follows. Returning to our 
cardplaying motif, suppose we have two piles of cards face up on a table. Each pile is
sorted, with the smallest cards on top. We wish to merge the two piles into a single
sorted output pile, which is to be face down on the table. Our basic step consists
of choosing the smaller of the two cards on top of the face-up piles, removing it
from its pile (which exposes a new top card), and placing this card face down onto
the output pile. We repeat this step until one input pile is empty, at which time
we just take the remaining input pile and place it face down onto the output pile.
Computationally, each basic step takes constant time, since we are comparing just
the two top cards. Since we perform at most n basic steps, merging takes teta(n)
time.

The code in main.c implements the above idea, but with an additional
twist that avoids having to check whether either pile is empty in each basic step.
We place on the bottom of each pile a sentinel card, which contains a special value
that we use to simplify our code. Here, we use 1000 as the sentinel value, so that
whenever a card with 1000 is exposed, it cannot be the smaller card unless both piles
have their sentinel cards exposed. But once that happens, all the nonsentinel cards
have already been placed onto the output pile. Since we know in advance that
exactly r - p + 1 cards will be placed onto the output pile, we can stop once we
have performed that many basic steps.
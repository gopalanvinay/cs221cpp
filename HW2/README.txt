
The estimates for 10, 100, 1000 and 10000 are:
    
    3.52
    3.1812
    3.14554
    3.14199


Since there are two for loops, the time complexity for the algorithm are O(n^2)

The times for 10, 100, 1000 and 10000 are:

    0m0.465s
    0m0.779s
    0m0.943s
    0m2.124s

These times match our expectations, as the 'real' time (without accounting for time spent typing the input) increases quadratically instead of linearly.


After running the function at compile time, the values for 10, 100 and 100 are:
    3.52
    3.1812
    3.14554

And the times are:
    0m0.377s
    0m0.522s
    0m0.767s

Since the function now runs during compile time, the time taken for the program is lesser and the program runs faster. The time still increases quadratically as predicted by the O(n^2) complexity.

The values of our Pi estimates do not change since the underlying math has no relation to when the function is run.


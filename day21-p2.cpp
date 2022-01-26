/* You will be given a area of a matrix. Where the matrix has a
value 1/0. 1 represent the land and 0 represents the water.

The matrix is connected both row and column wise not diagonally. 
the matrix is surronded by water completely and there is exactly 1 island (i.e, 1 or more connected land cells)

The island doesn't have "lakes", meaning the water inside isn't connected to the
water around the island. One cell is a square with side length 1. The matrix is
rectangular,. we have to find  perimeter of the island.


input=4 4
0 1 0 0
1 1 1 0
0 1 0 0
1 1 0 0
output=16

Explanation- The perimeter is the 16 yellow stripes in the image above.
 */
#include <bits/stdc++.h>
using namespace std;

int connectedIslands()
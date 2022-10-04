import math
import os
import random
import re
import sys

#
# Complete the 'diagonalDifference' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY arr as parameter.
#

def diagonalDifference(arr):
    # Write your code here
    left_diag = 0
    right_diag = 0
    
    i = 0
    j = len(arr) - 1
    
    while i != len(arr):
        while j >= 0:
            left_diag += arr[i][j]
            j -= 1
            i += 1
            
    i = len(arr) - 1 
    j = len(arr) - 1
    
    while i >= 0:
        while j >= 0:
            right_diag += arr[i-1][j-1]
            j -= 1
            i -= 1
    
    return abs(left_diag - right_diag)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)

    fptr.write(str(result) + '\n')

    fptr.close()

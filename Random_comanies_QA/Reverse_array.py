"""Given an array (or string), the task is to reverse the array/string.
Examples : 
 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}
"""
def revarray(A, start ,end):
    while(start < end):
        A[start], A[end] = A[end], A[start]
        start += 1
        end -= 1


if __name__ == "__main__":
    A = [1 ,2 ,3,4,5,6]
    print(A)
    revarray(A,0,5)
    print("\nReverse array is :\n")
    print(A)

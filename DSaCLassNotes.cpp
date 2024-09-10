/*
                                                        08-Aug-2024
                                                        
heap sort is a comparison based sorting algo that uses a binary head data strct. The Time complx of heap sort, like many sorting algos 
is often analyed in terms of best case, avg case and worst case. However, for heap sort, the time complx is the same for all three cases*/

/*
parent(i)
    return[i/2]
left(i)
    return(2i)
right(2i+1)

Max-Heapify(A,i)
l = left(i)
r = right(i)
*/

/*
###  How to find largest element of the tree
if l<= A.heap-size and A[l]>A[i]
    largest = 1;
else
    kargest = i;

if r<= A.heap-size and A[r]>A[largest]
    largest = r;
if largest /=(not equal) i
    exchange A[i] with A[largest]

*/
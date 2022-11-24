/* selection sort- selction of minimum element from unsorted array and then compare it with first element and swap them.
for Eg-    23 21 12 45 56 2 - unsorted array
using selection sort sort it in ascending order
2 is minimum element swap it with first element
  ---  2 21 12 45 56 23 --------- 2 <-> 23
    now comapare again min element of unsorted array with first element of unsorted array
  ---   | 2| 12 21 45 56 23  -----12 is smallest in unsorted array swap it witj first element  -------12 <->23
     
     ---- | 2| |12| 21 45 56 23 ---------- now, 21 is minimumelement in unsorted array swap it with unsorted array first element
     ----- | 2 | |12| |21| 23 56 45
     ------- |2| |12| |21| |23| 56 45  ---- 23 <->45
     ------ |2| |12| |21| |23| 45 56  ---- 45 <->56
     ------ |2| |12| |21| |23||45| |56|--------------- sorted array in ascending order.

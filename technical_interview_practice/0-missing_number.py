#!/usr/bin/python3
"""An algorithm that finds a missing number in a unordered
array of 1 to N elements"""


def missing_number(array, n):
    """Using sort to put the elements of the array in order"""

    array.sort()
    print(array)

    previous_number = 0;
    next_number = 0;
    missing_number = 0;

    import pdb; pdb.set_trace()
    while (array):
        next_number += 1
        print("Now the next_number is {}".format(array[next_number]))
        if (array[next_number] ==  array[previous_number] + 1):
            previous_number += 1
            print("Now the previous_number is {}".format(array[previous_number]))
            continue;
        else:
            missing_number = array[previous_number] + 1
            break;
        return missing_number

#!/usr/bin/python3
'''Problem: You have n number of locked boxes in front of you.
Each box is numbered sequentially from 0 to n - 1 and
each box may contain keys to the other boxes.
Write a method that determines if all the boxes can be opened.'''


def canUnlockAll(boxes):
    if len(boxes) == 0:
        return False

    opened_boxes = [0, ]
    number_of_boxes = len(boxes) - 1

    '''iterate through the outer list, and inner lists.'''
    for box in boxes:
        if len(box) == 0:
            return False
        for key in box:
            if key > 0 and key <= number_of_boxes:
                if key in opened_boxes:
                    continue
                else:
                    opened_boxes.append(key)
                    if len(opened_boxes) == len(boxes):
                        return True
    return False

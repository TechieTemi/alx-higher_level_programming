#!/usr/bin/python3
def multiply_list_map(my_list=[], number=0):
    j = map(lambda value: value * number, my_list)
    new_list = list(j)
    return new_list

#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    #make the list in order first usin list()
    keys = list(a_dictionary)
    #sort the list after
    keys.sort()
    for i in keys:
        print("{}: {}".format(i, a_dictionary.get(i)))


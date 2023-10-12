#!/usr/bin/python3

def print_sorted_dictionary(a_dictionary):
    # Make the list in order first using list()
    keys = list(a_dictionary)
    keys.sort()
    for i in keys:
        print("{}: {}".format(i, a_dictionary.get(i)))


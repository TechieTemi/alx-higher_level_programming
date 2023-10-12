#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    new_dictionary = {}
    for keys in a_dictionary:
        value =  a_dictionary[keys]
        new_dictionary[keys] = value * 2
    return new_dictionary

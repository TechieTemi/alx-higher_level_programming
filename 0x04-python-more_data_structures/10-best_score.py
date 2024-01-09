#!/usr/bin/python3
def best_score(a_dictionary):
    if not a_dictionary:
        return None
    best_value = 0
    best_key = 0
    for key, value in a_dictionary.items():
        if value > best_value:
            best_value = value
            best_key = key
            # since we will be using the key to access the value 
            #of a dictionary, there is a need for us to 
            # return best_key
    return best_key

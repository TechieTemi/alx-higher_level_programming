#!/usr/bin/python3

"""Defines an integer addition function.
It return the integer addition of a and b.
It can also be an integer and a floating value.
String should not be used with it.
An integer argument or float argument can also be passed to it."""


def add_integer(a, b=98):
    """Return the sum of two integers or floats as integers

    Args:
        a: first argument
        b: second argument
    Returns:
        Sum of the two arguments
    """
    if ((not isinstance(a, int) and not isinstance(a, float))):
        raise TypeError("a must be an integer")
    if ((not isinstance(b, int) and not isinstance(b, float))):
        raise TypeError("b must be an integer")
    return (int(a) + int(b))

    if __name__ == "__main__":
        import doctest
        doctest.testmod()

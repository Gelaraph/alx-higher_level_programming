#!/usr/bin/python3

"""Print the alphabet in lowercase, not followed by a new line."""

for letter in range(97, 123):
    print("{:s}".format(chr(letter + ord("a"))), end="")

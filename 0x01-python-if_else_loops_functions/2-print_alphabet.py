#!/usr/bin/python3

"""Print the alphabet in lowercase, not followed by a new line."""

for char in range(26):
    print("{:s}".format(chr(char + ord("a"))), end="")

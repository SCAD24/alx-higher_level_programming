#!/usr/bin/python3

def search_replace(my_list, search, replace):
    """Replace values in a list"""
    new_list = [replace if number == search else number for number in my_list]
    return (new_list)

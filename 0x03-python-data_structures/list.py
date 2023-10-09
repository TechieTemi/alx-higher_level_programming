#!/usr/bin/python3
mylist = [3, 6, 7, 8, "Jane", "Samuel", 6.8, 8.9, True, False]
list_list = ["I", "cant", "hear", "you", 608, 8506, 508, 10.98, 5.87]
mylist.append("Im here everytime")
list_list.insert(3, "Jane is having network issue")
name = mylist[5]
lis = list(list_list)
mylist[5] = " guess what!!!, i just prank you"
mylist.remove(mylist[1])   
mylist.pop()
print("{}".format(len(mylist)))
print("{}".format(mylist))
print(type(mylist))
print("lis {}".format(lis))
print("The first element in mylist is{}".format(mylist[0]))
print("My name is {}".format(name))
print("Accessing my last list using a negative number {}".format(mylist[-1]))

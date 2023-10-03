#!/usr/bin/python3
for alphabet in range(97, 123):
    if chr(alphabet) == 'e' or chr(alphabet)== 'q':
        continue
    print("{}". format(chr(alphabet)), end='')	

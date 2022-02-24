n,k = [int(x) for x in input().split(sep = " ")]

if n > 2**k:
    print("You will become a flying monkey!")
else:
    print("Your wish is granted!")
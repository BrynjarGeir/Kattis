number = input()

i_number = int(number, 8)

h = hex(i_number)[2:]

ans = ""

for i in range(len(h)):
    ans = ans + h[i].upper()

print(ans)
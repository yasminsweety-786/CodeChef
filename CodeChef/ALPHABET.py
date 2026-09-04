# cook your dish here
s= input().strip()
n= int(input())
know = set(s)

for _ in range(n):
    word = input().strip()
    if all (ch in know for ch in word):
        print("Yes")
    else:
        print("No")
     
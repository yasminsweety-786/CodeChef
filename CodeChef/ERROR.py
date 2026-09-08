# cook your dish here
T = int(input())
for _ in range(T):
    s = input().strip()
    if "010" in s or "101" in s:
        print("Good")
    else:
        print("Bad")

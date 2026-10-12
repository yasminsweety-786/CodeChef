# Number of test cases
T = int(input().strip())

for _ in range(T):
    X = int(input().strip())
    if X >= 2000:
        print("YES")
    else:
        print("NO")

# Read number of test cases
T = int(input().strip())

for _ in range(T):
    X, Y = map(int, input().split())
    if X + Y > 6:
        print("YES")
    else:
        print("NO")

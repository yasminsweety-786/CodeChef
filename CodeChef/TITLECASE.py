# cook your dish here
T = int(input())
for _ in range(T):
    words = input().split()
    result = []
    for w in words:
        if w.isupper():   # acronym
            result.append(w)
        else:
            result.append(w.capitalize())
    print(" ".join(result))

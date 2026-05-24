for i in range(6):
    for k in range(5 - i):
        print(" ", end="")
    for j in range((i - 1) * 2 + 1):
        print("*", end="")
    print()
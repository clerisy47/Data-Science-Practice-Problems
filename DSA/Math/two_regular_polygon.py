def check_polygon(n, m):
    if n % m == 0:
        return "YES"
    else:
        return "NO"

t = int(input())

for i in range(t):
    n, m = map(int, input().split())
    result = check_polygon(n, m)
    print(result)
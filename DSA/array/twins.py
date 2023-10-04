n = int(input())
coins = list(map(int, input().split()))

total_sum = sum(coins)  # Total sum of all coins
coins.sort(reverse=True)  # Sort the coins in descending order

my_sum = 0
num_coins = 0
for coin in coins:
    my_sum += coin
    num_coins += 1
    if my_sum > total_sum - my_sum:
        break

print(num_coins)
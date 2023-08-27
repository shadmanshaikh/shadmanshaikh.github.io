def nim_game_winner(N, S):
    nim_values = [0] * (N + 1)

    for k in range(1, N + 1):
        nim_values[k] = nim_values[k - 1] ^ (ord(S[k]) - ord('A'))

    winners = []
    for k in range(1, N + 1):
        if nim_values[k] == 0 and S[k] == 'A':
            winners.append("Alice")
        elif nim_values[k] == 0 and S[k] == 'B':
            winners.append("Bob")

    return winners

# Example usage:
N = 5
S = "SABAB"
winners = nim_game_winner(N, S)
for k, winner in enumerate(winners, 1):
    print(f"For k = {k}, the winner is {winner}.")

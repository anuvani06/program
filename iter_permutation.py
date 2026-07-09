from itertools import permutations
str, s = input().split()
s = int(s)
print("\n".join("".join(permutation) 
for permutation in sorted(permutations(str,s))))


s = "teest"

print("The original string is : " + str(s))

res = []
n = len(s)

for i in range(n):
    for j in range(i + 1, n + 1):
        res.append(s[i: j])

# res = [s[i: j] for i in range(len(s))
# 		for j in range(i + 1, len(s) + 1)]

print("All substrings of string are : " + str(res))
print(len(res))
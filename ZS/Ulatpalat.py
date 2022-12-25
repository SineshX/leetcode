# Given string str we need to tell minimum characters to be added in front of the string to make string palindrome.
def ispal(s):
    ans = s[::-1]
    if s == ans:
        return True
    else:
        return False

def ispalindrome(s):
    n = len(s)

    i, j = 0, n-1

    while( i <= j):
        if(s[i] != s[j]):
            return False
        i += 1
        j -= 1

    return True 

def minchar(S):
    count  = 0
    flag = False

    while len(S) > 0:
        if ispal(S):
            flag = True
            break
        else : 
            count +=1
            # discard last char 
            S = S[:-1]
    if flag: 
        return count
    return "s"
# print(ispalindrome("aaammanmaaa"))
def main():
    print(minchar("ammnmmaa"))
    pass
if __name__ == "__main__":
    main()
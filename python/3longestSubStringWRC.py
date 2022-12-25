# def lengthOfLongestSubstring(s: str) -> int:
#     n = len(s)
#     if len(s) == 0:
#         return 0

#     i = 0
#     j = 0
#     d  = {}
#     max_s = 1
#     while i <= j and j < n:
#         print("sgghd")
#         if d.get(s[j],0) != 0:
#             # if it is non zero
#             # element found 
#             # traverse till that element and increase i 
#             temp = s[i:j]
#             # abcabcbb
#             print(temp)
#             if len(temp) > max_s:
#                 max_s = len(temp)
#             # temp = 
#             i += s[i:].index(s[j]) + 1
#             # flush dict 
#             # d.clear()
#             d.pop(s[j])
#         else:
#             d[s[j]] = 1
#             j += 1
#     return max_s
#     # for i,j in enumerated(range(len(s), ))


# print(lengthOfLongestSubstring('au'))
def lengthOfLongestSubstring(s: str) -> int:
            i = 0
            j = 0
            n = len(s)
            if len(s) == 0:
                return 0
            
            max_l = 0
            while( j < n):
                myset = set(s[i:j+1])
                mylist = s[i:j+1]
                print(mylist, myset)
                if(len(myset) == len(mylist) ):
                    if len(mylist) > max_l :
                        max_l = len(mylist)
                    j += 1  
                else:
                    i += 1
            return max_l

print(lengthOfLongestSubstring('aab'))
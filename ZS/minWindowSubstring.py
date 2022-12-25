from collections import Counter
from itertools import combinations
def minWindow(self, s, t):
    m = len(s)
    n = len(t)
    if m < n:
        return ''
    lt = {}
    for i in t:
        if i not in lt:
            lt[i] = 1
        else:
            lt[i] += 1
    missing = n
    i = I = J = 0
    for j, c in enumerate(s, 1):    
        if c in lt and lt[c] > 0:
            missing -= 1
        if c in lt:
            lt[c] -= 1

        while i < j and not missing:
            if not J or j-i < J-I:
                I, J = i, j
            if s[i] not in lt:
                i += 1
                continue
            else:
                lt[s[i]] += 1
                if lt[s[i]] > 0:
                    missing += 1
                i += 1
    return s[I:J]

def minWindow(self, s, t):
    need, missing = Counter(t), len(t)
    i = I = J = 0
    for j, c in enumerate(s, 1):
        missing -= need[c] > 0
        need[c] -= 1
        if not missing:
            while need[s[i]] < 0: need[s[i]] += 1; i += 1
            if not J or j - i <= J - I: I, J = i, j
            need[s[i]] += 1; i += 1; missing += 1       # SPEEEEEEEED UP!
    return s[I : J]
s = "Ramataaaedff"
for i,char in enumerate(s,1):
    print(i,char)

def minWindow(s, t):
    if not s or not t:
        return ""
    hmap = Counter(t)

    lent = len(t)
    
    start, end = 0, 0
    i = 0
    for j, c in enumerate(s): 
        if hmap[c] > 0:
            lent -= 1
        hmap[c] -= 1
        if lent == 0: 
            while i < j and hmap[s[i]] < 0:
                hmap[s[i]] += 1
                i += 1
            if end == 0 or j + 1 - i < end - start: 
                start, end = i, j+1
            hmap[s[i]] += 1
            lent += 1 
            i += 1               
    return s[start:end]  
def countAndSay(self, n: int) -> str:
        if n == 1:
            return "1"
        res = "1"
        for i in range(1, n):
            new = ""
            count = 1
            res += '#'
            for j in range(0, len(res) -1):
                if( res[j] == res[j+1]):
                    count+=1
                else:
                    new = new + str(count) + res[j] 
                    count = 1
            res = new
        
        return res

# with little fault 
def countandsout(n):
    if n == 1:
        return "1"
    # elif n == 2:
    #     return "11"
    
    res = "1"
    for i in range(1, n):
        # freah start : 1st element 
        pre = res[0]
        # 2 copy 
        curr = ""

        # count each part for given string 
        count = 1
        for j in range(1, len(res)):
            if ( res[j] == pre):
                count+=1
            else:
                curr = curr + str(count) + pre
                pre = res[j]
        # dont forget :) its curr 
        res = curr + str(count) + pre

    return res

print(countandsout(5))
 



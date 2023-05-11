from typing import List 
# https://leetcode.com/problems/valid-sudoku/
class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        n = 9
        for i in range(n):
            row = {}
            col = {}
            dia = {}
            for j in range(n):
                ele =  board[i][j]
                if ele == '.' : pass
                elif ele in row: return False
                else : row[ele] = None

                ele2 = board[j][i] 
                if ele2 == '.': pass
                elif ele2 in col: return False
                else : col[ele2] = None

                ele3 = board[ (i//3)*3 + (j//3) ][(i%3)*3 + j%3]
                if ele3 == '.': pass
                elif ele3 in dia: return False
                else : dia[ele3] = None
            
        return True




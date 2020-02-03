class Solution:
    def __init__(self):
        self.gong = [['', '',''],['', '',''],['', '','']]
        self.cols = ['', '','','', '','','', '','']
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for row in range(9):
            for col in range(9):
                char = board[row][col]
                if  char != '.':
                    if char in board[row][:col]:
                        return False
                    if char in self.cols[col]:
                        return False;
                    else:
                        self.cols[col] += char
                    if char in self.gong[int(row/3)][int(col/3)]:
                        return False
                    else:
                        self.gong[int(row/3)][int(col/3)] += char
        return True


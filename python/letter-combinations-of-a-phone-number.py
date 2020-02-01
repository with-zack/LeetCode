class Solution:
    def __init__(self):
        self.table = {'2':'abc', '3':'def','4':'ghi','5':'jkl',
                    '6':'mno','7':'pqrs','8':'tuv','9':'wxyz'}
    def letterCombinations(self, digits: str) -> List[str]:
        result = []
        for digit in digits:
            if len(result)<1:
                for char in self.table[digit]:
                    result.append(char)
            else:
                new = []
                for string in result:
                    for char in self.table[digit]:
                        new.append(string+char)
                result = new
        return result

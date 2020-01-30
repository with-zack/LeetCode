class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        left = {'(':0, '[':1, '{':2}
        right = {')':0, ']':1, '}':2}
        for char in s:
            if char in left.keys():
                stack.append(char)
            else:
                if len(stack) == 0:
                    return False
                else:
                    if char in right.keys():
                        if left[stack[-1]] == right[char]:
                            stack.pop()
                        else:
                            return False
                    else:
                        return False
        if len(stack) == 0:
            return True
        else:
            return False

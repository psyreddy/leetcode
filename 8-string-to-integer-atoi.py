class Solution:
    def __atoi(self,s:str) -> int:
        ans = 0
        for ch in s:
            ans = 10*ans + int(ch)
        return ans
    def myAtoi(self, s: str) -> int:
        s = s.strip()
        flag = 1
        if s.startswith('-'):
            flag = -1
            s = s[1:]
        elif s.startswith('+'):
            s = s[1:]
        f = ''
        for ch in s:
            if '0'<=ch<='9':
                f = f + ch
            else:
                break
        if f=='':
            return 0
        ans = self.__atoi(f)
        if flag == -1:
            ans = ans * flag
            if ans < -(2**31):
                return -(2**31)
            else:
                return ans
        else:
            if ans > (2**31)-1:
                return (2**31)-1
            else:
                return ans
        
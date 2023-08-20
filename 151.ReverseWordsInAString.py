class Solution:
    def reverseWords(self, s: str) -> str:
        s = s.strip()
        ans = s.split(" ")
        ans.reverse()
        a = ""
        for st in ans:
            if st == "":
                continue
            a = a + st + " "
        a = a.strip()
        return a 
class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        s1 = []
        s2 = []
        for ch in list(s):
            if ch != "#":
                s1.append(ch)
            elif len(s1)>0 :
                s1.pop()

        for ch2 in list(t):
            if ch2 != "#":
                s2.append(ch2)
            elif len(s2)>0 :
                s2.pop()
        if s1 == s2 :
            return True
        else :
            return False
        
        
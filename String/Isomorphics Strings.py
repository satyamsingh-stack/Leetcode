class Solution:
    def isIsomorphic(self, st1: str, st2: str) -> bool:
        temp1=[0]*256
        temp2=[0]*256
        for i in range(len(st1)):
            if(temp1[ord(st1[i])-ord('a')]!=temp2[ord(st2[i])-ord('a')]):
                return False
            elif(not temp1[ord(st1[i])-ord('a')]):
                temp1[ord(st1[i])-ord('a')]=i+1
                temp2[ord(st2[i])-ord('a')]=i+1
        return True
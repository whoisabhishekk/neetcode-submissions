class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        prefix=strs[0]
        res=""
        for i in range(len(prefix)):
            tf=prefix[:i+1]
            for words in strs:
                if words[:i+1]!=tf:
                    return res
            res=tf
        return res            
        
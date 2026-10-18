class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        lst={}
        for words in strs:
            word="".join(sorted(words))

            if word not in lst:
                lst[word]=[]

            lst[word].append(words)

        return list(lst.values())       

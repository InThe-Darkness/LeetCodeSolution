class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        keyboard = ["qwertyuiop", "asdfghjkl", "zxcvbnm"]
        ans = []
        for word in words:
            word_ = word.lower()
            i = 0
            j = 0
            while (word_[0] in keyboard[i]) == False:
                i += 1
            
            while j < len(word_) and word_[j] in keyboard[i]: j += 1
            if j >= len(word_):
                ans.append(word)
        return ans


class Solution:
    def reverseVowels(self, s: str) -> str:
        i = 0
        j = len(s) - 1
        s = list(s)
        vowel = "aAeEiIoOuU"
        while i < j:
            while not s[i] in vowel and i < j: i += 1
            while not s[j] in vowel and j > i: j -= 1
            s[i], s[j] = s[j], s[i]
            i += 1
            j -= 1
        return "".join(s)
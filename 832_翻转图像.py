class Solution:
    def flipAndInvertImage(self, A: List[List[int]]) -> List[List[int]]:
        for x in A:
            x.reverse()
        for line in A:
            for i in range(len(line)):
                if line[i] == 0:
                    line[i] = 1
                else: line[i] = 0
        return A
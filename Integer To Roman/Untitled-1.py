class Solution:
    def intToRoman(self, num: int) -> str:
        res: str = ""
        i = 1

        while num >= 1:
            poo = num % 10
            res = self.getRomanStr( poo, i ) + res
            num //= 10
            i *= 10
        return res
        
    def getRomanStr(self, num: int, place: int ) -> str:
        if num == 0:
            return ""
        rom2 = {
            1: "I",
            5: "V",
            10: "X",
            50: "L",
            100: "C",
            500: "D",
            1000: "M"
        }
        if num == 5:
            return rom2[5*place]
        elif num == 4 or num == 9:
            return rom2[place] + rom2[(num+1)*place]
        else: 
            pp = ""
            if num > 5:
                pp = rom2[5*place]
                num -= 5
            for i in range(1,num+1):
                pp += rom2[place]
            return pp
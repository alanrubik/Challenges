class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        
        out = []
        
        for num in range(1, n + 1):
            
            divisible_by_3 = (num % 3 == 0)
            divisible_by_5 = (num % 5 == 0)
            
            if divisible_by_5 and divisible_by_3:
                out.append("FizzBuzz")
            elif divisible_by_5:
                out.append("Buzz")
            elif divisible_by_3:
                out.append("Fizz")
            else:
                out.append(str(num))

        return(out)
  

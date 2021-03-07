def decimalToBinary(n): 
	return bin(n).replace("0b", "") 

num =in(input())
print(decimalToBinary(num)) 
print(decimalToBinary(18)) 
print(decimalToBinary(7)) 

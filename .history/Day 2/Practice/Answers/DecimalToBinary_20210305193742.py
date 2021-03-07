def decimalToBinary(n): 
	return bin(n).replace("0b", "") 

num = int(input())
print(decimalToBinary(n)) 
print(decimalToBinary(18)) 
print(decimalToBinary(7)) 

def decimalToBinary(n): 
	return bin(n).replace("0b", "") 

numm = input()
print(decimalToBinary()) 
print(decimalToBinary(18)) 
print(decimalToBinary(7)) 

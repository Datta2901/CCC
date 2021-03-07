def decimalToBinary(n): 
	return bin(n).replace("0b", "") 

num =(input())
print(decimalToBinary(num))  
print(decimalToBinary(18)) 
print(decimalToBinary(7)) 

def decimalToBinary(n): 
	return bin(n).replace("0b", "") 

num =int(input())
print(decimalToBinary(num))  


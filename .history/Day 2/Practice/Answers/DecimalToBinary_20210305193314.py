# Python program to convert decimal to binary

# Function to convert Decimal number 
# to Binary number 
def decimalToBinary(n): 
	return bin(n).replace("0b", "") 


print(decimalToBinary(8)) 
print(decimalToBinary(18)) 
print(decimalToBinary(7)) 

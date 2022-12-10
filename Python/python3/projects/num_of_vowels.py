# Create a variable to store the string
my_string = input("Enter string to calculate the vowels of: ")

# Create a dictionary to store the vowels and their counts
vowels = {
    "a": 0,
    "e": 0,
    "i": 0,
    "o": 0,
    "u": 0,
    "A": 0,
    "E": 0,
    "I": 0,
    "O": 0,
    "U": 0,
}

# Iterate over the characters in the string
for ch in my_string:
    # If the character is a vowel, increment its count in the dictionary
    if ch in vowels:
        vowels[ch] += 1

# Print the total number of vowels in the string
print(sum(vowels.values()))

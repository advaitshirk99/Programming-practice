def Check_Vow(string, vowels):
    # The term "casefold" has been used to refer to a method of ignoring cases.
    string = string.casefold()
    count = {}.fromkeys(vowels, 0)
    # To count the vowels
    for character in string:
        if character in count:
            count[character] += 1   
    return count

# Driver Code
vowels = 'aeiou'
string = input("Enter the string:")
print (Check_Vow(string, vowels))

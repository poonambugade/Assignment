#Easy 1
#Given a string s consisting of words and spaces, return the length of the last word in the string.
#A word is a maximal 
#substring consisting of non-space characters only.

def returnLen(string):
    #counter Variable
    count=0   
    #split the string
    str1=string.strip()
    for i in range(len(string)):
        #check whether the character is space.If space is encountered, reinitial the counter to 0 else increment the counter by 1
        if str1[i]==' ':
            count=0
        else:
            count+=1
    return count
string=str(input())
print(returnLen(string))
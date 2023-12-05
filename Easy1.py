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
        if str1[i]==' ':
            count=0
        else:
            count+=1
    return count
string=str(input())
print(returnLen(string))

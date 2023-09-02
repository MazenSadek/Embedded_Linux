
def larget_item(ls):
    max=ls[0]
    for i in ls:
        if i> max:
            max=i
        
    return max

print(larget_item([200,1,2,5,6,7,100,500]))
import openpyxl
f=open("header.h","r")
func=f.readlines()
clean_list = [string.strip() for string in func  if string.strip() != '']
print(clean_list)
f.close()
count=0
for i in clean_list:
    print(i)
    count+=1
print(count)
workbook=openpyxl.Workbook()
sheet=workbook.active
for i in range(0,count):
    print(i)
    data=[clean_list[i],f"IDX0{i}"]
    sheet.append(data)

workbook.save("function.xlsx")
workbook.close()     



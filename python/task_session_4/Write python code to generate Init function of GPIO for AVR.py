data=''
for i in range(0,8):
    x=input(f"please enter bit {i} mode :")
    x.lower()
    if x=='in':
        data+='0' 
    elif x=='out':
        data+='1'
    else:
        print("invalid input")
        break

output="0b"+data[::-1]
f= open("init.c","w")
f.write("void Init_PORTA_DIR(void){{\n DDRA= {} ;\n}}".format(output))
f.close

  
 
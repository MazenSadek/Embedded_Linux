

from  tkinter import *
def validate():
    x=(int)(e1.get())
    x=x+1
    global fac
    fac=1
    for i in range(1,x):
        fac=fac*i
    print(fac)    
    Label(window,text=f"factorial of {x-1} is {x-1}! ={fac}").grid(row=4,column=0)
window=Tk()
fac=1
window.title("Factorial task")
window.geometry("300x100+800+250")
lib=Label(window,text="Enter value of intger N:")
e1=Entry(window)
btn=Button(window,text="validate",command=validate,width=15)
btn2=Button(window,text="close",command=window.destroy,width=15)

lib.grid(row=0,column=0)
e1.grid(row=0,column=1)
btn.grid(row=3,column=0)
btn2.grid(row=3,column=1)
window.mainloop()


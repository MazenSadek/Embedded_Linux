import pyautogui 
import time
import os

pyautogui.hotkey("win")
pyautogui.write("vscode")
time.sleep(1)
pyautogui.hotkey("enter") 


dirpath= os.path.dirname(os.path.realpath(__file__))+"\photo_1.png"
pointer=None
while pointer is None:
    pointer=pyautogui.locateOnScreen(dirpath, confidence=0.7)
#print(pointer[0],pointer[1]) 
if pointer is not None:
    pyautogui.moveTo(pointer[0],pointer[1],duration=0.5) 

time.sleep(1)
pyautogui.click()
time.sleep(1)
pyautogui.write("clangd")


dirpath2= os.path.dirname(os.path.realpath(__file__))+"\photo_2.png"
pointer2=None
while pointer2 is None:
    pointer2=pyautogui.locateOnScreen(dirpath2, confidence=0.7)
#print(pointer[0],pointer[1]) 
if pointer2 is not None:
    pyautogui.moveTo(pointer2[0],pointer2[1],duration=0.5) 


time.sleep(1)
pyautogui.click()
time.sleep(1)



dirpath3= os.path.dirname(os.path.realpath(__file__))+"\photo_3.png"
pointer3=None
while pointer3 is None:
    pointer3=pyautogui.locateOnScreen(dirpath3, confidence=0.7)
#print(pointer[0],pointer[1]) 
if pointer3 is not None:
    pyautogui.moveTo(pointer3[0]+195,pointer3[1]+140,duration=0.5) 


time.sleep(1)
pyautogui.click()
time.sleep(1)

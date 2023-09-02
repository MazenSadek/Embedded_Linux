import webbrowser



def google(url,num):
    if num <=2:
        chrome_path="C:\\Users\\elkrnk2020\\AppData\\Local\\Google\\Chrome\\Application\\chrome.exe"
        webbrowser.register("chrome", None, webbrowser.BackgroundBrowser(chrome_path))
        webbrowser.get("chrome").open_new(str(url[num]))
    else:
        print("your enter invalid number")
   




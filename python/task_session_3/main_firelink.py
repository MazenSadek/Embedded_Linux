import firelink

num=int(input("enter your favourite link \n0:for googlechrome\n1:for facebook\n2:for youtube \n"))
url =[ "https://www.google.com","https://www.facebook.com/","https://www.youtube.com/"]

firelink.google(url,num)



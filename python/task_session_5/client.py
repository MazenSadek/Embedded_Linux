import socket
import time
client=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
ip=socket.gethostbyname(socket.gethostname())
print("your ip is "+ip)
print("====================")
client.connect((ip,12345))

while True:  

    try:
        
        msg= str(input("please enter the message that you want to send: "))
        msg_encode=msg.encode('UTF-8')
        client.send(msg_encode)
        print("=================")
        rodata=client.recv(1024)
        print(f"{ip} is sendeing to you this message {rodata.decode('UTF-8')}")
        
        # msg= "iam client one"
        # msg_encode=msg.encode('UTF-8')
        # client.send(msg_encode)
        # time.sleep(20)
    except socket.error as e:
        print(f"Socket error: {e}")
        break

   

client.close()




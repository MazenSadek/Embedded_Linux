import socket
import threading

# Define host and port
HOST = '192.168.1.8'
PORT = 12345

# Create a socket object
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Bind the socket to the host and port
server_socket.bind((HOST, PORT))

# Listen for incoming connections
server_socket.listen(5)
print(f"Server is listening on {HOST}:{PORT}")

# Function to handle each client connection
def handle_client(client_socket):
    try:
        while True:
            # Receive data from the client
            data = client_socket.recv(1024)
            if not data:
                break  # Connection closed by the client
            
            # Process the received data (you can replace this with your logic)
            received_data = data.decode('utf-8')
            print(f"Received data from {client_socket.getpeername()}: {received_data}")
            
            # Send a response (you can replace this with your logic)
            response = f"Received: {received_data}"
            client_socket.send(response.encode('utf-8'))
    except Exception as e:
        print(f"Error handling client: {e}")
    finally:
        # Close the client socket
        client_socket.close()

# Main server loop
while True:
    # Accept a client connection
    client_socket, client_address = server_socket.accept()
    print(f"Accepted connection from {client_address}")
    
    # Start a new thread to handle the client
    client_handler = threading.Thread(target=handle_client, args=(client_socket,))
    client_handler.start()

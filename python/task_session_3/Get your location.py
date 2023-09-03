import requests

response=requests.get("https://ipinfo.io/197.48.167.50/geo")
print(response.json())
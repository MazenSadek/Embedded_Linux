import requests
response=requests.get("https://www.boredapi.com/api/activity")
print(response.json()['activity'])
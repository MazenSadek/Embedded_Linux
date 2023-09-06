import speech_recognition as sr
import pyttsx3
import pywhatkit
import datetime
import wikipedia
import pyjokes

listener=sr.Recognizer()
engine=pyttsx3.init()
voices=engine.getProperty('voices')
engine.setProperty('voice', voices[0].id)

def talk(text):
    engine.say(text)
    engine.runAndWait()

def take_command():
    try:
        with sr.Microphone() as source:
            print("listening......") 
            listener.adjust_for_ambient_noise(source)
            voice=listener.listen(source)
            print("after listening")
            
            command=listener.recognize_google(voice,language="en-US")
            print(command)
            command=command.lower()
            if 'alexa' in command:
                command=command.replace('alexa','')
               # talk(command)
                print(command)

    except:
        pass

    return command

def run_alexa():
    command=take_command()
    print(command)
    if 'play' in command :
        song=command.replace('play','')
        print(song)
        talk("playing"+song)
        pywhatkit.playonyt(song)
    elif 'time' in command:
        time=datetime.datetime.now().strftime('%I:%M %p')
        print(time)
        talk("current time is"+ time)
    elif 'wiki' in command:
        person=command.replace('wiki','')
        info=wikipedia.summary(person,1)
        print(info)
        talk(info)
    elif 'joke' in command:
        talk(pyjokes.get_joke())
        print(pyjokes.get_joke())
    else:
        talk('please say the command again')
        print('please say the command again')

while True:
    run_alexa() 




""" import speech_recognition as sr
listener=sr.Recognizer()
# Print the available microphone names and device indexes
microphone_list = sr.Microphone.list_microphone_names()
for index, microphone_name in enumerate(microphone_list):
    print(f"Device Index: {index}, Microphone Name: {microphone_name}")

# Set the device index of your headphone
headphone_device_index = 2

# Use the microphone with the specified device index
with sr.Microphone(device_index=headphone_device_index) as source:
    # Rest of your code for speech recognition
    print("listening........")
    voice = listener.listen(source)
    command = listener.recognize_google(voice, language="en")
    command = command.lower()
    print(command) """
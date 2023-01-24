# An Automation script to automatically join a scheduled google-meet meeting at a specific time without manual labour.
# Developed by Shubhadeep Mandal to join B.P. Poddar Institute of Management and Technology's Online Classes.

# importing the required python packages
import pyautogui
import webbrowser
import time
from datetime import datetime


def join():  # defining join function
    time.sleep(2)  # making a delay of 2 second
    pyautogui.click(1750, 148)  # Move the mouse to XY coordinates and click it

    time.sleep(2)  # making a delay of 2 seconds
    pyautogui.click(909, 694)  # Move the mouse to XY coordinates and click it

    time.sleep(5)  # making a delay of 5 seconds
    pyautogui.hotkey('ctrl', 'd')  # Press the Ctrl-D hotkey combination
    pyautogui.hotkey('ctrl', 'e')  # Press the Ctrl-E hotkey combination

    time.sleep(3)  # making a delay of 3 seconds
    pyautogui.click(1425, 582)  # Move the mouse to XY coordinates and click it


now = datetime.now()  # check the current system time
if "090000" <= now.strftime("%H%M%S") <= "130000":
    while True:
        now = datetime.now()
        if now.strftime("%H%M%S") == "103000":  # check if the current system time matches your meeting time
            webbrowser.get("C:/Program Files (x86)/Google/Chrome/Application/chrome.exe %s").open_new(
                "https://meet.google.com/pnz-hyap-pxb")  # accessing the web browser and prompting it to navigate you to the mentioned URL
            join()  # calling join function
            break

elif "140000" <= now.strftime("%H%M%S") <= "200000":
    while True:
        now = datetime.now()  # check the current system time
        if now.strftime("%H%M%S") == "150000":  # check if the current system time matches your meeting time
            webbrowser.get("C:/Program Files (x86)/Google/Chrome/Application/chrome.exe %s").open_new(
                "https://meet.google.com/inp-snaj-mtj")  # accessing the web browser and prompting it to navigate you to the mentioned URL
            join()  # calling join function
            break
else:
    print ("All Clases are over for Today .. Please come back Tomorrow ! Japnamm Japnamm !")  #  displaying appropriate message

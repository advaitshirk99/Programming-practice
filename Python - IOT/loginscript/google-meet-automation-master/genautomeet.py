# An Automation script to automatically join a scheduled google-meet meeting at a specific time without manual labour.

# importing the required python packages
import pyautogui
import webbrowser
import time
from datetime import datetime

while True:
    now = datetime.now()  # check the current system time

    if now.strftime("%H%M%S") == "203500":  # check if the current system time matches your meeting time
        webbrowser.get("C:/Program Files (x86)/Google/Chrome/Application/chrome.exe %s").open_new(
            "https://meet.google.com/yeh-ypkq-kpb")  # accessing the web browser and prompting it to navigate you to the mentioned URL

        time.sleep(5)  # making a delay of 5 seconds
        pyautogui.hotkey('ctrl', 'd')  # Press the Ctrl-D hotkey combination.
        pyautogui.hotkey('ctrl', 'e')  # Press the Ctrl-E hotkey combination.

        time.sleep(3)  # making a delay of 3 seconds
        pyautogui.click(1425, 582)  # Move the mouse to XY coordinates and click it.
        break

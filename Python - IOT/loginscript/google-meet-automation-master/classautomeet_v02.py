# An Automation script to automatically join a scheduled google-meet meeting at a specific time without manual labour.
# Developed by Shubhadeep Mandal to join B.P. Poddar Institute of Management and Technology's Online Classes.

# importing the required python packages
import pyautogui
import webbrowser
import time
import datetime
import calendar
import xlrd
from datetime import datetime

pyautogui.FAILSAFE = False

workbook = xlrd.open_workbook('schedule.xls')
worksheet = workbook.sheet_by_name('schedule')


def joinClass():  # defining joinClass function
    time.sleep(2)  # making a delay of 2 second
    pyautogui.click(1785, 142)  # Move the mouse to XY coordinates and click it 1750, 148

    time.sleep(2)  # making a delay of 2 seconds
    pyautogui.click(909, 694)  # Move the mouse to XY coordinates and click it

    time.sleep(5)  # making a delay of 5 seconds
    pyautogui.hotkey('ctrl', 'd')  # Press the Ctrl-D hotkey combination
    pyautogui.hotkey('ctrl', 'e')  # Press the Ctrl-E hotkey combination

    time.sleep(3)  # making a delay of 3 seconds
    pyautogui.click(1425, 582)  # Move the mouse to XY coordinates and click it


def findDay(date):
    born = datetime.strptime(date, '%d %m %y').weekday()
    return calendar.day_name[born]


def fetchData(today):
    for i in range(worksheet.nrows):
        if today == worksheet.cell_value(i, 0):
            print(" |", end=" ")
            for j in range(1, worksheet.ncols):
                print(worksheet.cell_value(0, j), "|", end=" ")
            print("\n", "| ", end=" ")
            for j in range(1, worksheet.ncols):
                if i == 5:
                    print(worksheet.cell_value(0 + 1, j), "   |   ", end=" ")
                else:
                    print(worksheet.cell_value(i + 1, j), "   |   ", end=" ")
            break


def theoryClassLink():
    webbrowser.get("C:/Program Files (x86)/Google/Chrome/Application/chrome.exe %s").open_new(
        "https://meet.google.com/pnz-hyap-pxb")  # accessing the web browser and prompting it to navigate you to the mentioned URL


def labClassLink():
    webbrowser.get("C:/Program Files (x86)/Google/Chrome/Application/chrome.exe %s").open_new(
        "https://meet.google.com/inp-snaj-mtj")  # accessing the web browser and prompting it to navigate you to the mentioned URL


def combinedClassLink():
    webbrowser.get("C:/Program Files (x86)/Google/Chrome/Application/chrome.exe %s").open_new(
        "https://meet.google.com/pnz-hyap-pxb")  # accessing the web browser and prompting it to navigate you to the mentioned URL


now = datetime.now()  # check the current system time
if "Sunday" != findDay(now.strftime("%d %m %y")) != "Monday":
    now = datetime.now()
    if "090000" <= now.strftime("%H%M%S") <= "190000":
        while True:
            now = datetime.now()
            if now.strftime("%H%M%S") == "103000":  # check if the current system time matches your meeting time
                for i in range(worksheet.nrows):
                    if findDay(now.strftime("%d %m %y")) == worksheet.cell_value(i, 0):
                        if worksheet.cell_value(i, 1) == "EC501" or worksheet.cell_value(i,
                                                                                         1) == "EC502" or worksheet.cell_value(
                            i, 1) == "EC503" or worksheet.cell_value(i, 1) == "EC504" or worksheet.cell_value(i,
                                                                                                              1) == "MC-HU501":
                            theoryClassLink()
                            joinClass()
                            break
                        elif worksheet.cell_value(i, 1) == "EC591" or worksheet.cell_value(i,
                                                                                           1) == "EC592" or worksheet.cell_value(
                            i, 1) == "EC593":
                            labClassLink()
                            joinClass()
                            break
                        elif worksheet.cell_value(i, 1) == "PE-EC505":
                            combinedClassLink()
                            joinClass()
                            break
                break
            if now.strftime("%H%M%S") == "150000":  # check if the current system time matches your meeting time
                for i in range(worksheet.nrows):
                    if findDay(now.strftime("%d %m %y")) == worksheet.cell_value(i, 0):
                        if worksheet.cell_value(i, 5) == "EC501" or worksheet.cell_value(i,
                                                                                         5) == "EC502" or worksheet.cell_value(
                            i, 5) == "EC503" or worksheet.cell_value(i, 5) == "EC504" or worksheet.cell_value(i,
                                                                                                              5) == "MC-HU501":
                            theoryClassLink()
                            joinClass()
                            break
                        elif worksheet.cell_value(i, 5) == "EC591" or worksheet.cell_value(i,
                                                                                           5) == "EC592" or worksheet.cell_value(
                            i, 5) == "EC593":
                            labClassLink()
                            joinClass()
                            break
                        elif worksheet.cell_value(i, 5) == "PE-EC505":
                            combinedClassLink()
                            joinClass()
                            break
                break

    else:
        print(
            "All Classes are over for Today .. Please come back Tomorrow ! Japnamm Japnamm ! \n")  # displaying appropriate message
        now = datetime.now()
        print("Next Day's Schedule .. ")  # displaying appropriate message
        fetchData(findDay(now.strftime("%d %m %y")))
else:
    print("Today is", findDay(now.strftime("%d %m %y")),
          ",there are no ONLINE CLASSES for Today. \nNOTICE : B.P. Poddar Institute of Management and Technology remains Closed on Sundays and Mondays. \n\nTake Care ! Stay Safe ! Stay Indoors ! \nKeep Calm and Complete your Assignments !")

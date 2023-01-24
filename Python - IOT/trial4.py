import traceback
import smtplib, ssl
from getpass import getpass
port = 465  # For SSL
smtp_server = "smtp.gmail.com"
sender_email = "adshirvaikar@gmail.com"  # Enter your address
receiver_email = "2017.advait.shirvaikar@ves.ac.in"  # Enter receiver address
password = getpass("Type your password and press enter: ")
message = """\
Subject: Hi there

This message is sent from Python."""

context = ssl.create_default_context()

# Try to log in to server and send email
try:
	with smtplib.SMTP_SSL(smtp_server, port, context=context) as server:
	    server.login(sender_email, password)
	    server.sendmail(sender_email, receiver_email, message)
	print("Successfully sent")
except Exception as ex : 
	print('Exception Occurred which is of type :', ex.__class__.__name__)
	y = input('If you want to see Traceback press 1 : ')
	if y == '1':
		traceback.print_exc()

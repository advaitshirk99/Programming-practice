# import required modules
from selenium import webdriver
from selenium.webdriver.chrome.options import Options
import time


def Glogin(mail_address, password):
	# Login Page
	driver.get(
		'https://accounts.google.com/ServiceLogin?hl=en&passive=true&continue=https://www.google.com/&ec=GAZAAQ')

	# input Gmail
	driver.find_element_by_id("identifierId").send_keys('2017.advait.shirvaikar@ves.ac.in')
	driver.find_element_by_id("identifierNext").click()
	driver.implicitly_wait(10)

	# input Password
	driver.find_element_by_xpath(
		'//*[@id="password"]/div[1]/div/div[1]/input').send_keys('ADVshir2404$')
	driver.implicitly_wait(10)
	driver.find_element_by_id("passwordNext").click()
	driver.implicitly_wait(10)

	# go to google home page
	driver.get('https://google.com/')
	driver.implicitly_wait(100)


def turnOffMicCam():
	# turn off Microphone
	time.sleep(4)
	driver.find_element_by_xpath(
		'//*[@id="yDmH0d"]/c-wiz/div/div/div[8]/div[3]/div/div/div[2]/div/div[1]/div[1]/div[1]/div/div[4]/div[1]/div/div/div').click()
	driver.implicitly_wait(10000)

	# turn off camera
	time.sleep(3)
	driver.find_element_by_xpath(
		'//*[@id="yDmH0d"]/c-wiz/div/div/div[8]/div[3]/div/div/div[2]/div/div[1]/div[1]/div[1]/div/div[4]/div[2]/div/div').click()
	driver.implicitly_wait(10000)


def joinNow():
	# Join meet
	print(1)
	time.sleep(5)
	driver.implicitly_wait(2000)
	driver.find_element_by_css_selector(
		'div.uArJ5e.UQuaGc.Y5sE8d.uyXBBb.xKiqt').click()
	print(1)


def AskToJoin():
	# Ask to Join meet
	time.sleep(5)
	driver.implicitly_wait(2000)
	driver.find_element_by_css_selector(
		'div.uArJ5e.UQuaGc.Y5sE8d.uyXBBb.xKiqt').click()
	# Ask to join and join now buttons have same xpaths


# assign email id and password
mail_address = 'emaild@gmail.com'
password = 'geeksforgeeks'

# create chrome instamce
opt = Options()
opt.add_argument('--disable-blink-features=AutomationControlled')
opt.add_argument('--start-maximized')
opt.add_experimental_option("prefs", {
	"profile.default_content_setting_values.media_stream_mic": 1,
	"profile.default_content_setting_values.media_stream_camera": 1,
	"profile.default_content_setting_values.geolocation": 0,
	"profile.default_content_setting_values.notifications": 1
})
driver = webdriver.Chrome(options=opt)

# login to Google account
Glogin(mail_address, password)

# go to google meet
driver.get('https://meet.google.com/xby-zehb-ncf')
turnOffMicCam()
# AskToJoin()
joinNow()

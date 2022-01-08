from selenium import webdriver
from selenium.webdriver.common.keys import Keys
import time
import urllib.request
from urllib.request import Request, urlopen
# driver 불러오기
driver = webdriver.Chrome()
driver.get("https://www.google.co.kr/imghp?hl=ko&ogbl")
# 검색창 찾기
elem = driver.find_element_by_name("q")
# 검색어 입력
elem.send_keys('dog')
# Enter
elem.send_keys(Keys.RETURN)

SCROLL_PAUSE_TIME = 1

# Scroll 방지
# Get scroll height
last_height = driver.execute_script("return document.body.scrollHeight")

while True:
    # Scroll down to bottom
    driver.execute_script("window.scrollTo(0, document.body.scrollHeight);")

    # Wait to load page
    time.sleep(SCROLL_PAUSE_TIME)

    # Calculate new scroll height and compare with last scroll height
    new_height = driver.execute_script("return document.body.scrollHeight")
    if new_height == last_height:
        # <결과 더보기>
        try:
            driver.find_element_by_css_selector('.mye4qd').click()
        # break
        except:
            break
    last_height = new_height


# 저장
images = driver.find_elements_by_css_selector('.rg_i.Q4LuWd')
count = 1
for image in images:
    try:
        image.click()
        time.sleep(3)
        imgUrl = driver.find_element_by_xpath('//*[@id="Sva75c"]/div/div/div[3]/div[2]/c-wiz/div/div[1]/div[1]/div[2]/div/a/img').get_attribute('src')

        # Google의 crawling 방지로 인한 에러 발생
        opener=urllib.request.build_opener()
        opener.addheaders=[('User-Agent','Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/36.0.1941.0 Safari/537.36')]
        urllib.request.install_opener(opener)
        urllib.request.urlretrieve(imgUrl, str(count) +".jpg")
        count += 1
    except:
        pass

driver.close()




# assert "Python" in driver.title
# elem = driver.find_element_by_name("q")
# elem.clear()
# elem.send_keys("pycon")
# elem.send_keys(Keys.RETURN)
# assert "No results found." not in driver.page_source
# driver.close()
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
import time
import urllib.request
from urllib.request import Request, urlopen
# driver 불러오기
# dogs
count = 1
for name in ['박보영', '손예진', '한효주', '아이유', '태연']:
    
    driver = webdriver.Chrome()
    driver.get("https://www.google.co.kr/imghp?hl=ko&ogbl")
    # 검색창 찾기
    elem = driver.find_element_by_name("q")
    # 검색어 입력
    elem.send_keys(name + '바탕화면')
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

    sht = 1
    # 저장
    images = driver.find_elements_by_css_selector('.rg_i.Q4LuWd')
    for image in images:
        try:
            image.click()
            time.sleep(3)
            imgUrl = driver.find_element_by_xpath('//*[@id="Sva75c"]/div/div/div[3]/div[2]/c-wiz/div/div[1]/div[1]/div[2]/div/a/img').get_attribute('src')
            name_dy = 'dog' + str(count)
            # Google의 crawling 방지로 인한 에러 발생
            opener=urllib.request.build_opener()
            opener.addheaders=[('User-Agent','Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/36.0.1941.0 Safari/537.36')]
            urllib.request.install_opener(opener)
            # training
            if sht <= 300:
                urllib.request.urlretrieve(imgUrl,  f'training_set\dogs\{name_dy}.jpg')
            # valid
            elif sht <= 310:
                urllib.request.urlretrieve(imgUrl,  f'valid_set\dogs\{name_dy}.jpg')
            # test
            elif sht <= 330:
                urllib.request.urlretrieve(imgUrl,  f'test_set\dogs\{name_dy}.jpg')                
            count += 1
            sht += 1
            if sht == 331:
                break
        except:
            pass

    driver.close()

# cats
count = 1
for name in ['한예슬', '경리', '나나', '한채영', '오연서']:
    
    driver = webdriver.Chrome()
    driver.get("https://www.google.co.kr/imghp?hl=ko&ogbl")
    # 검색창 찾기
    elem = driver.find_element_by_name("q")
    # 검색어 입력
    elem.send_keys(name + '바탕화면')
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
    sht = 1
    for image in images:
        try:
            
            image.click()
            time.sleep(3)
            imgUrl = driver.find_element_by_xpath('//*[@id="Sva75c"]/div/div/div[3]/div[2]/c-wiz/div/div[1]/div[1]/div[2]/div/a/img').get_attribute('src')
            name_dy = 'cat' + str(count)
            # Google의 crawling 방지로 인한 에러 발생
            opener=urllib.request.build_opener()
            opener.addheaders=[('User-Agent','Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/36.0.1941.0 Safari/537.36')]
            urllib.request.install_opener(opener)
            if sht <= 300:
                urllib.request.urlretrieve(imgUrl,  f'training_set\cats\{name_dy}.jpg')
            # valid
            elif sht <= 310:
                urllib.request.urlretrieve(imgUrl,  f'valid_set\cats\{name_dy}.jpg')
            # test
            elif sht <= 330:
                urllib.request.urlretrieve(imgUrl,  f'test_set\cats\{name_dy}.jpg')            
            count += 1
            sht += 1
            if sht == 331:
                break
        except:
            pass

    driver.close()

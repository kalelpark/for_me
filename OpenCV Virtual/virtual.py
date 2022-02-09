import cv2
from cvzone.HandTrackingModule import HandDetector

cap = cv2.VideoCapture(1)

detactor = HandDetector(detectionCon=0.7)
startDist = None
scale = 0
while True:
    
    suceess, img = cap.read()
    hands, img = detactor.findHands(img)

    img1 = cv2.imread('nasumhan.jpg')    

    if len(hands) == 2:
        # print(detactor.fingersUp(hands[0]), detactor.fingersUp(hands[1]))

        if (detactor.fingersUp(hands[0]) == [1, 1, 0, 0, 0]) and (detactor.fingersUp(hands[1]) == [1, 1, 0, 0, 0]):
            # lmlist1 = hands[0]["lmList"]   # information about finger
            # lmlist2 = hands[1]["lmList"]
            # print(length, info, img)
            if startDist is None:
                length, info, img = detactor.findDistance(hands[0]['center'], hands[1]['center'], img)
                # info 4, 5 index가 중앙좌표를 의미합니다.
                startDist = length

            length, info, img = detactor.findDistance(hands[0]['center'], hands[1]['center'], img)
        # 확대/축소 가능 활용
            scale = int((length - startDist) // 2)
            cx, cy = info[4:]

    else:
        startDist = None
    
    try:
        h1, w1, _ = img1.shape
        newH, newW = ((h1 + scale) // 2)*2 , ((w1 + scale) // 2)*2
        img1 = cv2.resize(img1, (newW, newH))

        img[cy - newH//2 : cy + newH//2, cx - newW//2 : cx + newW//2] = img1
    except:
        pass

    # img[0:255, 0:255] = img1
    cv2.imshow('video', img)

    if cv2.waitKey(25) == ord('q'):
        print("종료")
        break

cap.release()
cv2.destroyAllWindows()

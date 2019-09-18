import cv2
import numpy as np
import pytesseract
from PIL import Image
import pyttsx3

# Path of working folder on Disk
pytesseract.pytesseract.tesseract_cmd = r"C:/Program Files (x86)/Tesseract-OCR/tesseract.exe"
src_path = r"C:/Users/satyam/Google Drive/CSE/Image Processing/Test-Images/"

def get_string(img_path):
    # Read image with opencv
    img = cv2.imread(src_path + img_path)

    # Convert to gray
    img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

    # Apply dilation and erosion to remove some noise
    kernel = np.ones((1, 1), np.uint8)
    img = cv2.dilate(img, kernel, iterations=1)
    img = cv2.erode(img, kernel, iterations=1)

    # Write image after removed noise
    cv2.imwrite(src_path + "removed_noise.png", img)

    # Recognize text with tesseract for python
    result = pytesseract.image_to_string(Image.open(src_path + "removed_noise.png"))

    return result


print('--- Start recognize text from image ---')
res = get_string('test (1).jpg')
print(res)
print("------ Done -------")
print("\nWord Count = ",len(res.split()))
#####################################################################  
# Audio using windows API
engine = pyttsx3.init() 
engine.say(res)  
engine.runAndWait()

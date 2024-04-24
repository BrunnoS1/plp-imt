import cv2

img = cv2.imread('other/empresa.jpg')
# cv2.imshow("", img)
# cv2.waitKey()

imgPB = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
# cv2.imshow("", imgPB)
# cv2.waitKey()

# Cria um objeto do classificador usando seu construtor
# O parâmetro recebido pelo construtor é o endereço do arquivo xml que guarda os padrões de identificação
df = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')

# Utiliza função de detecção a partir do objeto df
faces = df.detectMultiScale(imgPB, scaleFactor=1.05, minNeighbors=7,minSize=(30,30), 
                            flags = cv2.CASCADE_SCALE_IMAGE)

# Desenha retângulos amarelos nas posições em que foram encontradas faces
for(x,y,w,h) in faces:
  cv2.rectangle(img, (x,y), (x+w,y+h), (0,255,255), 7)

# Mostra a imagem atualizada com a marcação dos locais onde foram encontradas faces
cv2.imshow("",img)
cv2.waitKey()

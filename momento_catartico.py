import sys
import time
import pyttsx3  # Libreria per Text-to-Speech
from PyQt5.QtWidgets import QApplication, QLabel, QWidget, QVBoxLayout
from PyQt5.QtCore import Qt

# Funzione per riprodurre testo tramite TTS
def speak_text(text):
    engine = pyttsx3.init()
    engine.say(text)
    engine.runAndWait()

def open_window():
    app = QApplication(sys.argv)

    while True:
        # Creiamo una finestra
        window = QWidget()
        window.setWindowTitle('Catarsi')

        # Creiamo il layout e l'etichetta
        layout = QVBoxLayout()
        label = QLabel("IL MOMENTO È CATARTICO")
        label.setAlignment(Qt.AlignCenter)
        layout.addWidget(label)

        # Impostiamo il layout nella finestra
        window.setLayout(layout)

        # Mostriamo la finestra a schermo intero
        window.showFullScreen()

        # Eseguiamo l'applicazione fino a quando la finestra viene chiusa
        app.exec_()

        # Generiamo l'audio tramite TTS dopo la chiusura della finestra
        speak_text("La finestra è stata chiusa. La riapriamo adesso.")

        # Dopo la chiusura della finestra, riapriamo dopo un breve ritardo
        time.sleep(0.1)

if name == '__main__':  # Corretto da 'name' a 'name'
    try:
        open_window()
    except KeyboardInterrupt:
        print("Esecuzione interrotta.")
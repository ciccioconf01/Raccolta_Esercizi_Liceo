import sys
import time
from PyQt5.QtWidgets import QApplication, QLabel, QWidget, QVBoxLayout
from PyQt5.QtCore import Qt

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
        
        # Mostriamo la finestra
        window.show()

        # Eseguiamo l'applicazione fino a quando la finestra viene chiusa
        app.exec_()
        
        # Dopo la chiusura della finestra, riapriamo dopo un breve ritardo
        time.sleep(0.1)

if __name__ == '__main__':
    try:
        open_window()
    except KeyboardInterrupt:
        print("Esecuzione interrotta.")

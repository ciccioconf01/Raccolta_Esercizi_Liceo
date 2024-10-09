import tkinter as tk
import time

def open_window():
    # Creiamo una finestra
    root = tk.Tk()
    root.title("Catarsi")  # Titolo della finestra

    # Impediamo la chiusura manuale della finestra usando il pulsante di chiusura
    def on_closing():
        root.destroy()  # Distrugge la finestra corrente
        time.sleep(0.1)  # Ritardo minimo prima di riaprire
        open_window()  # Riapre la finestra

    # Creiamo una etichetta con il messaggio
    label = tk.Label(root, text="IL MOMENTO E' CATARTICO", font=("Helvetica", 24))
    label.pack(padx=20, pady=20)

    # Associazione del comportamento quando si chiude la finestra
    root.protocol("WM_DELETE_WINDOW", on_closing)

    # Iniziamo il loop della finestra
    root.mainloop()

# Esegui la prima finestra
try:
    open_window()
except KeyboardInterrupt:
    print("Esecuzione interrotta.")

/**
 * My Simple Driver
 * 
 * Questo esercizio simula la creazione di un semplice driver.
 * 
 * Per questo esempio, ho copiato le reali specifiche (specs) del dispositivo Bluetooth
 * del mio computer, un MacBook Pro (early 2015).
 * 
 * Troverete una define che ha come valore l'indirizzo di memoria di una variabile
 * in questo stesso file, ma basta sostituire il valore di questa define
 * con l'indirizzo di memoria reale delle specifiche, e tutto continua a funzionare.
 * 
 * COMPITO DA SVOLGERE
 * Completate questo file in modo che abbia come output il seguente testo:
 * 
 * Name: Claudio's MacBook Pro
 * Address: F4-5C-89-9A-64-78
 * Bluetooth Low Energy Supported: Yes
 * ...continua per tutte le specifiche...
 * 
 */

#include <iostream>
using namespace std;

// In questo esempio, l informazioni sono salvate in questa stringa
const char memory_dump[] = "Claudio's MacBook Pro\000F4-5C-89-9A-64-78\000Yes\000Yes\000Yes\000Broadcom\000USB\00020703A1\000v169 c4825\000On\000Off\000Yes\000On\000On\0000x05AC\0000x8290\0004.2 (0x8)\0000x12D9\0004.2 (0x8)\0000x21A9\000Computer\000Mac Portable\0000x38010C\0000x01\0000x03\0000x1C0\000On\000";

// Questa define ha come valore l'indirizzo di memoria delle specifiche
#define BLUETOOTH_DEVICEINFO_MEMORY_ADDR (memory_dump)

// Di seguito l'array di stringhe che contiene i nomi delle specifiche bluetooth
// Queste informazioni vengono date dal costruttore dell'hardware e sono costanti
const char* bluetooth_deviceinfo_specs[] = {
    "Name",
    "Address",
    "Bluetooth Low Energy Supported",
    "Handoff Supported",
    "Instant Hot Spot Supported",
    "Manufacturer",
    "Transport",
    "Chipset",
    "Firmware Version",
    "Bluetooth Power",
    "Discoverable",
    "Connectable",
    "Auto Seek Pointing",
    "Remote wake",
    "Vendor ID",
    "Product ID",
    "Bluetooth Core Spec",
    "HCI Revision",
    "LMP Version",
    "LMP Subversion",
    "Device Type (Major)",
    "Device Type (Complete)",
    "Composite Class Of Device",
    "Device Class (Major)",
    "Device Class (Minor)",
    "Service Class",
    "Auto Seek Keyboard"};

// Questa è la lunghezza dell'array precedente
const int bluetooth_deviceinfo_specs_num = 27;

int main()
{
    // Creiamo il nostro puntatore che useremo per le operazioni
    const char *pDriverInfo = BLUETOOTH_DEVICEINFO_MEMORY_ADDR;

    // ---  IL CODICE DA SCRIVERE COMINCIA QUI ---
    // Scrivere un ciclo che iteri su tutti gli elementi di specs
    // ...

}

// Esercizio avanzato: completare lo stesso esercizio precedente, ma usando 
// una funzione con la seguente firma:
const char *print_next(const char *p, const char *name);
// in cui:
// - p è il puntatore all'inizio della memoria che contiene la specifica,
// - name è il nome della specifica
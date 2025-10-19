# Programmazione 1

## Compilatore
g++ <nomefile.cc> -> compila file (comando da eseguire all'interno della cartella del file).
./a.out -> esegue l'ultimo file compilato.
cd /mnt/c/esempiP1 -> va alla cartella esempi Programmazione 1 su Windows 11.

## Git
git clone <link> -> clona repository sulla macchina locale.
git add . -> aggiunge tutte le modifiche effettuate nel repository alle modifiche che verrano salvate.
git commit -m "<messaggio>" -> salva tutte le modifiche sul repository locale.
git push -> invia le modifiche del repository locale online.
git pull -> copia le modifica, del repository da github a locale.

## Valori Buleani
NOT (!) = valore opposto di quel valore (si usa una una sola variabile)
AND (&&) = stesso valore restituisce quel valore 
OR (||) = true se un valore è true
XOR = true se sono valori diversi (true o false)

valore booleano:    true = 1     false = 0
valore booleano: true=1 false=0

## Maiuscole e minuscole
(a sempre minore b, A sempre minore a)
Assumo che il valore delle Maiuscole precede le minuscole
E carattere in input è una lettera
Maiuscole = minore di 91
minuscole = maggiore di 91
Assumo che il valore delle minuscole precede le Maiuscole

## Variabili
Se inizializzo variabile senza assegnarli valore fuori main è una variabile globale con valore = 0.
Se inizializzo variabile dentro main senza assegnarli valore non so quale valore assume.
QUINDI assegna sempre valore a variabile inizializzata.

## Ordine operatori (dal più alto al più basso)
Operatori unari e di precedenza più alta: ::, (), ++ (prefisso), sizeof, * (indiretto), & (indirizzo), ~, !.
Moltiplicativi: * (moltiplicazione), / (divisione), % (modulo).
Additivi: + (addizione), - (sottrazione).
Shifts bit a bit: <<, >>.
Relazionali: <, <=, >, >=.
Di uguaglianza: ==, !=.
AND bit a bit: &.
OR bit a bit: ^.
OR esclusivo bit a bit: |.
AND logico: &&.
OR logico: ||.
Espressione condizionale: ?:.
Assegnazione: =, +=, -=, *= ecc.

## Puntatori
*pd (puntatore)
sempre inizializzarlo e dirgli a cosa puntare, un puntatore assume come valore indirizzo di quella variabile (uso pd = &x) però se uso *pd ottengo anche valore a cui punta. 
*pd = 5 (cambia il valode di pd con 5)
# TwoDiceSimulation

Et simpelt C-program der simulerer kast med **to seks-sidede terninger**.  
Flowchartet i *TwoDiceSimulation.png* viser programmets logik og kontrolflow.

Programmet udfører **50.000 kast**, lægger de to terningers værdier sammen og tæller hvor mange gange hver sum (2–12) forekommer.

## Brug
```bash
gcc TwoDiceSimulation.c -o TwoDiceSimulation
./TwoDiceSimulation
```

Programmet:

- Initialiserer et array til at tælle forekomster for alle mulige summer (2–12).
- Kører et loop på 50.000 iterationer.
- Genererer to tilfældige tal mellem 1 og 6.
- Lægger tallene sammen og øger tællingen for den sum.
- Udskriver til sidst resultatet for alle summer fra 2 til 12.

Filer:
TwoDiceSimulation.c – selve programmet 
TwoDiceSimulation.png – flowchart for programmet

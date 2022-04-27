Blackjack-korttipeli

# Yleistietoa

Kyseessä on perinteinen komentorivillä pelattava Blacjack-peli.  Pelin tavoitteena on saada korttien summaksi 21 tai päästä mahdollisimman lähelle sitä. Peliä pelataan jakajaa (Dealer) vastaan. Pelin alussa jakaja jakaa kaksi korttia pelaajalle kuvapuoli ylöspäin, ja itselleen kaksi korttia, joista toisen kuvapuoli on alaspäin ja toinen ylöspäin. Tämän jälkeen pelaaja voi ottaa lisää kortteja, jotta yhteen laskettu summa olisi suurempi. Pelaaja voittaa pelin, mikäli korttien yhteenlaskettu summa on suurempi kuin jakajan korttien summa tai tasan 21. Jos pelaajan korttien summa menee yli 21, pelaaja häviää ja jakaja voittaa. 



# Pelin (kooditiedoston) lataaminen koneelle

Pelin lataaminen onnistuu lataamalla BlackJackGame -tiedosto koneelle. Lataamiseen tarvitaan jokin koodieditori esimerkiksi (Visual studio code, Qt Creator).


# Pelin pelaaminen

Avaa BlackJackGame -tiedosto koodieditorilla. Ajamalla tiedoston avautuu näytölle komentorivi, pelin käynnistyessä peli kysyy pelaajalta nimeä. 

![image](https://user-images.githubusercontent.com/62377839/148910095-307ea52f-ef51-4e95-a570-21b498fb9b4a.png)

Kun pelaaja on syöttänyt nimen, peli käynnistyy ja jakaja jakaa ensimmäiset kortit pelaajalle ja itselleen.
 
![image](https://user-images.githubusercontent.com/62377839/148909814-b56ade14-1a99-48d7-8e97-0538dc76cb92.png)


Peli kysyy pelaajalta, haluaako pelaaja uuden kortin. Syöttämällä komentoriville tiedot, peli jatkuu kunnes pelaaja ei halua enempää kortteja tai korttien summa ylittää 21.

![image](https://user-images.githubusercontent.com/62377839/148909977-a0ebf0e7-a19c-49dd-9f91-21e3bebbff29.png)


Kun pelaaja ei halua enempää kortteja tai korttien summa ylittää 21, peli kertoo kumpi, voittaa ja kysyy haluaako pelaaja pelata uudelleen.

#include "service.h"

void add_input_data(Service& s)
{
	s.addUser(1, "Cami", 19, "Aiud");
	s.addUser(2, "Teo", 19, "Hunedoara");
	s.addUser(3, "Diana", 19, "Blaj");
	s.addUser(4, "Ariana", 20, "Sighisoara");
	s.addUser(5, "Andreea", 19, "Zalau");
	s.addUser(6, "Andrei", 19, "Campulung");
	s.addUser(7, "Vasi", 20, "Zalau");
	s.addUser(8, "Iustin", 20, "Neamt");
	s.addUser(9, "Lucas", 19, "Oradea");
	s.addUser(10, "Alexia", 19, "Tarnaveni");
	s.addUser(11, "Cristi", 20, "Galati");
	s.addUser(12, "Gabi", 19, "Botosani");
	s.addUser(13, "Sebi", 19, "Aiud");
	s.addUser(14, "Ari", 20, "Aiud");
	s.addUser(15, "Iulia", 19, "Aiud");
	s.addUser(16, "Ferna", 19, "Aiud");

	s.addFriendship(1, 2);
	s.addMessage(1, 2, "hei");
	s.addMessage(1, 2, "ce faci?");
	s.addMessage(2, 1, "heii");
	s.addMessage(2, 1, "binee");
	s.addMessage(2, 1, "tuu?");
	s.addMessage(1, 2, "citesc o carte");
	s.addMessage(2, 1, "ioi ce fain");
	s.addMessage(2, 1, "ce carte?");
	s.addMessage(1, 2, "cea mai geniala ever");
	s.addMessage(1, 2, "I am Number Four <3");
	s.addFriendship(1, 3);
	s.addMessage(1, 3, "vreau pizza");
	s.addMessage(3, 1, "si eu");
	s.addMessage(1, 3, "hai sa comandam");
	s.addMessage(1, 3, "de unde vrei?");
	s.addMessage(3, 1, "Cupidon Pizza");
	s.addMessage(3, 1, "obviously");
	s.addMessage(1, 3, "daaaa");
	s.addMessage(1, 3, "cu bordura de branzaa");
	s.addMessage(1, 3, "adooor");
	s.addFriendship(1, 5);
	s.addMessage(5, 1, "salut");
	s.addMessage(5, 1, "ai fost la curs de dimineata?");
	s.addMessage(1, 5, "salutt");
	s.addMessage(1, 5, "da");
	s.addMessage(5, 1, "oare imi poti trimite si mie pls?");
	s.addMessage(1, 5, "sigur");
	s.addMessage(5, 1, "mersiii muult");
	s.addFriendship(1, 10);
	s.addMessage(10, 1, "sunt la piata");
	s.addMessage(10, 1, "ce fructe vrei?");
	s.addMessage(1, 10, "lebenita");
	s.addMessage(1, 10, "cirese");
	s.addMessage(1, 10, "nectarine");
	s.addMessage(1, 10, "si stuguri");
	s.addMessage(1, 10, "struguri*");
	s.addMessage(10, 1, "bun");
	s.addMessage(10, 1, "mai iau si capsuni");
	s.addMessage(1, 10, "perfeect");
	s.addFriendship(1, 11);
	s.addMessage(1, 11, "heellooo");
	s.addMessage(11, 1, "heiii bunaa");
	s.addMessage(1, 11, "ce mai faaaci?");
	s.addMessage(11, 1, "invat la geome");
	s.addMessage(11, 1, "tu?");
	s.addMessage(1, 11, "me too");
	s.addFriendship(1, 13);
	s.addMessage(13, 1, "pleacaa");
	s.addMessage(1, 13, "maine o sa-mi treacaa");
	s.addMessage(13, 1, "ce daca");
	s.addMessage(1, 13, "durerea a venit");
	s.addMessage(13, 1, "si nu mai pleacaa");
	s.addMessage(1, 13, "laasa-ma sa moor");
	s.addMessage(13, 1, "de door");
	s.addFriendship(1, 16);
	s.addMessage(1, 16, "imi e dor de tineee");
	s.addMessage(1, 16, "grav");
	s.addMessage(16, 1, "si mie de tinee");
	s.addMessage(1, 16, "dupa sesiune");
	s.addMessage(1, 16, "ne vedem");
	s.addMessage(1, 16, "musai");
	s.addMessage(16, 1, "claaarrrrr");
	s.addFriendship(2, 5);
	s.addMessage(2, 5, "hai afara la zapadaa");
	s.addMessage(5, 2, "hai un om sa construiim");
	s.addMessage(2, 5, "de ce nu vrei sa imi raspunzi");
	s.addMessage(5, 2, "de ce te-ascunzi");
	s.addMessage(2, 5, "de ce nu ne-ntalniim");
	s.addFriendship(2, 8);
	s.addMessage(8, 2, "de la magazin vreau");
	s.addMessage(8, 2, "un caiet de mate");
	s.addMessage(8, 2, "unul de romana");
	s.addMessage(8, 2, "si niste pixuri");
	s.addMessage(2, 8, "10 pixuri iti ajung?");
	s.addMessage(8, 2, "ia 11 sa fie");
	s.addMessage(2, 8, "vaii :))");
	s.addMessage(2, 8, "bine");
	s.addFriendship(4, 3);
	s.addMessage(4, 3, "heei");
	s.addMessage(4, 3, "vii maine la curs, asa-i?");
	s.addMessage(3, 4, "heeii");
	s.addMessage(3, 4, "dada");
	s.addMessage(4, 3, "bun");
	s.addMessage(4, 3, "ne vedem");
	s.addFriendship(4, 16);
	s.addMessage(4, 16, "ce sa ii iau la Cami de ziua ei?");
	s.addMessage(16, 4, "hmmm");
	s.addMessage(16, 4, "eu zic ca");
	s.addMessage(16, 4, "sa ii iei un inel");
	s.addMessage(16, 4, "cu ala nu dai gres");
	s.addMessage(4, 16, "coreeect");
	s.addMessage(4, 16, "adora inelele");
	s.addMessage(16, 4, "si inca cuum");
	s.addMessage(16, 4, "is preferatele ei");
	s.addMessage(4, 16, "perfect atunci");
	s.addMessage(4, 16, "o sa caut");
	s.addMessage(4, 16, "si sper sa gasesc ceva fain");
	s.addMessage(16, 4, "<3");
	s.addFriendship(7, 8);
	s.addMessage(7, 8, "mere");
	s.addMessage(7, 8, "caiet");
	s.addMessage(7, 8, "inima");
	s.addMessage(7, 8, "fluture");
	s.addMessage(7, 8, "magie");
	s.addMessage(8, 7, "te plictisesti?");
	s.addMessage(7, 8, "abracadabra");
	s.addMessage(7, 8, "yep, am ramas singur acasa");
	s.addMessage(8, 7, "ai putea sa inveti la analiza");
	s.addMessage(8, 7, "zic si eu");
	s.addFriendship(7, 9);
	s.addMessage(7, 9, "hei buna buna");
	s.addMessage(9, 7, "bonjour");
	s.addMessage(7, 9, "cf tu?");
	s.addMessage(9, 7, "mananc");
	s.addMessage(9, 7, "tu cf?");
	s.addMessage(7, 9, "stau si stau");
	s.addMessage(9, 7, "nice");
	s.addMessage(9, 7, "=)))");
	s.addFriendship(12, 11);
	s.addMessage(12, 11, "zi o culoare");
	s.addMessage(12, 11, "prima care iti vine in minte");
	s.addMessage(11, 12, "aamm");
	s.addMessage(11, 12, "mov");
	s.addMessage(11, 12, "verde");
	s.addMessage(11, 12, "rosu");
	s.addMessage(11, 12, "ba nu, albastru");
	s.addMessage(12, 11, "om mai nehotarat eu n-am vazut");
	s.addMessage(11, 12, "ahahah");
	s.addFriendship(15, 16);
	s.addMessage(15, 16, "mergem maine la mall?");
	s.addMessage(16, 15, "ioii daa");
	s.addMessage(16, 15, "chiar imi era dor");
	s.addMessage(15, 16, "perfect");
	s.addMessage(15, 16, "iti zic maine la ce ora");
	s.addMessage(16, 15, "super");
	s.addMessage(16, 15, "din partea mea oricand e bine");
	s.addMessage(16, 15, "maine nu am ore");
	s.addMessage(15, 16, "la fix atunci");
	s.addFriendship(10, 16);
	s.addMessage(10, 16, "a");
	s.addMessage(16, 10, "b");
	s.addMessage(10, 16, "c");
	s.addMessage(16, 10, "d");
	s.addMessage(10, 16, "e");
	s.addMessage(16, 10, "f");
	s.addMessage(10, 16, "g");
	s.addFriendship(6, 16);
	s.addMessage(6, 16, "vreau inghetata");
	s.addMessage(16, 6, "si eu vreau");
	s.addMessage(6, 16, "mergi sa cumperi?");
	s.addMessage(16, 6, "eu sa merg?");
	s.addMessage(6, 16, "da");
	s.addMessage(6, 16, "mie imi e lene");
	s.addMessage(16, 6, "da si crezi ca eu am mai mult chef?");
	s.addMessage(6, 16, "apai no");
	s.addMessage(16, 6, "mergem amandoi si gata");
	s.addFriendship(6, 13);
	s.addMessage(6, 13, "hei");
	s.addMessage(6, 13, "vrei sa auzi o gluma?");
	s.addMessage(13, 6, "te rog nu");
	s.addMessage(6, 13, "ce ii spune un perete altui perete?");
	s.addMessage(13, 6, "...");
	s.addMessage(6, 13, "hai bai intra in joc");
	s.addMessage(6, 13, "deci");
	s.addMessage(6, 13, "ce ii spune un perete altui perete?");
	s.addMessage(13, 6, "ce?");
	s.addMessage(6, 13, "ne intalnim la colt ;)");
	s.addMessage(13, 6, "ce prost esti");
	s.addFriendship(10, 14);
	s.addMessage(14, 10, "cum e vremea afara?");
	s.addMessage(10, 14, "pare cald");
	s.addMessage(10, 14, "totusi s-ar putea sa vina ploaia");
	s.addMessage(14, 10, "mda...");
	s.addMessage(14, 10, "asa zice si pe prognoza");
	s.addMessage(10, 14, "sa iti iei si o umbrela sa o ai la tine");
	s.addMessage(14, 10, "da");
	s.addMessage(14, 10, "asa ar fi cel mai bine");
	s.addFriendship(4, 11);
	s.addMessage(4, 11, "auzi");
	s.addMessage(4, 11, "tu stii sa faci modelul de test la geome?");
	s.addMessage(4, 11, "ma poti ajuta?");
	s.addMessage(11, 4, "inca nu m-am uitat peste el");
	s.addMessage(11, 4, "si in plus");
	s.addMessage(11, 4, "is numa la cursul 10");
	s.addMessage(4, 11, "eu is la 12 acuma");
	s.addMessage(11, 4, "hai ca ma uit sa vad ce minunatii sunt pe acolo");
	s.addMessage(11, 4, "...");
	s.addMessage(11, 4, "Cere i ajutor lui dumnezeu ca");
	s.addMessage(11, 4, "E peste puterea mea");
	s.addMessage(4, 11, "La 3 radem,da?");
	s.addFriendship(5, 9);
	s.addMessage(5, 9, "tu vezi cat e la analiza de invatat?!?!");
	s.addMessage(5, 9, "o sa mor");
	s.addMessage(9, 5, "sincer");
	s.addMessage(9, 5, "Oricum nu inteleg nimic");
	s.addMessage(9, 5, "Deci nu ma afecteaza");
	s.addMessage(5, 9, "ii bun..");
	s.addFriendship(15, 8);
	s.addMessage(15, 8, "heei");
	s.addMessage(8, 15, "saluut");
	s.addMessage(15, 8, "sunt la florarie");
	s.addMessage(15, 8, "sa iau un buchet sau un aranjament?");
	s.addMessage(8, 15, "eu zic mai bine un aranjament");
	s.addMessage(8, 15, "e mai frumos");
	s.addMessage(8, 15, "si rezista putin mai mult");
	s.addMessage(15, 8, "da, ai dreptate");
	s.addMessage(15, 8, "bun");
	s.addMessage(15, 8, "asa fac");
	s.addFriendship(6, 10);
	s.addMessage(6, 10, "iti e foame sau inca nu?");
	s.addMessage(10, 6, "tocmai am mancat un mar");
	s.addMessage(10, 6, "deci momentan nu mai imi e foame");
	s.addMessage(6, 10, "no bun");
	s.addMessage(6, 10, "atunci mancam numa peste o ora");
	s.addFriendship(4, 2);
	s.addMessage(2, 4, "ti-aduci aminte cand ne-am combinat");
	s.addMessage(2, 4, "era frumos, era perfect, era adevarat");
	s.addMessage(4, 2, "pe mese sau sub mese, dar numai impreuna");
	s.addMessage(4, 2, "iubirea si distractia se cam tineau de mana");
	s.addMessage(2, 4, "apoi te-ai transformat usor, usor, in profesoara");
	s.addMessage(2, 4, "si-am inceput sa am restante-n fiecare seara");
	s.addMessage(2, 4, "ziceai ceva de genul");
	s.addMessage(4, 2, "iubirea-i lupta grea");
	s.addMessage(2, 4, "dar o cam luasesi razna, luptai doar contra mea");
	s.addFriendship(4, 12);
	s.addMessage(4, 12, "vrei sa auzi o gluma?");
	s.addMessage(12, 4, "hai spune");
	s.addMessage(4, 12, "ce iasa daca combini o intrebare retorica cu o gluma?");
	s.addMessage(12, 4, "nu stiu");
	s.addMessage(12, 4, "ce iasa?");
	s.addMessage(4, 12, "...");
	s.addMessage(12, 4, "bai");
	s.addMessage(12, 4, "zi ceva");
	s.addMessage(4, 12, "*cri* *cri*");
	s.addMessage(12, 4, "te trec pe caiet si aduci gluma data viitoare");
	s.addMessage(4, 12, "e hai nu fi rau..");
	s.addFriendship(13, 14);
	s.addMessage(13, 14, "cum trecem noi de sesiunea asta?");
	s.addMessage(13, 14, "ca-i cam jale");
	s.addMessage(14, 13, "la fel ca si sesiunea trecuta");
	s.addMessage(14, 13, "cu chiu cu vai");
	s.addMessage(14, 13, "cu mai mult vai");
	s.addFriendship(13, 15);
	s.addMessage(13, 15, "la ce apartament stai?");
	s.addMessage(15, 13, "42");
	s.addMessage(15, 13, "etajul 4");
	s.addMessage(13, 15, "bunn");
	s.addMessage(13, 15, "ajung in 5 minute");
	s.addFriendship(3, 13);
	s.addMessage(3, 13, "stii ce inseamna prescurtarea CDPLR?");
	s.addMessage(13, 3, "ce?");
	s.addMessage(3, 13, "cuadripol diport pasiv liniar reciproc");
	s.addMessage(13, 3, "*you cannot longer reply to this conversation*");
	s.addFriendship(3, 7);
	s.addMessage(3, 7, "deci");
	s.addMessage(3, 7, "saptamana viitoare avem");
	s.addMessage(3, 7, "efectiv 4 examene");
	s.addMessage(7, 3, "luni OOP");
	s.addMessage(3, 7, "marti SDA");
	s.addMessage(7, 3, "miercuri geome");
	s.addMessage(3, 7, "vineri peda");
	s.addMessage(7, 3, "...");
	s.addMessage(7, 3, "na situatie");
	s.addMessage(3, 7, "cedez psihic");
	s.addMessage(3, 7, "c.e.d.e.z p.s.i.h.i.c");
	s.addMessage(7, 3, "Imi vine sa plang.. dar n-am timp");
}
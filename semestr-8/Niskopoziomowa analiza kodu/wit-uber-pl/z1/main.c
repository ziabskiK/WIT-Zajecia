sbit at 0xB4 T1; // speeker
xdata at 0x8000 unsigned char U12; // mlodsza czescesc zmiennej odpowiada za dolne guziki
				  // jesli jest gdzies 0, to zanczy ze jest wcisneity jakis przycisk 
				  // zadani 1 guzik buzer dziala
				  // 2 buzer nie dziala
				  // 3 czestotliwosc do gory
				  // 4 czestotliwosc do dolu
void main (void) {
	unsigned char r=0;
	unsigned char i=0;
			

	for(;;){     
		if (( r & 0x01) == 0) // maskowanie
			T1 = 1;
		else
			T1 = 0;
		r++;
		for(i=0;i<50;i++);
	}
}

//petla nieskonczona, zawsze musi byc w pn
// typy zmiennych zmienne sa 8 bitowe bo 
// unsiged char -> 0-255
// zmienne powiazane ze sprzetem deklarujemy gobalnie, bo niema sensu lokanie, bo sa powiazane ze sprzetem, i inna funkcja i tka by je nadpisala
// pamiec sbit jest 1-no bitowa jest to pamiecv rejestrow spec procesora 

//maski  
//trza umiec przelica bin -> hex i hex -> bin
// maska okresla bity ktore nas interesuja 

//00110100 0x34  &
//XX11X0XX  
//00110000  0x30
//if ((a&0x34) == 0x30)
//
//
//
//
//
//na next zajecia maski
//i dokument 2 
// | suma logiczna
// A = A  | 0x20 ; wstawienie '1'
// A = A & 0xBF;   a &= 0xbf; wstawienie '0'
//
//
//


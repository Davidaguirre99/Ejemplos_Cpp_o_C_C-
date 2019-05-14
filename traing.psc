
	//    Lee los tres lados de un triangulo rectangulo, determina 
	// si corresponden (por Pitargoras) y en caso afirmativo 
	// calcula el area
	
	Algoritmo TrianguloRectangulo
		
		
		// cargar datos
		Definir l1,l2,l3 Como Real;
		Escribir "Ingrese el lado 1:";
		Leer lad1;
		Escribir "Ingrese el lado 2:";
		Leer lad2;
		Escribir "Ingrese el lado 3:";
		Leer lad3;
		
		// encontrar la hipotenusa (mayor lado)
		Definir cat1,cat2,hip Como Real;
		Si lad1>lad2 Entonces
			cat1<-lad2;
			Si lad1>lad3 Entonces
				hip<-lad1;
				cat2<-lad3;
			SiNo
				hip<-lad3;
				cat2<-lad1;
			FinSi
		SiNo
			cat1<-lad1;
			Si lad2>lad3 Entonces
				hip<-lad2;
				cat2<-lad3;
			SiNo
				hip<-lad3;
				cat2<-lad2;
			FinSi
		FinSi
		
		// ver si cumple con Pitagoras
		Si (hip^2 = cat1^2 + cat2^2) Entonces
			// calcualar area
			Definir area como real;
			area<-(cat1*cat2)/2;
			Escribir "El area es: ",area;
		SiNo
			Escribir "No es un triangulo rectangulo.";
		FinSi
		
FinAlgoritmo


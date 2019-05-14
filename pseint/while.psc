Algoritmo Ejemplo_while
	
		
		Definir intentos,num_secreto,num_ingresado Como Entero;
		intentos<-3;
		num_secreto <- azar(50)+1;
		escribir "el numero aleatorio es", num_secreto;
		Escribir "Adivine el numero (de 1 a 50):";
		Leer num_ingresado;
		Mientras num_secreto!=num_ingresado Y intentos>1 Hacer
			Si num_secreto>num_ingresado Entonces
				Escribir "Muy bajo";
			SiNo 
				Escribir "Muy alto";
			FinSi
			intentos <- intentos-1;
			Escribir "Le quedan ",intentos," intentos:";
			Leer num_ingresado;
		FinMientras
		
		Si num_secreto=num_ingresado Entonces
			Escribir "Exacto! Usted adivino en ",4-intentos," intentos.";
		SiNo
			Escribir "El numero era: ",num_secreto;
		FinSi
FinAlgoritmo

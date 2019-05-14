// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

Program ejercicio_1;

Var
	anio: Array [0..4] Of String;
	anio2: String;
	dato2: String;
	dav: Integer;
	lco: Boolean;
	logi: Boolean;
	opl: Boolean;
	port: String;
	vilm: Integer;
	weezer: Real;
Begin
	dav := 5;
	port := '5';
	dato2 := '5';
	vilm := -4;
	weezer := 3.156;
	anio[1] := '2';
	anio[2] := '0';
	anio[3] := '1';
	anio[4] := '9';
	anio2 := '2019';
	opl := True;
	logi := False;
	lco := False;
	WriteLn('Estos son las variables definidas ');
	WriteLn(dav);
	WriteLn(vilm);
	WriteLn(port);
	WriteLn('Esta es una variable del tipo caracter');
	WriteLn(anio[1],anio[2],anio[3],anio[4]);
	WriteLn(dato2);
	WriteLn(anio2);
	WriteLn(weezer);
	WriteLn(opl);
	WriteLn(logi);
	WriteLn(lco);
End.


// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

using System;

namespace PSeInt {
	class si_entonce_davidaguirre {

		static void Main(string[] args) {
			int a;
			int b;
			Console.WriteLine("Escriba el primer numero para comparar");
			a = int.Parse(Console.ReadLine());
			Console.WriteLine("Escriba el segundo numero");
			b = int.Parse(Console.ReadLine());
			if (a>b) {
				Console.WriteLine(a+"es mayor que"+b);
			} else {
				Console.WriteLine(a+"es menor igual que "+b);
			}
		}

	}

}


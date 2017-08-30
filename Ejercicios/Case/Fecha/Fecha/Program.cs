using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Fecha
{
    class Program
    {
        static void Main(string[] args)
        {
            Fecha f = new Fecha();//Instancio la clase fecha

            Console.WriteLine("Ingrese el día");
            f.I = Convert.ToInt32(Console.ReadLine())-1;//Le resto uno por la posicion de un array(pero que la experiencia del programa sea real)
            Console.WriteLine("Ingrese el Mes");
            f.F = Convert.ToInt32(Console.ReadLine())-1;
            Console.WriteLine("Ingrese el Año");
            f.Año = Convert.ToInt32(Console.ReadLine());

            if (f.ValidarFecha(f.I, f.F) == true) Console.WriteLine("Hoy es {0} de {1} del año {2}", f.Dia.GetValue(f.I), f.Mes.GetValue(f.F), f.Año);
            else Console.WriteLine("La fecha ingresada es incorrecta");

            Console.ReadKey();
        }
    }
}

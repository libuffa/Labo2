using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Fecha
{
    public class Fecha
    {
        public Dia[] Dia = new Dia[31];
        public Mes[] Mes = new Mes[12];
        public int Año { get; set; }
        public int Señalador = 0;
        public int I { get; set; }
        public int F { get; set; }
        
        public Fecha() //Constructor
        {
            foreach (Dia i in Enum.GetValues(typeof(Dia)))//Asigna el valor y fecha
            {
                Dia[Señalador] = i;
                Señalador++;
            }
            Señalador = 0;
            foreach (Mes i in Enum.GetValues(typeof(Mes)))
            {
                Mes[Señalador] = i;
                Señalador++;
            }
        }
        
        public bool ValidarFecha(int _I,int _F)
        {
            this.I = _I;
            this.F = _F;
            switch (_F)//La posición correspondiente se termina validando
            {
                case 1:
                    if (Dia[_I] > Dia[27])//Si es mayor a 28 hace otro if
                        if (Año > 1900 && ((Año % 4 == 0 && Año % 100 != 0) || Año % 400 == 0))//Este prueba si es bisciesto
                        {
                            if (Dia[_I] > Dia[28]) return false;//Finalmente si es mayor a 29 devuelve falso
                            else Console.WriteLine("Es año bisiesto!");
                        }
                        else return false;
                    break;
                case 3:
                case 5:
                case 8:
                case 10:
                    if (Dia[_I] > Dia[29]) return false;
                    break;
                default:
                    break;
            }
            return true;
        }
    }
}

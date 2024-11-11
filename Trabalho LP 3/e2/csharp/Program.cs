using System;

namespace SimpleCalculatorApp
{
  class Sum
  {

    static double sum(double x, double y){
        return x + y;
    }

    static double multiply(double x, double y){
        return x * y;
    }

    static bool deseja_continuar(char escolha){
        switch(escolha){
            case 's': 
                Console.Clear();
                return true; 
            case 'n':
                Console.WriteLine("Operacao finalizada.");
                Console.WriteLine("Pressione qualquer tecla para continuar. . .");
                Console.ReadKey();
                return false;
            default:
                Console.WriteLine("Comando invalido. Operacao finalizada.");
                Console.WriteLine("Pressione qualquer tecla para continuar. . .");
                Console.ReadKey();
                return false;
        }
    }
    static void Main(string[] args)
    {
        bool continuar = true;

        do{
            Console.WriteLine("======== CALCULADORA ========");
            Console.WriteLine("=========== IFBA ============\n");
            Console.WriteLine("1. Soma\n2.Multiplicacao\n3.Sair\n");

            bool repetir;

            do{
                
                char opcao2;
                double n1, n2, op;

                Console.WriteLine("Digite a operacao desejada: ");
                int opcao = Convert.ToInt32(Console.ReadLine());

                switch(opcao){
                    case 1:
                        Console.WriteLine("\nOBS. INSIRA OS VALORES COMO NO EXEMPLO: 10,0\n");
                        Console.WriteLine("N1: ");
                        n1 = Convert.ToDouble(Console.ReadLine());
                        Console.WriteLine("N2: ");
                        n2 = Convert.ToDouble(Console.ReadLine());

                        op = sum(n1, n2);

                        Console.WriteLine(n1 + " + " + n2 + " = " + op);
                        Console.WriteLine("Deseja continuar?[s/n]: ");
                        opcao2 = Console.ReadKey().KeyChar;
                        Console.ReadLine();

                        continuar = deseja_continuar(opcao2);
                        repetir = false;
                        break;
                    case 2: 
                        Console.WriteLine("N1: ");
                        n1 = Convert.ToDouble(Console.ReadLine());
                        Console.WriteLine("N2: ");
                        n2 = Convert.ToDouble(Console.ReadLine());

                        op = multiply(n1, n2);

                        Console.WriteLine(n1 + " x " + n2 + " = " + op);
                        Console.WriteLine("Deseja continuar?[s/n]: ");
                        opcao2 = Console.ReadKey().KeyChar;
                        Console.ReadLine();

                        continuar = deseja_continuar(opcao2);
                        repetir = false;
                        break;
                    case 3: 
                        Console.WriteLine("Operacao finalizada.");
                        Console.WriteLine("Pressione qualquer tecla para continuar. . .");
                        Console.ReadKey();
                        repetir = false;
                        continuar = false;
                        break;
                    default:
                        Console.WriteLine("Comando invalido. Digite um numero indicado nas opcoes.\n");
                        Console.WriteLine("Pressione qualquer tecla para continuar. . .");
                        Console.ReadKey();
                        Console.Clear();
                        repetir = true;
                        break;
                }
            }while(repetir);
        }while(continuar);  
    }
  }
}
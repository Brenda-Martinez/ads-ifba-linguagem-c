use strict;
use warnings;

sub soma{
	
	my $x = $_[0];
	my $y = $_[1];
	
	my $resultado = $x + $y;
	return $resultado;
}

sub multiplicacao{
	
	my $x = $_[0];
	my $y = $_[1];
	
	my $resultado = $x * $y;
	return $resultado;
}

sub deseja_continuar{
	
	my $escolha = $_[0];
	my $valor;
	
	if ($escolha eq 's'){
		$valor = 1;
	}elsif($escolha eq 'n'){
		$valor = 0;
		print "Operacao finalizada.";
		system('pause');
	}else{
		print "Comando invalido. Operacao finalizada.";
		$valor = 0;
		system('pause');
	}
	
	return $valor;
	
}

my $continuar = 1;

while ($continuar == 1){
	print "======== CALCULADORA ========\n";
	print "=========== IFBA ============\n\n";
	print "1. Soma\n2.Multiplicacao\n3.Sair\n";

	my $repetir = 1;
	while ($repetir == 1){
		print "Digite a operacao desejada: ";
		my $opcao = <STDIN>;
		print "\n";

		if ($opcao == 1){
			print "N1: ";
			my $n1 = <STDIN>;
			chomp($n1);
			print "N2: ";
			my $n2 = <STDIN>;
			chomp($n2);
			
			my $calculo = soma($n1, $n2);
			
			print "$n1 + $n2 = $calculo";
			print "\nDeseja continuar?[s\\n]: ";
			my $cont = <STDIN>;
			chomp($cont);
			$continuar = deseja_continuar($cont);
			
			$repetir = 0;
		}elsif ($opcao == 2){
			print "N1: ";
			my $n1 = <STDIN>;
			chomp($n1);
			print "N2: ";
			my $n2 = <STDIN>;
			chomp($n2);
			
			my $calculo = multiplicacao($n1, $n2);
			
			print "$n1 x $n2 = $calculo";
			print "\nDeseja continuar?[s\\n]: ";
			my $cont = <STDIN>;
			chomp($cont);
			$continuar = deseja_continuar($cont);
			
			$repetir = 0;
		}elsif ($opcao == 3){
			print "Operacao finalizada.";
			system('pause');
			$repetir = 0;
			$continuar = 0;
		}else{
			print "Comando invalido. Digite um numero indicado nas opcoes.\n"
		}
	}
}
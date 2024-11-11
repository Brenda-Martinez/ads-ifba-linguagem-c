use strict;
use warnings;

sub verificar_nota{
	
	# aprovado - 1, reprovado - 0
	
	my $nota = $_[0];
	
	if($nota >= 7){
		return 1;
	}else{
		return 0;
	}	
}

my @nota_alunos = ();
my $resultado;
my $nota_atual;
my $aluno_atual;

print "======== AVALIACAO 3 ========\n";
print "=========== IFBA ============\n";

for(my $i = 0; $i < 10; $i++){
	$aluno_atual = $i + 1;
	print "NOTA ALUNO $aluno_atual: ";
	$nota_atual = <STDIN>;
	chomp($nota_atual);
	push(@nota_alunos, $nota_atual);
}

print "=============================\n\n\n";

for(my $i = 0; $i < 10; $i++){
	$resultado = verificar_nota($nota_alunos[$i]);
	$aluno_atual = $i + 1;
	
	if($resultado == 1){
            print "ALUNO $aluno_atual foi APROVADO em linguagem de programacao.";
       }

       if($resultado == 0){
            print "ALUNO $aluno_atual foi REPROVADO em linguagem de programacao.";
       }

       print "\n";
}

system('pause');
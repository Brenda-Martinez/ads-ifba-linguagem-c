def verificar_nota(nota, x):
    #aprovado = 1 reprovado = 0

    if nota[x] >= 7:
        return True
    else:
        return False

nota_alunos = []

print ('======== AVALIACAO 3 ========')
print ('=========== IFBA ============\n')

for i in range (10):
    aluno_atual = i + 1
    pergunta = 'NOTA ALUNO ' + str(aluno_atual) + ': '
    nota_atual = float(input(pergunta))
    nota_alunos.insert(i, nota_atual)

print ('=============================\n')

for x in range (10):
    resultado = verificar_nota(nota_alunos, int(x))
    aluno_agora = int(x + 1)

    if resultado == True:
        print ('ALUNO', aluno_agora,' foi APROVADO em linguagem de programacao.')


    if resultado == False:
       print ('ALUNO', aluno_agora,'foi REPROVADO em linguagem de programacao.')
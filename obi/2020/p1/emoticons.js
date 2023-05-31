var divertido = 0, chateado = 0, resposta = "neutro", input;

fgets("input");

var tamanho = input.length;

for (var i = 0; i < tamanho; i++) {
    if (input[i] === ':') {
        i++;
        if (input[i] === '-' && i < tamanho) {
            i++;
            if (input[i] === ')' && i < tamanho){
                divertido += 1;
            } else if (input[i] === '(' && i < tamanho) {
                chateado += 1;
            }
        }
    }
}

if (divertido > chateado) {
    resposta = "divertido";
} else if (chateado > divertido) {
    resposta = "chateado";
}

printf("%s\n", resposta);
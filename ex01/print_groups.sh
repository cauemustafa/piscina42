#!/bin/sh

# verifica se FT_USER está definida
# -z -> Sintax: '-z STRING' retorna true se uma string estiver vazia 
if [ -z "$FT_USER" ];
then
	echo "Especifique um login na variável de ambiente 'FT_USER'"
	exit 1
fi

# Obtém os grupos ao qual o usuario pertence e substitui espaços por vírgulas
id -Gn | tr '[:blank:]' ','

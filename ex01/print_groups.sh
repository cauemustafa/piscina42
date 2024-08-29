#!/bin/sh

# Obtém os grupos ao qual o usuario pertence e substitui espaços por vírgulas
id $FT_USER -Gn | tr '[:blank:]' ',' | tr -d '\n'

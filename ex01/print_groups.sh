#!/bin/sh

# Obtém os grupos ao qual o usuario pertence e substitui espaços por vírgulas
id -Gn | tr '[:blank:]' ','

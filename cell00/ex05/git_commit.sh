#!/bin/bash
git rev-list HEAD -n 5
# HEAD se refere a branch atual
# a flag -n limita o número de commits listados
# o rev-list lista os hashes dos commits que pertencem a uma determinada revisão
# Exemplo: O git rev-list main lista todos os hashes dos commits de uma branch

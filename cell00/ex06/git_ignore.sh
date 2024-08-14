#!/bin/bash
git ls-files --ignored --others --exclude-standard

# git ls-files: Lista os arquivos do repositório.
# --ignored: Mostra arquivos que são ignorados com base nas regras definidas em .gitignore, .git/info/exclude, e outras configurações de exclusão.
# --others: Inclui arquivos que não estão sendo rastreados pelo Git.
# --exclude-standard: Aplica as regras de exclusão padrão do Git, garantindo que o comando considere as regras definidas em .gitignore, .git/info/exclude, e core.excludesFile.

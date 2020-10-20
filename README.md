# prog_modu
Vous trouverez dans ce dépôt les differents fichiers .c .h que je n'arrive pas à compiler


voilà ce que j'ai fait comme commande jusqu'à maintenant :

  - j'ai compiler via les commandes : gcc main.c -o main puis pour lancer ./main ce qui a donné :
            Undefined symbols for architecture x86_64:
            "_create_tree_n", referenced from:
                _main in main-1bb06e.o
            "_print_tree", referenced from:
                _main in main-1bb06e.o
          ld: symbol(s) not found for architecture x86_64
          clang: error: linker command failed with exit code 1 (use -v to see invocation)
          
 - puis j'ai retenté avec la commancde : gcc *.c -o main puis ./main et toujours la meme erreur (ci dessus)

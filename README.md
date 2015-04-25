# Bruteforce
Programme de bruteforcing adaptable au besoin.

Compilé avec GCC sur OS X Yosemite version 10.10.3

## Utilisation
./bruteforce 5

time ./bruteforce 5

Modifier la ligne 15 de main.c pour définir les caractères à tester.

Modifier la ligne 32 de main.c pour utiliser les chaines générées.

## Résultats

Pour les 62 caractères suivants :

- abcdefghijklmnopqrstuvwxyz

- ABCDEFGHIJKLMNOPQRSTUVWXYZ

- 0123456789

Environ 1,900,000,000.0 générations par seconde.

time ./bruteforce 1 => 0.003s

time ./bruteforce 2 => 0.003s

time ./bruteforce 3 => 0.003s

time ./bruteforce 4 => 0.010s

time ./bruteforce 5 => 0.480s

time ./bruteforce 6 => 29.00s

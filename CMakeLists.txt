cmake_minimum_required(VERSION 3.22)
project(Algoritmos_e_programacao_estruturada C)

set(CMAKE_C_STANDARD 11)

# ===== 1ª Lista =====
add_executable(lista1_ex1 "1-Primeira lista/1/ex1.c")
add_executable(lista1_ex2 "1-Primeira lista/2/ex2.c")
add_executable(lista1_ex3 "1-Primeira lista/3/ex3.c")
add_executable(lista1_ex4 "1-Primeira lista/4/ex4.c")
add_executable(lista1_ex5 "1-Primeira lista/5/ex5.c")
add_executable(lista1_ex6 "1-Primeira lista/6/ex6.c")
add_executable(lista1_ex7 "1-Primeira lista/7/ex7.c")
add_executable(lista1_ex8 "1-Primeira lista/8/ex8.c")
add_executable(lista1_ex9 "1-Primeira lista/9/ex9.c")

# ===== 2ª Lista =====
add_executable(lista2_ex1 "2-Segunda lista/1/ex1.c")
add_executable(lista2_ex2 "2-Segunda lista/2/ex2.c")
add_executable(lista2_ex3 "2-Segunda lista/3/ex3.c")
add_executable(lista2_ex4 "2-Segunda lista/4/ex4.c")

# ===== 3ª Lista =====
add_executable(lista3_ex1 "3-Terceira lista/1/ex1.c")
add_executable(lista3_ex8 "3-Terceira lista/8/ex8.c")

# ===== 4ª Lista =====
add_executable(lista4_ex2 "4-Quarta lista/2/ex2.c")
add_executable(lista4_ex3 "4-Quarta lista/3/ex3.c")
add_executable(lista4_ex4 "4-Quarta lista/4/ex4.c")
add_executable(lista4_ex5 "4-Quarta lista/5/ex5.c")
add_executable(lista4_ex6 "4-Quarta lista/6/ex6.c")
add_executable(lista4_ex7 "4-Quarta lista/7/ex7.c")
add_executable(lista4_ex8 "4-Quarta lista/8/ex8.c")
add_executable(lista4_ex9 "4-Quarta lista/9/ex9.c")
add_executable(lista4_ex10 "4-Quarta lista/10/ex10.c")

# ===== 5ª Lista =====
add_executable(lista5_ex1 "5-Quinta lista/1/ex1.c")
add_executable(lista5_ex2 "5-Quinta lista/2/ex2.c")
add_executable(lista5_ex3 "5-Quinta lista/3/ex3.c")
add_executable(lista5_ex4 "5-Quinta lista/4/ex4.c")
add_executable(lista5_ex5 "5-Quinta lista/5/ex5.c")
add_executable(lista5_ex6 "5-Quinta lista/6/ex6.c")

# ===== 6ª Lista =====
add_executable(lista6_ex1 "6-Sexta Lista/1/ex1.c")
add_executable(lista6_ex2 "6-Sexta Lista/2/ex2.c")
add_executable(lista6_ex3 "6-Sexta Lista/3/ex3.c")

# ===== Videoaulas =====
add_executable(VideoaulasStructs "Videoaulas/Structs/Structs.c")
add_executable(VideoaulasPonteiros "Videoaulas/Ponteiros/Ponteiros.c")

# ===== Torre de Hanói =====
add_executable(torre_de_hanoi torre_De_hanoi.c)

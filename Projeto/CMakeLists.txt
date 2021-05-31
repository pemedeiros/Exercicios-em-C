cmake_minimum_required(VERSION 3.17)
project(Projeto C)

set(CMAKE_C_STANDARD 11)


add_executable(Projeto agencia.c carro.c venda.c cliente.c)
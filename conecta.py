#!/usr/bin/python

import socket
ip = raw_input("Digite o IP: ")
porta = input("Digite a porta:")
conecta = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
if conecta.connect_ex((ip, porta)):
	print "Porta fechada !"
else:
	print "Porta aberta !"

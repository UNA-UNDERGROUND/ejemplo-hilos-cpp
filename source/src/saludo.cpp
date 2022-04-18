#include <iostream>
#include <saludo.hpp>
#include <thread>

void saludo(const std::vector<std::string> &nombres) {
	// iniciamos un hilo por cada nombre y esperamos a que terminen
	std::vector<std::thread> hilos;
	for (const auto &nombre : nombres) {
		hilos.emplace_back(
		    [nombre] { std::cout << "Hola " << nombre << '\n'; });
	}
	for (auto &h : hilos) {
		h.join();
	}
}

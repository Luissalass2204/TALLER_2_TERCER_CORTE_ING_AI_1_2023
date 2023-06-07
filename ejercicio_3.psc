Algoritmo ConvertirTiempo
	// Declaración de variables
    Definir tiempoSegundos, horas, minutos, segundos Como Entero
	
    // Entrada de datos
    Escribir "Ingrese el tiempo transcurrido en segundos:"
    Leer tiempoSegundos
	
    // Cálculo de horas, minutos y segundos
    horas <- tiempoSegundos / 3600
    minutos <- (tiempoSegundos % 3600) / 60
    segundos <- (tiempoSegundos % 3600) % 60
	
    // Salida del resultado
    Escribir "El tiempo equivalente es:", horas, "horas,", minutos, "minutos y", segundos, "segundos."
	
FinAlgoritmo

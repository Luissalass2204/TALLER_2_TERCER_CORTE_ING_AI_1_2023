Algoritmo CalcularArea
	Definir lado1, lado2, angulo, area Como Reales
    
    Escribir "Ingrese el valor del lado 1 del triángulo:"
    Leer lado1
    
    Escribir "Ingrese el valor del lado 2 del triángulo:"
    Leer lado2
    
    Escribir "Ingrese el valor del ángulo en grados:"
    Leer angulo
    
    // Convertir el ángulo de grados a radianes
    angulo_radianes <- angulo * PI / 180
    
    // Calcular el área del triángulo
    area <- 0.5 * lado1 * lado2 * sen(angulo_radianes)
    
    Escribir "El área del triángulo es:", area
	
FinAlgoritmo

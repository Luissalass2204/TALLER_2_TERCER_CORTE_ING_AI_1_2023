Algoritmo CalcularArea
	Definir lado1, lado2, angulo, area Como Reales
    
    Escribir "Ingrese el valor del lado 1 del tri�ngulo:"
    Leer lado1
    
    Escribir "Ingrese el valor del lado 2 del tri�ngulo:"
    Leer lado2
    
    Escribir "Ingrese el valor del �ngulo en grados:"
    Leer angulo
    
    // Convertir el �ngulo de grados a radianes
    angulo_radianes <- angulo * PI / 180
    
    // Calcular el �rea del tri�ngulo
    area <- 0.5 * lado1 * lado2 * sen(angulo_radianes)
    
    Escribir "El �rea del tri�ngulo es:", area
	
FinAlgoritmo

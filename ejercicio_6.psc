Algoritmo CalcularF
	// Declarar las variables e inicializar los valores
    Definir x Como Entero
    Definir sigma Como Real
    Definir A Como Entero
    Definir lambda Como Real
    Definir alfa Como Real
    Definir f Como Real
    
    x <- 12
    sigma <- 2.1836
    A <- 3
    lambda <- 1.11695
    alfa <- 328.67
    
    // Calcular el valor de f
    f <- 3 * (x + sigma * A / (A * A) - (x * x)) - lambda * (alfa - 13.7)
    
    // Mostrar el valor de f
    Escribir "El valor de f es:", f
	
FinAlgoritmo

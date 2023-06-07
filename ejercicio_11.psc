Algoritmo CalcularPrestamoHipotecario
	Definir capital_prestado, interes_anual, plazo, cuota, total_pagado, amortizacion, intereses Como Reales
    
    Escribir "Ingrese el capital prestado:"
    Leer capital_prestado
    
    Escribir "Ingrese el interés anual:"
    Leer interes_anual
    
    Escribir "Ingrese los años que dura el préstamo:"
    Leer plazo
    
    // Calcular el interés mensual y el plazo en meses
    ratio <- interes_anual / 12
    plazo_meses <- plazo * 12
    
    // Calcular la cuota mensual
    cuota <- capital_prestado * ratio / 100 * (1.- (1 + ratio / 100) ^ (-plazo_meses)) / (1.- (1 + ratio / 100))
    
    // Calcular el total pagado
    total_pagado <- cuota * plazo_meses
    
    // Calcular la cantidad de amortización
    amortizacion <- capital_prestado
    
    // Calcular la cantidad de intereses
    intereses <- total_pagado - amortizacion
    
    Escribir "La cuota mensual a pagar es:", cuota
    Escribir "El total pagado al finalizar el préstamo es:", total_pagado
    Escribir "La cantidad de amortización es:", amortizacion
    Escribir "La cantidad de intereses es:", intereses
	
FinAlgoritmo

Algoritmo CalcularNomina
	// Declarar las variables
    Definir sueldoBase, complementoDestino, complementoCargo, horasExtra, hijos, mayores Como Real
    Definir sueldoBruto, impuestos, retencion, sueldoNeto Como Real
    
    // Solicitar los datos al usuario
    Escribir "Ingrese el sueldo base:"
    Leer sueldoBase
    
    Escribir "Ingrese el complemento de destino:"
    Leer complementoDestino
    
    Escribir "Ingrese el complemento de cargo acad�mico:"
    Leer complementoCargo
    
    Escribir "Ingrese las horas extra realizadas:"
    Leer horasExtra
    
    Escribir "Ingrese el n�mero de hijos:"
    Leer hijos
    
    Escribir "Ingrese el n�mero de mayores dependientes:"
    Leer mayores
    
    // Calcular el sueldo bruto
    sueldoBruto <- sueldoBase + complementoDestino + complementoCargo + (23 * horasExtra)
    
    // Calcular el porcentaje de IRPF
    Definir porcentajeIRPF Como Real
    porcentajeIRPF <- 24 - (2 * hijos) - (1 * mayores)
    
    // Calcular los impuestos
    impuestos <- (porcentajeIRPF / 100) * sueldoBruto
    
    // Calcular la retenci�n por IRPF
    retencion <- impuestos
    
    // Calcular el sueldo neto
    sueldoNeto <- sueldoBruto - retencion
    
    // Mostrar los resultados
	Escribir "RESULTADOS OBTENIDOS."
	
    Escribir "Sueldo base:", sueldoBase, "$"
    Escribir "Complemento de destino:", complementoDestino, "$"
    Escribir "Complemento de cargo acad�mico:", complementoCargo, "$"
    Escribir "Horas extra realizadas:", horasExtra
    Escribir "Hijos:", hijos
    Escribir "Mayores:", mayores
	
    Escribir "CALCULO DE NOMINA."
    Escribir "Sueldo bruto:", sueldoBruto, "$"
    Escribir "Porcentaje de IRPF:", porcentajeIRPF, "%"
    Escribir "Retenci�n por IRPF:", retencion, "$"
    Escribir "Sueldo neto:", sueldoNeto, "$"
	
FinAlgoritmo

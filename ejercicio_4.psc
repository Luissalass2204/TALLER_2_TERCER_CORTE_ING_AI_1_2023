Algoritmo CalcularNotaFinal
	// Declarar las variables
    Definir examen1, examen2, examen3, practica1, practica2, practica3, actividadAdicional, notaFinal Como Real
    
    // Solicitar las calificaciones al usuario
    Escribir "Ingrese la calificación del primer examen:"
    Leer examen1
    
    Escribir "Ingrese la calificación del segundo examen:"
    Leer examen2
    
    Escribir "Ingrese la calificación del tercer examen:"
    Leer examen3
    
    Escribir "Ingrese la calificación de la primera práctica:"
    Leer practica1
    
    Escribir "Ingrese la calificación de la segunda práctica:"
    Leer practica2
    
    Escribir "Ingrese la calificación de la tercera práctica:"
    Leer practica3
    
    Escribir "Ingrese la calificación de la actividad adicional:"
    Leer actividadAdicional
    
    // Calcular la nota final
    notaFinal <- (examen1 + examen2 + examen3 + practica1 + practica2 + practica3 + actividadAdicional) / 7
    
    // Mostrar la nota final
    Escribir "La nota final obtenida es: ", notaFinal
    
FinAlgoritmo

Algoritmo CalcularNotaFinal
	// Declarar las variables
    Definir examen1, examen2, examen3, practica1, practica2, practica3, actividadAdicional, notaFinal Como Real
    
    // Solicitar las calificaciones al usuario
    Escribir "Ingrese la calificaci�n del primer examen:"
    Leer examen1
    
    Escribir "Ingrese la calificaci�n del segundo examen:"
    Leer examen2
    
    Escribir "Ingrese la calificaci�n del tercer examen:"
    Leer examen3
    
    Escribir "Ingrese la calificaci�n de la primera pr�ctica:"
    Leer practica1
    
    Escribir "Ingrese la calificaci�n de la segunda pr�ctica:"
    Leer practica2
    
    Escribir "Ingrese la calificaci�n de la tercera pr�ctica:"
    Leer practica3
    
    Escribir "Ingrese la calificaci�n de la actividad adicional:"
    Leer actividadAdicional
    
    // Calcular la nota final
    notaFinal <- (examen1 + examen2 + examen3 + practica1 + practica2 + practica3 + actividadAdicional) / 7
    
    // Mostrar la nota final
    Escribir "La nota final obtenida es: ", notaFinal
    
FinAlgoritmo

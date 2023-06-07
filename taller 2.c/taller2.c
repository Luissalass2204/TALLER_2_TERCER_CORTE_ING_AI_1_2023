#include <stdio.h>
#include <math.h>

// ejercicio_1
// Funcion para calcular el volumen de un cono
float calcularVolumenCono(float radio, float altura) {
    float volumen = 3.141592 * radio * radio * altura / 3;
    return volumen;
}

// ejercicio_2
// Funcion para convertir grados Fahrenheit a Celsius
float convertirFahrenheitACelsius(float fahrenheit) {
    float celsius = 5.0 / 9.0 * (fahrenheit - 32);
    return celsius;
}

// ejercicio_3
// Funcion para convertir tiempo en segundos a horas, minutos y segundos
void convertirTiempo(int segundos) {
    int horas, minutos, resto;
    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;
    printf("Tiempo equivalente: %d horas, %d minutos, %d segundos\n", horas, minutos, segundos);
}

// ejercicio_4
// Funcion para calcular la nota final de la asignatura
float calcularNotaFinal(float examen1, float examen2, float examenFinal, float practica1, float practica2, float practica3, float actividadAdicional) {
    float notaFinal = (examen1 + examen2 + examenFinal + practica1 + practica2 + practica3 + actividadAdicional) / 7;
    return notaFinal;
}

// ejercicio_5
// Funcion para calcular el resultado de una expresion matematica
float calcularExpresion(float r, float a, float b, float c, float d) {
    float resultado = 4.0 / 3.0 * (r + 34) - 9 * (a + b * c) + 3 + d * (2 + a) / a + b * d;
    return resultado;
}

// ejercicio_6: Cálculo de f
float calcularF() {
    int x = 12;
    float sigma = 2.1836;
    int y = 3;
    float lambda = 1.11695;
    float alfa = 328.67;
    float f = 3 * (x + sigma * y / (y * y) - x * x) - lambda * (alfa - 13.7);
    return f;
}

// ejercicio_7
// Funcion para calcular el sueldo neto de un empleado
float calcularSueldoNeto(float sueldoBase, float complementoDestino, float complementoCargoAcademico, int horasExtra, int numHijos, int numMayoresDependientes) {
    float sueldoBruto, retencionIRPF, sueldoNeto;
    float porcentajeIRPF, porcentajePorHijo, porcentajePorMayorDependiente;

    // Calcular el sueldo bruto
    sueldoBruto = sueldoBase + complementoDestino + complementoCargoAcademico + (23 * horasExtra);

    // Calcular el porcentaje de IRPF
    porcentajePorHijo = 2 * numHijos;
    porcentajePorMayorDependiente = numMayoresDependientes;

    porcentajeIRPF = 24 - porcentajePorHijo - porcentajePorMayorDependiente;

    // Calcular la retencion por IRPF
    retencionIRPF = (porcentajeIRPF / 100) * sueldoBruto;

    // Calcular el sueldo neto
    sueldoNeto = sueldoBruto - retencionIRPF;

    return sueldoNeto;
}

// ejercicio_8: Evaluacion de expresiones
void evaluarExpresiones() {
    int a = 1;
    double d = 1.5;
    double resultado1 = sqrt(81) - pow(9, 3) + 10 / 2;
    double resultado2 = sqrt(a) + sqrt(pow(a, 2)) + pow(sqrt(a), 3);
    double resultado3 = sqrt(d) + sqrt(pow(d, 2)) + pow(sqrt(d), 3);
    printf("Resultado 1: %.2lf\n", resultado1);
    printf("Resultado 2: %.2lf\n", resultado2);
    printf("Resultado 3: %.2lf\n", resultado3);
}

// ejercicio_9: Calculo del area de un triangulo
double calcularAreaTriangulo(double lado1, double lado2, double angulo) {
    double area = (lado1 * lado2 * sin(angulo)) / 2;
    return area;
}

// ejercicio_10
// Funcion para calcular el area de un triangulo con los lados y angulo en grados
double calcularAreaTrianguloGrados(double ladoA, double ladoB, double angulo1) {
    // Convertir el angulo de grados a radianes
    double radianes = angulo1 * 3.14159 / 180.0;

    // Calcular el area del triangulo
    double area = 0.5 * ladoA * ladoB * sin(radianes);

    return area;
}


// ejercicio_11: Calculo de la cuota mensual y el total pagado de un prestamo hipotecario
void calcularCuotaMensual(float capital, float interes_anual, int plazo) {
    float interes_mensual = interes_anual / 12 / 100;
    int plazo_meses = plazo * 12;
    float cuota_mensual = capital * (interes_mensual * pow(1 + interes_mensual, plazo_meses)) / (pow(1 + interes_mensual, plazo_meses) - 1);
    float total_pagado = cuota_mensual * plazo_meses;
    printf("Cuota mensual: %.2f $\n", cuota_mensual);
    printf("Total pagado: %.2f $\n", total_pagado);
}

int main() {
// Ejercicio 1: Volumen de un cono
    float radio = 14.5;
    float altura = 26.79;
    float volumen = calcularVolumenCono(radio, altura);
     printf("\nEJERCICIO 1\n");
    printf("El volumen del cono es: %.2f\n", volumen);

// Ejercicio 2: Conversion de grados Fahrenheit a Celsius
    float grados_fahrenheit;
     printf("\nEJERCICIO 2\n");
    printf("Ingrese los grados Fahrenheit: ");
    scanf("%f", &grados_fahrenheit);
    float grados_celsius = convertirFahrenheitACelsius(grados_fahrenheit);
    printf("Grados Celsius: %.2f\n", grados_celsius);

// Ejercicio 3: Conversion de tiempo en segundos
    int tiempo_segundos;
     printf("\nEJERCICIO 3\n");
    printf("Ingrese el tiempo en segundos: ");
    scanf("%d", &tiempo_segundos);
    convertirTiempo(tiempo_segundos);

// Ejercicio 4: Calculo de la nota final
     printf("\nEJERCICIO 4\n");
    // Declarar las variables
    float examen1, examen2, examenFinal, practica1, practica2, practica3, actividadAdicional;
    float notaFinal;
    // Solicitar las calificaciones al usuario
    printf("Introduce la calificacion del primer examen: ");
    scanf("%f", &examen1);

    printf("Introduce la calificacion del segundo examen: ");
    scanf("%f", &examen2);

    printf("Introduce la calificacion del examen final: ");
    scanf("%f", &examenFinal);

    printf("Introduce la calificacion de la primera practica: ");
    scanf("%f", &practica1);

    printf("Introduce la calificacion de la segunda practica: ");
    scanf("%f", &practica2);

    printf("Introduce la calificacion de la tercera practica: ");
    scanf("%f", &practica3);

    printf("Introduce la calificacion de la actividad adicional: ");
    scanf("%f", &actividadAdicional);

    // Calcular la nota final
    notaFinal = calcularNotaFinal(examen1, examen2, examenFinal, practica1, practica2, practica3, actividadAdicional);

    // Mostrar la nota final
    printf("La nota final es: %.2f\n", notaFinal);

// Ejercicio 5: Expresion matematica
     printf("\nEJERCICIO 5\n");
    float r, a, b, c, d;
    printf("Ingrese los valores de r, a, b, c y d: ");
    scanf("%f %f %f %f %f", &r, &a, &b, &c, &d);
    float resultado_expresion = calcularExpresion(r, a, b, c, d);
    printf("Resultado de la expresion: %.2f\n", resultado_expresion);

// Ejercicio 6: Calculo de f
     printf("\nEJERCICIO 6\n");
    float f = calcularF();
    printf("Valor de f: %.2f\n", f);

// Ejercicio 7: Declarar las variables
    printf("\nEJERCICIO 7\n");
    float sueldoBase, complementoDestino, complementoCargoAcademico, sueldoBruto, retencionIRPF, sueldoNeto;
    int horasExtra, numHijos, numMayoresDependientes;
    float porcentajeIRPF, porcentajePorHijo, porcentajePorMayorDependiente;

    // Solicitar los datos al usuario
    printf("Sueldo base: ");
    scanf("%f", &sueldoBase);

    printf("Complemento de destino: ");
    scanf("%f", &complementoDestino);

    printf("Complemento de cargo academico: ");
    scanf("%f", &complementoCargoAcademico);

    printf("Horas extra realizadas: ");
    scanf("%d", &horasExtra);

    printf("Hijos: ");
    scanf("%d", &numHijos);

    printf("Mayores: ");
    scanf("%d", &numMayoresDependientes);

    // Calcular el sueldo bruto
    sueldoBruto = sueldoBase + complementoDestino + complementoCargoAcademico + (23 * horasExtra);

    // Calcular el porcentaje de IRPF
    porcentajePorHijo = 2 * numHijos;
    porcentajePorMayorDependiente = numMayoresDependientes;

    porcentajeIRPF = 24 - porcentajePorHijo - porcentajePorMayorDependiente;

    // Calcular la retencion por IRPF
    retencionIRPF = (porcentajeIRPF / 100) * sueldoBruto;

    // Calcular el sueldo neto
    sueldoNeto = sueldoBruto - retencionIRPF;

    // Mostrar los resultados
     printf("\nRESULTADOS OBTENIDOS.\n");
    printf("\nPreguntas para Calculo de la nomina.\n");
    printf("Sueldo base: %.2f $\n", sueldoBase);
    printf("Complemento de destino: %.2f $\n", complementoDestino);
    printf("Complemento de cargo academico: %.2f $\n", complementoCargoAcademico);
    printf("Horas extra realizadas: %d\n", horasExtra);
    printf("Hijos: %d\n", numHijos);
    printf("Mayores: %d\n", numMayoresDependientes);
    printf("\nCALCULO DE NOMINA.\n");
    printf("Sueldo bruto: %.2f $\n", sueldoBruto);
    printf("Porcentaje de IRPF: %.2f%%\n", porcentajeIRPF);
    printf("Retencion por IRPF: %.2f $\n", retencionIRPF);
    printf("Sueldo neto: %.2f $\n", sueldoNeto);

// Ejercicio 8: Evaluacion de expresiones
     printf("\nEJERCICIO 8\n");
    evaluarExpresiones();

// Ejercicio 9: Calculo del area de un triangulo
     printf("\nEJERCICIO 9\n");
    double lado1, lado2, angulo;
    printf("Ingrese la longitud del lado 1: ");
    scanf("%lf", &lado1);

    printf("Ingrese la longitud del lado 2: ");
    scanf("%lf", &lado2);

    printf("Ingrese el angulo entre los dos lados: ");
    scanf("%lf", &angulo);

    double area_triangulo = calcularAreaTriangulo(lado1, lado2, angulo);
    printf("Area del triángulo: %.2lf\n", area_triangulo);

// Ejercicio 10: area de tiriangulo 2
    printf("\nEJERCICIO 10\n");
    // Declarar las variables
    double ladoA, ladoB, angulo1;
    // Solicitar los datos al usuario
    printf("Ingrese la longitud del lado 1: ");
    scanf("%lf", &ladoA);

    printf("Ingrese la longitud del lado 2: ");
    scanf("%lf", &ladoB);

    printf("Ingrese el angulo entre los dos lados en grados: ");
    scanf("%lf", &angulo1);

    // Calcular el area del triangulo
    double area = calcularAreaTrianguloGrados(ladoA, ladoB, angulo1);

    // Mostrar el resultado
    printf("El area del triangulo es: %.2f\n", area);


// Ejercicio 11: Calculo de la cuota mensual y el total pagado de un prestamo hipotecario
     printf("\nEJERCICIO 11\n");
    float capital_prestamo, interes_anual_prestamo;
    int plazo_prestamo;
    printf("Ingrese el capital del prestamo: ");
    scanf("%f", &capital_prestamo);

    printf("Ingrese el interes anual del prestamo: ");
    scanf("%f", &interes_anual_prestamo);

    printf("Ingrese el plazo del prestamo en años: ");
    scanf("%d", &plazo_prestamo);

    calcularCuotaMensual(capital_prestamo, interes_anual_prestamo, plazo_prestamo);
    printf("FIN DEL PROGRAMA ");


    return 0;
}
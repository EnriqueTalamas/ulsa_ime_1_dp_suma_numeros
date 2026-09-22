# Práctica 1: Suma de 5 números
## 1. Descripción del problema (Fase 1)
El programa sirve para calcular las suma de 5 números lo que hace es preguntar por 5 numeros con siertas restrincciones como lo es que no sean numeros romanos entre otras. Esto sirve en la vida diaria para calculos rapidos, se puede ver cuando calculan el precio de  productos, una calculadora simple.

_____

## 2. Entradas y salidas (Fase 1)
Entrada 5 numeros int o float ya que pueden ser decimales grande.
Resuktado de salida Tambien se puede usar Float

**Entradas:**
1. _Los 5 numeros ____

**Salidas:**
1. _La respuesta de los 5 numeros____

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- _Que sean numeros arabigos____
- _Que sean 5 numeros____

**Decisión sobre negativos y decimales** (¿los acepto? ¿por qué?):
__Si poque si entran en lo que son los numeros arabigos ___

**Invariante** (¿qué es verdad después de cada vuelta del ciclo?):
_Que son numeros_y que son 5___

## 4. Casos resueltos a mano (Fase 1)

| Caso | Números | Suma calculada a mano |
|---|---|---|
| 1 | 12345 | __15_ |
| 2 | 45678 | __30_ |
| 3 | 1236v | _Error|

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las dos preguntas. -->

**¿Probé mi receta a mano con un caso?** Sí / No
si
**¿Tuve que corregirla?** _____
no
## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o suma
./suma
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->

```
__$ ./main.exe
Suma de 5 numeros
Ingrese el numero 1: 1
Ingrese el numero 2: 2
Ingrese el numero 3: 3
Ingrese el numero 4: 4
Ingrese el numero 5: 5
La suma total es: 15

```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué pasó al no inicializar `suma`?**
Me mostro que la suma puede usarse sin valor inicial

**Experimento B (opcional): ¿qué pasó al usar `int` con 2.5?**
_Solo conserva el entero,el 2

## 9. Tabla de pruebas (Fase 4)

| Caso | Números | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Del 1 al 5 | 1 a 5 | 15 | _15__ | __si_ |
| Todos ceros | 0 ×5 | 0 | __0__ | __si_ |
| Con negativos | -1 a -5|__-15 | __-15 | ___si |
| Decimales | 0.5 ×5 | 2.5 | __2__ | __no_ |
| Todos iguales | 7 ×5 | 35 | __35_ | __si_ |
| Caso propio 1 | 2 a 6| __20_ | __20| __si_ |
| Caso propio 2 | 345b6 | _Error| _ERror| _si__ |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | que se repita y no tengas que ejecutarlo de nuevo| el return| si
| 2 | _que la letra no me marca error|el codigo|si

**Reto elegido (opcional):** __Hcer el codigo

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| _Como aplicar condiciones| usar el if

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
_Aprendia unas parrtes de como poder codificar.____

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
_que acepte numeros romanos____

**¿Qué fue lo más difícil y cómo lo resolví?**
__Codificarlo en c++, lo resolvi con ayuda del profesor___

**¿Qué pregunta me quedó sin responder?**
_Si en el if y else puede tener más de un orden logico____

## 13. Lista de verificación antes de entregar (Fase 5)

- [si ] Llené todas las secciones (no quedan `_no_`)
- [si ] Mi programa compila sin advertencias
- [si ] Probé todos los casos de la tabla
- [si ] Hice al menos 3 commits con mensajes claros
- [si ] Hice `git push` y verifiqué mi fork en GitHub
- [si ] Entregué el enlace de mi fork en Classroom
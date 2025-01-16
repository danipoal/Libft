# Libft - Proyecto de 42

Libft es un proyecto de la escuela 42 que tiene como objetivo crear una biblioteca personalizada en C, replicando y ampliando las funciones estándar de la biblioteca de C (libc). Este README detalla las funciones implementadas, sus propósitos y características clave.

---

## Contenido
1. [Funciones de la Parte 1 - Funciones Libc](#parte-1---funciones-libc)
2. [Funciones de la Parte 2 - Funciones Adicionales](#parte-2---funciones-adicionales)
3. [Funciones Bonus](#bonus)
4. [Compilación y Uso](#compilación-y-uso)
5. [Contacto](#contacto)

---

## Parte 1 - Funciones Libc
Estas funciones replican el comportamiento de funciones estándar de la biblioteca de C:

- **Memoria:**
  - `ft_memset`: Rellena un bloque de memoria con un byte específico.
  - `ft_bzero`: Establece un bloque de memoria a cero.
  - `ft_memcpy`: Copia datos de un bloque de memoria a otro.
  - `ft_memccpy`: Copia datos hasta un carácter específico.
  - `ft_memmove`: Copia bloques de memoria que podrían solaparse.
  - `ft_memchr`: Busca un byte específico en un bloque de memoria.
  - `ft_memcmp`: Compara dos bloques de memoria.

- **Cadenas de caracteres:**
  - `ft_strlen`: Calcula la longitud de una cadena.
  - `ft_strdup`: Duplica una cadena.
  - `ft_strcpy`: Copia una cadena en otra.
  - `ft_strncpy`: Copia hasta un número específico de caracteres de una cadena.
  - `ft_strcat`: Concatenación de cadenas.
  - `ft_strncat`: Concatenación con un límite.
  - `ft_strchr`: Encuentra un carácter en una cadena.
  - `ft_strrchr`: Encuentra un carácter en una cadena (última aparición).
  - `ft_strstr`: Encuentra una subcadena.
  - `ft_strnstr`: Encuentra una subcadena limitada por un tamaño.
  - `ft_strcmp`: Compara dos cadenas.
  - `ft_strncmp`: Compara cadenas hasta un número de caracteres.

- **Conversión:**
  - `ft_atoi`: Convierte una cadena a un entero.
  - `ft_itoa`: Convierte un entero a una cadena.

- **Caracteres individuales:**
  - `ft_isalpha`: Comprueba si es un carácter alfabético.
  - `ft_isdigit`: Comprueba si es un dígito.
  - `ft_isalnum`: Comprueba si es alfanumérico.
  - `ft_isascii`: Comprueba si pertenece al ASCII.
  - `ft_isprint`: Comprueba si es un carácter imprimible.
  - `ft_toupper`: Convierte un carácter a mayúscula.
  - `ft_tolower`: Convierte un carácter a minúscula.

---

## Parte 2 - Funciones Adicionales
Estas funciones no son parte de la libc pero son útiles para el desarrollo:

- **Manipulación de cadenas:**
  - `ft_substr`: Extrae una subcadena.
  - `ft_strjoin`: Combina dos cadenas en una.
  - `ft_strtrim`: Elimina caracteres específicos al principio y al final de una cadena.
  - `ft_split`: Divide una cadena según un delimitador.

- **Conversión:**
  - `ft_itoa`: Convierte un número entero a una cadena.

- **Otras utilidades:**
  - `ft_putchar_fd`: Escribe un carácter en un descriptor de archivo.
  - `ft_putstr_fd`: Escribe una cadena en un descriptor de archivo.
  - `ft_putendl_fd`: Escribe una cadena seguida de un salto de línea.
  - `ft_putnbr_fd`: Escribe un número en un descriptor de archivo.

---

## Bonus
Se implementan funciones relacionadas con listas enlazadas:

- `ft_lstnew`: Crea un nuevo nodo.
- `ft_lstadd_front`: Añade un nodo al inicio de la lista.
- `ft_lstadd_back`: Añade un nodo al final de la lista.
- `ft_lstdelone`: Elimina un nodo específico.
- `ft_lstclear`: Elimina todos los nodos de la lista.
- `ft_lstiter`: Aplica una función a cada nodo.
- `ft_lstmap`: Crea una nueva lista aplicando una función a cada nodo de la original.

---

## Compilación y Uso
Para compilar la biblioteca:

```bash
make
```
Esto generará un archivo `libft.a` que puedes incluir en tus proyectos con:

```c
#include "libft.h"
```

Compila tus archivos junto con la biblioteca:

```bash
gcc -Wall -Wextra -Werror -L. -lft tu_archivo.c -o tu_programa
```

---

## Contacto
Autor: [Daniel Alvarez](mailto:danipoal.2@gmail.com)  
Página web: [www.danipoal.com](http://www.danipoal.com)

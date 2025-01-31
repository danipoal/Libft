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
  - [**ft_memset**](https://github.com/danipoal/Libft/blob/main/src/ft_memset.c): Rellena un bloque de memoria con un byte específico.
  - [**ft_bzero**](https://github.com/danipoal/Libft/blob/main/src/ft_bzero.c): Establece un bloque de memoria a cero.
  - [**ft_memcpy**](https://github.com/danipoal/Libft/blob/main/src/ft_memcpy.c): Copia datos de un bloque de memoria a otro.
  - [**ft_memccpy**](https://github.com/danipoal/Libft/blob/main/src/ft_memccpy.c): Copia datos hasta un carácter específico.
  - [**ft_memmove**](https://github.com/danipoal/Libft/blob/main/src/ft_memmove.c): Copia bloques de memoria que podrían solaparse.
  - [**ft_memchr**](https://github.com/danipoal/Libft/blob/main/src/ft_memchr.c): Busca un byte específico en un bloque de memoria.
  - [**ft_memcmp**](https://github.com/danipoal/Libft/blob/main/src/ft_memcmp.c): Compara dos bloques de memoria.

- **Cadenas de caracteres:**
  - [**ft_strlen**](https://github.com/danipoal/Libft/blob/main/src/ft_strlen.c): Calcula la longitud de una cadena.
  - [**ft_strdup**](https://github.com/danipoal/Libft/blob/main/src/ft_strdup.c): Duplica una cadena.
  - [**ft_strlcpy**](https://github.com/danipoal/Libft/blob/main/src/ft_strlcpy.c): Copia hasta un número específico de caracteres de una cadena.
  - [**ft_strlcat**](https://github.com/danipoal/Libft/blob/main/src/ft_strlcat.c): Concatenación con un límite.
  - [**ft_strchr**](https://github.com/danipoal/Libft/blob/main/src/ft_strchr.c): Encuentra un carácter en una cadena.
  - [**ft_strrchr**](https://github.com/danipoal/Libft/blob/main/src/ft_strrchr.c): Encuentra un carácter en una cadena (última aparición).
  - [**ft_strnstr**](https://github.com/danipoal/Libft/blob/main/src/ft_strnstr.c): Encuentra una subcadena limitada por un tamaño.
  - [**ft_strncmp**](https://github.com/danipoal/Libft/blob/main/src/ft_strncmp.c): Compara cadenas hasta un número de caracteres.

- **Conversión:**
  - [**ft_atoi**](https://github.com/danipoal/Libft/blob/main/src/ft_atoi.c): Convierte una cadena a un entero.

- **Caracteres individuales:**
  - [**ft_isalpha**](https://github.com/danipoal/Libft/blob/main/src/ft_isalpha.c): Comprueba si es un carácter alfabético.
  - [**ft_isdigit**](https://github.com/danipoal/Libft/blob/main/src/ft_isdigit.c): Comprueba si es un dígito.
  - [**ft_isalnum**](https://github.com/danipoal/Libft/blob/main/src/ft_isalnum.c): Comprueba si es alfanumérico.
  - [**ft_isascii**](https://github.com/danipoal/Libft/blob/main/src/ft_isascii.c): Comprueba si pertenece al ASCII.
  - [**ft_isprint**](https://github.com/danipoal/Libft/blob/main/src/ft_isprint.c): Comprueba si es un carácter imprimible.
  - [**ft_toupper**](https://github.com/danipoal/Libft/blob/main/src/ft_toupper.c): Convierte un carácter a mayúscula.
  - [**ft_tolower**](https://github.com/danipoal/Libft/blob/main/src/ft_tolower.c): Convierte un carácter a minúscula.

---

## Parte 2 - Funciones Adicionales
Estas funciones no son parte de la libc pero son útiles para el desarrollo:

- **Manipulación de cadenas:**
  - [**ft_substr**](https://github.com/danipoal/Libft/blob/main/src/ft_substr.c): Extrae una subcadena.
  - [**ft_strjoin**](https://github.com/danipoal/Libft/blob/main/src/ft_strjoin.c): Combina dos cadenas en una.
  - [**ft_strtrim**](https://github.com/danipoal/Libft/blob/main/src/ft_strtrim.c): Elimina caracteres específicos al principio y al final de una cadena.
  - [**ft_split**](https://github.com/danipoal/Libft/blob/main/src/ft_split.c): Divide una cadena según un delimitador.

- **Conversión:**
  - [**ft_itoa**](https://github.com/danipoal/Libft/blob/main/src/ft_itoa.c): Convierte un número entero a una cadena.

- **Otras utilidades:**
  - [**ft_putchar_fd**](https://github.com/danipoal/Libft/blob/main/src/ft_putchar_fd.c): Escribe un carácter en un descriptor de archivo.
  - [**ft_putstr_fd**](https://github.com/danipoal/Libft/blob/main/src/ft_putstr_fd.c): Escribe una cadena en un descriptor de archivo.
  - [**ft_putendl_fd**](https://github.com/danipoal/Libft/blob/main/src/ft_putendl_fd.c): Escribe una cadena seguida de un salto de línea.
  - [**ft_putnbr_fd**](https://github.com/danipoal/Libft/blob/main/src/ft_putnbr_fd.c): Escribe un número en un descriptor de archivo.

---

## Bonus
Se implementan funciones relacionadas con listas enlazadas:

- [**ft_lstnew**](https://github.com/danipoal/Libft/blob/main/src/ft_lstnew_bonus.c): Crea un nuevo nodo.
- [**ft_lstadd_front**](https://github.com/danipoal/Libft/blob/main/src/ft_lstadd_front_bonus.c): Añade un nodo al inicio de la lista.
- [**ft_lstadd_back**](https://github.com/danipoal/Libft/blob/main/src/ft_lstadd_back_bonus.c): Añade un nodo al final de la lista.
- [**ft_lstdelone**](https://github.com/danipoal/Libft/blob/main/src/ft_lstdelone_bonus.c): Elimina un nodo específico.
- [**ft_lstclear**](https://github.com/danipoal/Libft/blob/main/src/ft_lstclear_bonus.c): Elimina todos los nodos de la lista.
- [**ft_lstiter**](https://github.com/danipoal/Libft/blob/main/src/ft_lstiter_bonus.c): Aplica una función a cada nodo.
- [**ft_lstmap**](https://github.com/danipoal/Libft/blob/main/src/ft_lstmap_bonus.c): Crea una nueva lista aplicando una función a cada nodo de la original.

---

## Compilación y Uso
Para compilar la biblioteca:

```bash
make
make bonus
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


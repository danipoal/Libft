# 📌 Test de Libft

Este directorio contiene un **test automatizado** para verificar la funcionalidad de tu biblioteca Libft. Es **reutilizable**, lo que significa que puedes copiar toda la carpeta `/test` en otro proyecto y funcionará sin necesidad de modificar nada.

---

## ⚙️ Instalación y Uso

Para ejecutar el test correctamente, sigue estos pasos:

### **1️⃣ Compilar Libft con los bonus**
Antes de ejecutar el test, asegúrate de haber compilado toda la biblioteca incluyendo los bonus:
```bash
make
make bonus
```
Esto generará el archivo `libft.a` en el directorio principal.

### **2️⃣ Compilar los tests**

Dirígete al directorio `test` y compila los archivos de prueba:
```bash
cd test
make
```
Esto generará un ejecutable `test` en la carpeta `/test`.

### **3️⃣ Ejecutar los tests**
Ejecuta el binario generado para iniciar las pruebas:
```bash
./test
```
El test ejecutará automáticamente todas las funciones y mostrará los resultados.

---

## 🔴 Comparación de Resultados
Si una función no devuelve el resultado esperado, el test mostrará el error en **rojo** indicando la diferencia entre el valor esperado y el obtenido.

Ejemplo de salida:
```
🔴 Error en ft_strlen: Orig: 5, ft: 4
✅ ft_strdup: OK OK OK OK
🔴 Error en ft_atoi: Orig: -123, ft: 0
```
Cada prueba compara la salida de tu función con la salida esperada, asegurando que la implementación sea correcta.

---

## 🔄 **¿Cómo reutilizar este test en tu Libft?**
Este test es completamente independiente y se puede usar en cualquier implementación de Libft. Para integrarlo en otro proyecto:

1. **Copia la carpeta `test`** en el directorio raíz de tu Libft.
2. **Ejecuta los mismos pasos de compilación y prueba**.
3. **Verifica los resultados y corrige errores si es necesario**.

Con este sistema, puedes compartir la carpeta `test` con otros compañeros o usarla en futuras implementaciones de Libft sin necesidad de configuraciones adicionales. 🎯

---

## 🚀 Automatización del Test en GitHub
Puedes automatizar la ejecución del test en GitHub utilizando un **workflow de GitHub Actions**. Cada vez que hagas un `push` o un `pull request` a la rama `main`, el test se ejecutará automáticamente.

### **📌 Archivo `.github/workflows/test.yml`**
```yaml
name: Test

on:
  push:
    branches:
      - main
  pull_request:

jobs:
  test_output:
    runs-on: ubuntu-latest

    steps:
    # Paso 1: Clonar el repositorio
    - name: Checkout repository
      uses: actions/checkout@v3

    # Paso 2: Instalar dependencias necesarias para compilación
    - name: Install dependencies
      run: sudo apt-get update && sudo apt-get install -y build-essential

    # Paso 3: Ejecutar el Makefile inicial en el directorio raíz
    - name: Build the main project
      run: | 
        make
        make bonus
    # Paso 4: Ejecutar el Makefile en el directorio /test
    - name: Build tests
      run: |
        cd test
        make

    # Paso 5: Ejecutar el archivo ./test y capturar la salida
    - name: Run tests and capture output
      run: |
        cd test
        ./test > program_output.txt

    # Paso 6: Verificar si la salida contiene el color rojo (\033[31m)
    - name: Check for red color in output
      run: |
        cd test
        if grep -q $'\033[31m' program_output.txt; then
          echo "Error: There is at least 1 test that didn't pass"
          exit 1
        else
          echo "All tests OK"
        fi
```
Este workflow asegurará que cualquier cambio en tu código sea validado automáticamente, evitando errores antes de fusionar código en la rama `main`. 🚀

---

## 🛠 Mantenimiento y Personalización
Si quieres agregar más pruebas o modificar el test, simplemente edita los archivos dentro de `/test` y añade nuevos casos en `test.c`.

Si tienes dudas o sugerencias para mejorar el test, ¡cualquier contribución es bienvenida! 🚀



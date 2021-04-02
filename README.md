## Gitignore

Gitignore es una herramienta que se usa para decirle a git cuáles archivos o directorios **no** deben subirse al repositorio (en la nube).
Se usa por la simple razón de que no todos los archivos o recursos que utiliza un programador, en la etapa de desarrollo, son necesarios de gestionar con el sistema de control de versiones.

Gitnore se implementa mediante la creación de un archivo llamado ".gitignore" en la raíz del proyecto en cuestión. En dicho archivo se colocan, en texto plano, las rutas de las carpetas que se quiere que sean ignoradas por Git.

Por ejemplo, si en el archivo ".gitignore" se incluye los siguiente:
  test_files/
Entonces se ignorarán, por el sistema de control de versiones, todos los archivos contenidos en la carpeta "test_files".

Git ignore también se puede generar automáticamente gracias a la herramienta online [gitignore.io](https://www.toptal.com/developers/gitignore) la cual, básicamente, permite escribir en un campo de búsqueda los nombres de todas las herramientas, sistemas, frameworks, lenguajes, etc. que se puedan estar usando. Se seleccionan todos los valores y luego genera el archivo de manera automática.

## Obersvaciones sobre los apartados b y c

**El resultado es el mismo en ambos apartados**

_i) ¿A qué se debe?_

En el apartado 'c' se muestra la dirección de memoria de la variable 'number', la cual es la dirección a la cual apunta el puntero 'pointer_to_number'. Es por eso que coinciden los resultados obtenidos en ambos apartados.

_ii) ¿Qué se obtiene en el apartado 'd'? ¿Es igual a las anteriores? ¿Por qué?_

En el apartado 'd' se obtiene la dirección de memoria del puntero.

Esta no es igual a las anteriores. Y esto se debe a que, el puntero es una variable más, la cual tiene su propia dirección de memoria. Diferente a la de su contenido (dirección de memoria de la variable a la que apunta).

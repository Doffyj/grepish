# grepish

Este programa toma los proyectos [get_next_line](https://github.com/Doffyj/42-cursus/tree/master/get_next_line) y ft_strstr (de la piscina, en el cursus hacemos ft_strnstr) de 42 y los adapta para crear un programa que simule el funcionamiento de [grep](https://man7.org/linux/man-pages/man1/grep.1.html).
En la versión actual el programa es case sensitive y sólo busca en el archivo especificado en el directorio actual.
Para futuras versiones intentaré hacer que sea más parecido al original

# Compilar

Dentro del repositorio se debe abrir una terminal y poner
```
make
```
Se creará el archivo *grepish*, el cual lo compilaremos con los siguientes argumentos:
```
./grepish str file
```
Siendo *str* la cadena de carácteres que deseamos encontrar y *file* el archivo donde se realizará la búsqueda.

En casi de hacer una modificación el el programa, el Makefile cuenta con una regla *clean* que elimina el archivo compilado, simplemente poner:
```
make clean
```

# to do
- [ ] Imprimir el nombre del archivo leido.
- [ ] Incluir un modo para que sea o no sea case sensitive.
- [ ] abrir todos los archivos en directorio local, a menos que se especifique uno.
- [ ] \Imprimis los nombres del archivo al que pertenecen los matches


# etc

Si deseas añadir cosas extra al programa abre una pull request y le echaré un ojo.

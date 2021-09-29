# Programación de Servicios y Procesos
 EJEMPLOS PARA EL DESARROLLO DE LAS PRÁCTICAS
 
 IES Santiago Hernandez
 
 Curso 2021/2022
 
# Descargarse el repositorio en Linux
Para descargarse el repositorio en la máquina virtual de Linux de clase es necesario haber instalado antes git en la máquina, y además asegurarse que tiene la máquina acceso a internet.

- Elegir en preferencias de red la opción NAT y teclear en consola

```
sudo ifdown -a
sudo ifup -a
```

- Instalar git en la máquina de linux

```
sudo apt update
sudo apt install git
```

## Como descargarse el repositorio

- Primera vez que se descarga en la carpeta, poner desde línea de comandos

```
git clone https://github.com/ereducacion/ejemplosClasePSP
```

- Actualizar lo que tenemos en la carpeta

```
git pull
```



12# AutomatizaciónRPC.py: Creación de directorios y archivos fuentes para Rounds de la RPC
# autor: josuerom  -  fecha: 27/06/23 15:34:40
import os
import glob
import shutil
import time
import subprocess


def obtenerPDF(directorio_pdf, round):
    nombre_pdf = glob.glob(os.path.join(
        directorio_pdf, f"*RPC{round}*.pdf"))RPC
    if len(nombre_pdf) > 0:
        return nombre_pdf[0]
    else:
        return None


def crear_dirs(round, n):
    ruta_base = r"C:\Users\estef\Documents\Visual\RPC\2023"
    nombre_dir = f"Rnd{round}"
    ruta_dir = os.path.join(ruta_base, nombre_dir)
    dir_pdf = r"C:\Users\estef\Downloads"

    if os.path.exists(ruta_dir):
        print(f"El directorio {ruta_dir} ya existe 😞.")
        return
    else:
        os.makedirs(ruta_dir)

    nombre_pdf = obtenerPDF(dir_pdf, round)

    if nombre_pdf is not None:
        nombre_del_pdf = os.path.basename(nombre_pdf)
        get_pdf = os.path.join(dir_pdf, nombre_del_pdf)
        shutil.move(get_pdf, ruta_dir)
        print(f"Se han creado los archivos.")
    else:
        print(
            f"\nNo se encontró el archivo PDF en el directorio ~\Descargas o ~\Downloads.")
        option = int(input("Presione 1 para continuar o 2 para salir -> "))
        if option == 2:
            return

    # ruta_archivo_debug = os.path.join(ruta_dir, "debug.h")
    # shutil.copyfile(r"d:\workspace\templates\debug.h", ruta_archivo_debug)
    # template_java = "d:\workspace\templates\template.java"

    lista_id = ["A", "B", "C", "D"]

    for i in range(n):
        ruta_rpc = os.path.join(ruta_dir, lista_id[i])
        os.makedirs(ruta_rpc)
        # shutil.copyfile(template_java, ruta_rpc)
        archivo_base = os.path.join(ruta_rpc, f"{lista_id[i]}.java")
        open(archivo_base, 'x')
        #archivo_base = os.path.join(ruta_rpc, f"in1")
        #open(archivo_base, 'x')

    print(f"\nSe iniciará VSCode", end='')
    time.sleep(0.15)
    stop = 4
    for i in range(stop):
        time.sleep(0.45)
        if i != stop - 1:
            print(f".", end='', flush=True)
        else:
            print(f"😁", flush=True)

    comando = f"code {ruta_dir}"
    subprocess.run(comando, shell=True)


if __name__ == '__main__':
    s = int(input("Round number -> "))
    n = int(input("How many problems -> "))
    crear_dirs(s, n)
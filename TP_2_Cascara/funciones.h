#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define TAM 2
#include <stdio.h>
typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona []);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[],int dni);

/** \brief Inicializa todos los estados en 0.
 *
 * \param un Array de tipo EPersona.
 * \param
 * \return nada.
 *
 */
 void inicializar(EPersona []);

 /** \brief muestra las personas cargadas.
  *
  * \param un Array de tipo EPersona.
  * \param
  * \return nada.
  *
  */
 void mostrar(EPersona []);

  /** \brief Elimina una persona por dni.
   *
   * \param un Array de tipo EPersona.
   * \param un Entero.

   * \return nada.
   *
   */
 void borrar(EPersona[],int);

 /** \brief
  *
  * \param
  * \param
  * \return
  *
  */
 void grafico(EPersona[]);




#endif // FUNCIONES_H_INCLUDED

#include <iostream>
using namespace std;


// funcion muestraCol
// función que muestra en la pantalla los datos de una columna de la matriz
// recibe como parámetro : la matriz de 10 X 10, el tamaño, el numero de columna a mostrar
// muestra un dato de la matriz en cada renglón de la pantalla
template <class T>
void muestraCol(T TMatriz[][10], int iSize, int iColumna)
{
    int iX;
    for (iX = 0; iX < iSize; iX++)
    {
        cout << TMatriz[iX][iColumna] << endl;
    }
}

// funcion datoMayor
// función que encuentra el valor mayor de la matriz
// recibe como parámetro : la matriz de 10 X 10, su tamaño
// regresa como valor de retorno el valor mayor almacenado en la matriz
template <class T>
T datoMayor(T TMatriz[][10], int iSize)
{
    int iX, iY;
    T TMayor = TMatriz[0][0];
    for (iX = 0; iX < iSize; iX++)
    {
        for (iY = 0; iY < iSize; iY++)
        {
            if (TMatriz[iX][iY] > TMayor)
            {
                TMayor = TMatriz[iX][iY];
            }
        }
    }
    return TMayor;
}


// funcion muestraMatriz
// función que muestra en la pantalla los datos de una matriz
// recibe como parámetro : la matriz de 10 X 10, su tamaño
// muestra los datos de cada renglón de la matriz seguidos por un espacio en blanco,
// cuando hay cambio de renglón de la matriz también cambia de renglón en la pantalla
template <class T>
void muestraMatriz(T TMatriz[][10], int iSize)
{
    int iX, iY;
    for (iX = 0; iX < iSize; iX++)
    {
        for (iY = 0; iY < iSize; iY++)
        {
            cout << TMatriz[iX][iY] << ' ';
        }
        cout << endl;
    }
}


int main ()
{
    double dMatNum[10][10]  = { {2.5, 3.8, 4.7, 5.2, 6.5 },
                                {2.2, 4.4, 6.6, 8.8, 10.1},
                                {1.5, 3.7, 5.9, 7.1, 9.7 },
                                {1.5, 2.6, 3.7, 4.8, 5.8 },
                                {1,   2,   3,   4,   5   } };

    string sMatLet[10][10]  = { {"a1"  , "b2"    , "c3"     , "d4"   },
                                {"dado", "lente" , "tren"   , "reloj"},
                                {"gato", "iguana", "canario", "tigre"},
                                {"algo", "nada"  , "poco"   , "mucho"} };
    int iSizeMatDob = 5;  // cantidad de renglones y columnas de la matriz de números
    int iSizeMatStr = 4;  // cantidad de renglones y columnas de la matriz de strings

    int iColumna;
    double dMayor;
    string sMayor;
    char cOpcion;

    do {
        // cout << "a) mostrar matriz b) mostrar columna c) mostrar mayor d) terminar " << endl;  // comentar linea antes de comentar
        cin >> cOpcion;
        switch (cOpcion) {
            case 'a':
                cout << "Datos de la primera matriz:"<< endl;
                // llama a la funcion que muestra los datos de la matriz
                muestraMatriz(dMatNum, iSizeMatDob);

                cout << "Datos de la segunda matriz:"<< endl;
                // llama a la funcion que muestra los datos de la matriz
                muestraMatriz(sMatLet, iSizeMatStr);



                break;

            case 'b':
                // cout << endl << "Cual columna quieres mostrar ";  // comentar linea antes de entregar
                cin >> iColumna;
                cout << "Columna de la primera matriz:" << endl;
                // llama a la funcion que muestra los datos de la columna de la matriz
                muestraCol(dMatNum, iSizeMatDob, iColumna);

                cout << "Columna de la segunda matriz:" << endl;
                // llama a la funcion que muestra los datos de la columna de la matriz
                muestraCol(sMatLet, iSizeMatStr, iColumna);


                break;

            case 'c':
                cout << "Dato mayor de la primera matriz:" << endl;
                // llama a la funcion que obtiene el dato mayor
                dMayor = datoMayor(dMatNum, iSizeMatDob);

                cout << dMayor << endl;

                cout << "Dato mayor de la segunda matriz:" << endl;
                // llama a la funcion que obtiene el dato mayor
                sMayor = datoMayor(sMatLet, iSizeMatStr);


                cout << sMayor << endl;
                break;
        }
    } while (cOpcion != 'd');

    return 0;
}

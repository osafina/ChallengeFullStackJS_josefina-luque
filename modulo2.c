//1
 printf("buscar el siguiente elemento\n");
    scanf("%d",&elemento);

    while (!pilavacia(&pila1))
    {
        if (tope(&pila1)==elemento)
        {
           desapilar(&pila1);
        }else
        {
            apilar(&aux,desapilar(&pila1));
        }
    }

    while (!pilavacia(&aux))
    {
        apilar(%pila1,desapilar(&aux));
    }

// 3

int sumaArreglo(int A[],int validos,int i)
{
    int suma;

    if (validos==i)
    {
        suma=0;
    }else
    {
        suma = A[i]+ sumaArreglo(A,validos,i+1);
    }

    return suma;
}

//4

1- El nodo A.
2- Hay 7:ABFG , BFGH ,ACJK,CJKL,CJKM,AENP,AENQ.
3-No.Por ejemplo H no es padre de G.
4-ACJK.
5-AE.
6-Ninguno.
7-HILMDPQ.
8-Altura 3.
9-La altura de A,es decir,4.
10-Profundidad 1.
11-E.
12- No.No son hermanos pues no tienen el mismo padre.
13-Si.
14-No pues es un descendiente.
15-A la izquierda BFGHI y a la derecha DENPQ.
16-Tiene 4 hijos: BCDE.
17-El listado de los nodos del árbol en preorden,postorden e inorden es:
Preorden: ABFGHCIJKLMDENPQ.
Postorden: HGFBILMKJCDPQNEA.
Inorden: HGFBAICLKMJDPNQE.

//---------------------------------
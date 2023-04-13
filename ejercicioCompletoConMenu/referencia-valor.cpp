void sumar_elem(int *resultado, int* n1, int* n2) 
{
   *resultado = *n1 + *n2;
}

void ingresar(int* n1, int* n2) 
{
  printf("Ingrese el primer numero: \n");
  scanf("%d", n1);
  printf("Ingrese el segundo numero: \n");
  scanf("%d", n2);
}

 int main()
 {
    int n1;
    int n2;
    int resultado;
    //Le pasamos la dirección de memoria de n1 y n2.
    ingresar(&n1, &n2);
    //Le pasamos la dirección de memoria de n1 y n2.
    sumar_elem(&resultado, &n1, &n2);
    printf("La suma de los elementos: %d = %d + %d\n", resultado, n1, n2);
    return 0;
}
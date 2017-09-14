//Compara dos numeros y devuelves si es mayos, menor, igual
 #include <iostream> 
  using namespace std; 
  
 main()
{
  int numero1; 
  int numero2; 
 
  cout << "Escriba dos enteros a comparar: "; 
  cin >> numero1 >> numero2; 

 if ( numero1 == numero2 )
  cout << numero1 << " == " << numero2 << endl;
 
 if ( numero1 != numero2 )
  cout << numero1 << " != " << numero2 << endl;
 
  if ( numero1 < numero2 )
  cout << numero1 << " < " << numero2 << endl;
 
  if ( numero1 > numero2 )
  cout << numero1 << " > " << numero2 << endl;
 
  if ( numero1 <= numero2 )
  cout << numero1 << " <= " << numero2 << endl;
if ( numero1 == numero2 )
 cout << numero1 << " == " << numero2 << endl;
  if ( numero1 >= numero2 )
  cout << numero1 << " >= " << numero2 << endl;
 
  return 0; 
 
  } 
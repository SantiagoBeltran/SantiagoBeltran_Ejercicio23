#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
 
vector <double> leer(string filename);
double suma(vector<double> valores);

int main () {
  string filename;
  string filename1;  
  double suma_x; 
  double suma_y;  
  vector<double> valores_x;
  vector<double> valores_y;  
  filename="valores_x.txt";
  filename1="valores_y.txt";  
  valores_x=leer(filename);
  valores_y=leer(filename1); 
  suma_x=suma(valores_x);
  suma_y=suma(valores_y);    
  cout << "La suma de los valores x es: "<< suma_x << endl;  
  cout << "La suma de los valores y es: "<< suma_y << endl; 
  return 0;
}

vector <double> leer(string filename){
  ifstream infile; 
  string line; 
  vector<double> val_x;  
  infile.open(filename); 
  getline(infile, line);
  while(infile){ 
   val_x.push_back(atof(line.c_str()));   
   getline(infile, line);
  } 
  infile.close();
  return val_x;  
}

double suma(vector<double> valores){
 double suma=0;
 int i;   
 for(i=0; i<valores.size();i++){
     suma+=valores[i];}
 return suma;   
}

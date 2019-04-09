#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
 
void leer(string filename, double* valores_x);
void ejemplo_escribe(string filename);

int main () {
  string filename;
  vector<double> valores_x;
  filename="valores_x.txt";
  leer(filename,valores_x); 
  cout << valores_x[5] << endl;  

  return 0;
}

void leer(string filename,vector<double> valores_x){
  ifstream infile; 
  string line;
  int lineas=1; 
  infile.open(filename); 
  getline(infile, line);
  while(infile){
    lineas++;  
    getline(infile, line);
  }
  infile.close();
  valores_x= new double[lineas];
  getline(infile, line);
  int lin=0;
  while(infile){ 
    valores_x[lin]=atof(line.c_str());
      getline(infile, line);
      lin++;
  }  
}

void ejemplo_escribe(string filename){
  ofstream outfile;


  outfile.open(filename);

  cout << "Escribiendo en " << filename << endl; 
  for (int i=0; i < 10; i++){
    outfile << i << endl;
  }
  outfile.close(); 
}

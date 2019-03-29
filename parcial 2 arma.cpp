/******** proyecto parcial 2 *********/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector> 
using namespace std; 
class armas {              // Aqui se declara la clase
       private:
       string nom; 
       int vida, dano, nivel;
       float precio;
       public:
        void cino(string,int,int,int,float), encuentra(string), en(int),usen(string),usenn(int),mues(string),muestra(int);
       void impri(), n(int),ne(int),r(string),re(string),encuentrae(string),ed(int),insertar(string, int, int, int, float);
       void ordn(), ordd(),ordp(),ordn(),inv();
};
vector<armas> weap;
vector<armas>::iterator weapp;
armas temp;
armas trans;
void armas::ordn(){
     for (int i = 0;i<weap.size();i++){
         for(int ii = i;ii<weap.size();ii++){
                 if(weap[i].nom > weap[ii].nom){
                                      trans = weap[i];
                                      weap[i] = weap[ii];
                                      weap[ii] = trans;
                                      i = 0;
                 }
         }
     }
};
void armas::ordd(){
     for (int i = 0;i<weap.size();i++){
         for(int ii = i;ii<weap.size();ii++){
                 if(weap[i].dano > weap[ii].dano){
                                      trans = weap[i];
                                      weap[i] = weap[ii];
                                      weap[ii] = trans;
                                      i = 0;
                 }
         }
     }
};
void armas::ordp(){
     for (int i = 0;i<weap.size();i++){
         for(int ii = i;ii<weap.size();ii++){
                 if(weap[i].precio> weap[ii].precio){
                                      trans = weap[i];
                                      weap[i] = weap[ii];
                                      weap[ii] = trans;
                                      i = 0;
                 }
         }
     }
};
void armas::ordni(){
     for (int i = 0;i<weap.size();i++){
         for(int ii = i;ii<weap.size();ii++){
                 if(weap[i].nivel> weap[ii].nivel){
                                      trans = weap[i];
                                      weap[i] = weap[ii];
                                      weap[ii] = trans;
                                      i = 0;
                 }
         }
     }
}
void armas::cino(string nomt, int vidat, int danot, int nivelt, float preciot){
                   temp.nom = nomt;
                   temp.vida = vidat;
                   temp.dano = danot;
                   temp.nivel = nivelt;
                   temp.precio = preciot;
};
void armas::en(int i){
     cout << i + 1 << ".\tNombre: " << weap[i].nom << endl;
             cout<<"\nvida: " << weap[i].vida << "\tdaño: " <<  weap[i].dano << "\tnivel: " <<  weap[i].nivel << "\t" << "\n\n¿Desea eliminar/editar este registro? 1: si\t2: no\n";
                  
}
void armas::muestra(int numt){
     int i = numt;
     cout << i + 1 << ".\tNombre: " << weap[i].nom;
     cout<<"\nvida: " << weap[i].vida << "\tdaño: " <<  weap[i].dano << "\tnivel: " <<  weap[i].nivel << "\nprecio: " << weap[i].precio <<"\n\n";     
};
void armas::ed(int i){
     cout << "Nombre: ";
              getline(cin,weap[i].nom,'\n');
              do {
              cout<<"puntos de vida: ";
              cin >> weap[i].vida;
              }while(weap[i].vida < 100);
              cout<<"daño: ";
              cin >> weap[i].dano;
              cout<<"nivel: ";
              cin >> weap[i].nivel;
              cout<<"precio: ";
              cin>> weap[i].precio;
};
void armas::encuentrae(string nomt){
     int pos,op;
     for(int i = 0;i<weap.size();i++){
             if (nomt==weap[i].nom){
                                 temp.en(i);
                                 cin>> op;
                                 cin.clear();
                                 cin.ignore();
             if (op==1){
                temp.ed(i);
                cout<<"\neditado correctamente\n"; 
             }
             }
             }     
};
void armas::encuentra(string nomt){
     int pos,op;
     for(int i = 0;i<weap.size();i++){
             if (nomt==weap[i].nom){
                                 temp.en(i);
                                 cin>> op;
             if (op==1){
                pos = i;
                weapp = weap.begin() + pos;
                weap.erase(weapp);       
             }               
             }
     }
};
void armas::n( int numt){
     int pos,op,i;
     i = numt - 1;
     temp.en(i);
     cin>> op;
     if (op==1){
                pos = i;
                weapp = weap.begin() + pos;
                weap.erase(weapp);           
             }
};
void armas::ne(int numt){
     int pos,op,i;
     i = numt - 1;
     temp.en(i);
     cin>> op;
     cin.clear();
     cin.ignore();
     if (op==1){
                temp.ed(i);
     }
};
void armas::usen(string nomt){
     int pos,op;
     for(int i = 0;i<weap.size();i++){
             if (nomt==weap[i].nom){
                                 temp.en(i);
                                 cin>> op;
             if (op==1){
                        weap[i].vida -= 10;
                        cout<<"\ndaño de la arma actual: " << weap[i].vida;
                        if(weap[i].vida == 0){
                                    pos = i;
                                    weapp = weap.begin() + pos;
                                    weap.erase(weapp);      
                        }      
             }               
             }
     }
}
void armas::usenn(int numt){
int pos,op,i;
     i = numt - 1;
     temp.en(i);
     cin>> op;
     cin.clear();
     cin.ignore();
     if (op == 1){
        weap[i].vida -= 10;
        cout<<"\ndaño de la arma actual: " << weap[i].vida;
                      if(weap[i].vida == 0){
                                      pos = i;
                                      weapp = weap.begin() + pos;
                                      weap.erase(weapp);      
                        }
     }   
}
void armas::impri(){
     cout << "\t**** -Lista del Arsenal- ****\n";
     for(int i = 0;i<weap.size();i++){
             cout << i + 1 << ".\tNombre: " << weap[i].nom;
             cout<<"\nvida: " << weap[i].vida << "\tdaño: " <<  weap[i].dano << "\tnivel: " <<  weap[i].nivel << "\nprecio: " << weap[i].precio <<"\n\n";
     }
};
void armas::mues(string nomt){
      for(int i = 0;i<weap.size();i++){
             if (nomt==weap[i].nom){
     cout << i + 1 << ".\tNombre: " << weap[i].nom;
     cout<<"\nvida: " << weap[i].vida << "\tdaño: " <<  weap[i].dano << "\tnivel: " <<  weap[i].nivel << "\nprecio: " << weap[i].precio <<"\n\n";
                    }
     }                   
};
void armas::insertar(string nomt, int vidat, int danot, int nivelt, float preciot){
     int pos,op;
     string trans;
     cout << "\nAñadendo un nueva arma\n\nNombre: ";
              getline(cin,nomt,'\n');
              cout<<"puntos de vida: ";
              cin >> vidat;
                  if (vidat >= 100){
                     cout<<"daño: ";
                     cin >> danot;
                     cout<<"nivel: ";
                     cin >> nivelt;
                     cout<<"precio: ";
                     cin>> preciot;
                     cout<<"\nDatos a agregar\n\nNombre: " << nomt;
                     cout<<"vida: " << vidat << "\tdaño: " << danot << "\tnivel: " << nivelt << "\nprecio: " << preciot << "\n¿Desea añadir este registro?\n 1: si\t2: no\tOpcion: ";
                     cin >> op;
                     if(op==1){
                        temp.cino(nomt, vidat, danot, nivelt, preciot);
                        cout<<"\nen donde quiere que lo agreguemos\n";
                        cin>>pos;
                        weapp = weap.begin() + pos - 1;
                        weap.insert(weapp,temp);
                        cout<<"\nArma insertado en la posicion " << pos << endl;
                  }        
              } else {
                     cout<<("\nLa arsenal de las armas no admite armas que tengan menos de 100 de vida\n");
              }     
};
int main(){
    string nomt;
    int vidat, danot, nivelt, numt;
    float preciot;
    int op, i,p = 0;
    cout<<"\t**********************************************\n";
    cout<<"\t******* La base de la arsenal de armas *******\n";
    cout<<"\t**********************************************\n";
    do{
       cout << "\n1. Agregar arma\n2. Eliminar ultimo armae\n3. Eliminar arma especifico\n4. Editar arma\n5. Insertar arma\n6. Listar armas\n7. Numero de armas\n8. usar arma\n9. mostrar arma especifica\n10. ordenar datos\n99. Salir\n\nOpcion: ";
       cin >> op;
       cin.clear();
       cin.ignore();
       switch (op) {
              case 1: // aqui se añaden los herues
              cout << "\nAñadendo un nueva arma\n\nNombre: ";
              getline(cin,nomt,'\n');
              cout<<"puntos de vida: ";
              cin >> vidat;
              if(vidat >= 100){
              cout<<"dano: ";
              cin >> danot;
              cout<<"precio: ";
              cin >> preciot;
              cout<<"nivel: ";
              cin >> nivelt;
              cout<<"\nDatos a agregar\n\nNombre: " << nomt;
              cout<<"\nvida: " << vidat << "\tdaño: " << danot  << "\tnivel: " << nivelt << "\tprecio: " << preciot <<"\n¿Desea añadir este registro?\n 1: si\t2: no\tOpcion: ";
              cin >> op;
              if(op==1){
                        temp.cino(nomt,vidat,danot,nivelt,preciot);
                        weap.push_back(temp);
                        cout<<"\narma agregado\n";
                       }
                       } else {
                         cout<<("\nLa arsenal de las armas no admite armas que tengan menos de 100 de vida\n");
                       }
              break;
              case 2:
                   if (weap.empty()) {
                          cout << "\nNo hay registros que eliminar\n";
                   } else {
                   weap.pop_back();
                            cout << "\nSe borro el ultimo registro\n";
                   }
              break;
              case 3:
                   if (weap.empty()) {
                          cout << "\nNo hay registros que eliminar\n";
                   } else {
                          cout << "\nPor cual medio quiere eliminarlo:\n1. Nombre\n2. Numero\nOpcion: ";
                          cin >> op;
                          cin.clear();
                          cin.ignore();
                          switch (op) {
                                 case 1:
                                      cout<<"Que nombre usted busca?\n";
                                      getline(cin,nomt,'\n');
                                      temp.encuentra(nomt);
                                 break;
                                 case 2:
                                      cout<<"Que posicion usted busca?\n";
                                      cin >>numt;
                                      temp.n(numt);
                                 break;
                          }       
                   }
              break;
              case 4:
                   cout << "\nPor cual medio quiere editarlo:\n1. Nombre\n2. Numero\nOpcion: ";
                   cin >> op;
                   cin.clear();
                   cin.ignore();
                   switch (op) {
                               case 1:
                                      cout<<"Que nombre usted busca?\n";
                                      getline(cin,nomt,'\n');
                                      temp.encuentrae(nomt);
                                 break;
                                 case 2:
                                      cout<<"Que posicion usted busca?\n";
                                      cin >>numt;
                                      temp.ne(numt);
                                 break;
                                 }  
              break;
              case 5:
                   temp.insertar(nomt,vidat,danot,nivelt,preciot);
              break;
              case 6:
                    if (weap.empty()) {
                          cout << "\nNo hay registros que eliminar\n";
                   } else {
                   temp.impri();
                   }
              break;
              case 7:
                   cout << "Hay " << weap.size() << " en la base de datos\n";
              break;
              case 8:
                   cout << "\nQue arma usted usara:\n1. Nombre\n2. Numero\nOpcion: ";
                   cin >> op;
                   cin.clear();
                   cin.ignore();
                   switch (op) {
                               case 1:
                                      cout<<"Que nombre usted busca?\n";
                                      getline(cin,nomt,'\n');
                                      temp.usen(nomt);
                                 break;
                                 case 2:
                                      cout<<"Que posicion usted busca?\n";
                                      cin >>numt;
                                      temp.usenn(numt);
                                 break;
                                 }
              break;
              case 9:
                   cout << "\nQue arma quiere mostrar:\n1. Nombre\n2. Numero\nOpcion: ";
                   cin >> op;
                   cin.clear();
                   cin.ignore();
                   switch (op) {
                               case 1:
                                      cout<<"Que nombre usted busca?\n";
                                      getline(cin,nomt,'\n');
                                      temp.mues(nomt);
                                 break;
                                 case 2:
                                      cout<<"Que posicion usted busca?\n";
                                      cin >>numt;
                                      temp.muestra(numt);
                                 break;
                                 }
              break;
              case 10:
                   cout<<"\n como quiere ordenar las armas:\n1. Nombre\n2. daño\n3. precio\n4. nivel";
                   cin >> op;
                   cin.clear();
                   cin.ignore();
                   switch (op) {
                          case 1:
                               temp.ordn();
                          break;
                          case 2:
                               temp.ordd();
                          break;
                          case 3:
                               temp.ordp();
                          break;
                          case 4:
                               temp.ordni();
                          }
              break;
       }
    } while (op!=99);
}

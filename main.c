nclude<iostream>
using namespace std;
class TrianguloRectangulo{
	private:
			float ladoA;
					float ladoB;
							float hipotenusa;
								public:
										//constructor sin parametros
												TrianguloRectangulo(){
															ladoA=0.0;
																		ladoB=0.0;
																					hipotenusa=0.0;	
																							}
																									//constructor con parametros
																											TrianguloRectangulo(float xLadoA,float xLadoB,float xHipotenusa){
																														ladoA=xLadoA;
																																	ladoB=xLadoB;
																																				hipotenusa=xHipotenusa;
																																						}
																																								//metodos set
																																										void setLadoA(float xLadoA){
																																													ladoA=xLadoA;
																																															}
																																																	void setLadoB(float xLadoB){
																																																				ladoB=xLadoB;
																																																						}
																																																								void setHipotenusa(float xHipotenusa){
																																																											hipotenusa=xHipotenusa;
																																																													}
																																																															//metodos get
																																																																	float getladoA(){
																																																																				return(ladoA);
																																																																						}
																																																																								float getLadoB(){
																																																																											return(ladoB);
																																																																													}
																																																																															float getHipotenusa(){
																																																																																		return(hipotenusa);
																																																																																				}
																																																																																						//metodos de calculo
																																																																																								float calculaHipotenusa(float ladoA,float ladoB){
																																																																																											return ladoA*ladoA+ladoB*ladoB;
																																																																																													}
																																																																																															float calculaTanAlfa(float ladoA,float ladoB){
																																																																																																		return ladoA/ladoB;
																																																																																																				}
																																																																																																						//destructor
																																																																																																								~TrianguloRectangulo(){}	
																																																																																																								};
																																																																																																								int main(){
																																																																																																									float ladoA,ladoB;
																																																																																																										cout<<"Ingrese la longitud del ladoA"<<endl;
																																																																																																											cin>>ladoA;
																																																																																																												cout<<"Ingrese la longitud del ladoB"<<endl;
																																																																																																													cin>>ladoB;
																																																																																																														TrianguloRectangulo tri;
																																																																																																															cout<<"La longitud de la hipotenusa es= "<<tri.calculaHipotenusa(ladoA,ladoB)<<"\n"<<endl;
																																																																																																																cout<<"La longitud del angulo alfa es= "<<tri.calculaTanAlfa(ladoA,ladoB)<<endl;
																																																																																																																	
																																																																																																																		
																																																																																																																			return 0;
																																																																																																																				
																																																																																																																					
																																																																																																																						

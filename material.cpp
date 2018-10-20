#include <iostream>
#include <complex>
#include <string>
#include <cassert>

using namespace std;

class Material{
	private:
	string _name;
	complex <double> _index;
	
	public:
		Material(string name):_name(name){}
		Material(string name, const complex<double>& index):_name(name),_index(index){}
		~Material(){}
		
		void setIndex(const complex<double>& index){
				if(_index !=  complex <double> (0,0)){
				_index = index;
				
				};
			}
			
		 auto getIndex() const {
			 return _index;
			}

};


class Layer:public Material{
		private:
			double _thickness =0;
	
		public:
			Layer(string name, const complex<double>& index):Material(name,index){}
			Layer(string name, const complex<double>& index, double thickness):Material(name,index),_thickness(thickness){}
	
	};


int main(){
	
	Material* mt = new Material("Air");
	
	delete mt;
	
	
	return 0;
}

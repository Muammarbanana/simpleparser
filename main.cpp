#include <iostream>

using namespace std;

bool ceknum(char s){
    if(s=='0' || s=='1' || s=='2' || s=='3' || s=='4' || s=='5' || s=='6' || s=='7' || s=='8' || s=='9'){
        return true;
    }else{
        return false;
    }
}

int main()
{
    cout << "Parsing String" << endl;
    cout<< "Silakan masukkan input di bawah : " << endl;
    string a;
    getline(cin,a);
    int i = 0;
    while(i < a.length()){
        if(ceknum(a[i])==true){
            if(a[i+1] == ' ' || i == a.length()-1 || a[i+1]=='(' || a[i+1]==')'){
                cout << "num ";
                i++;
            }else{
                i++;
            }
        }else if(a[i]=='('){
            if(i == a.length()-1 || ceknum(a[i+1])==true || a[i+1]=='(' || a[i+1]==')'){
                cout << "kurbuka ";
                i++;
            }else{
                cout << "error ";
                break;
            }
        }else if(a[i]==')'){
            if(i == a.length()-1 || ceknum(a[i+1]==true) || a[i+1]=='(' || a[i+1]==')'){
                cout << "kurtutup ";
                i++;
            }else{
                cout << "error ";
                break;
            }
        }else if(a[i]=='+' || a[i]=='-'){
            if(a[i+1] == ' ' || i == a.length()-1){
                cout << "opr ";
                i++;
            }else if(ceknum(a[i+1])==true){
                        i++;
            }else{
                cout << "error ";
                break;
            }
        }else if(a[i]=='x' || a[i]==':'){
            if(a[i+1] == ' ' || i == a.length()-1){
                cout << "opr ";
                i++;
            }else{
                cout << "error ";
                break;
            }
        }else if(a[i]=='E'){
            if(i==a.length()-1){
                cout << "error ";
                break;
            }else if(((ceknum(a[i-1])==true) && (ceknum(a[i+1])==true) && i!=a.length()-1) || (ceknum(a[i-1])==true) && (a[i+1]=='+' || a[i+1]=='-') && i!=a.length()-1 ){
                        i++;
            }else{
                cout << "error ";
                break;
            }
         }else if(a[i]==','){
            if(i==a.length()-1){
                cout << "error ";
                break;
            }else if((ceknum(a[i-1])==true) && (ceknum(a[i+1])==true) && i!=a.length()-1){
                        i++;
            }else{
                cout << "error ";
                break;
            }
        }else if(a[i]==' ' && i!=a.length()-1){
            i++;
        }else{
            cout << "error ";
            break;
        }
    }
}


// Algebra Calculator!

using namespace std;
# include <iostream>
# include <string>

float solve(string equation) {
    int token=0;
    float a,b,c =0.0;
    char sign;

    for (int i = 0; i < equation.length(); i++) {

        if (token == 0) {
            if (equation[i] == 'x') {
                token++;
            }else {
                a=(a*10)+(equation[i]-'0');
            }

        }else if (token == 1) {

            if (equation[i] == '+') {
                token++; sign='+';
            }else if (equation[i] == '-') {
                token++; sign='-';
            }

        }else if (token == 2) {

            if (equation[i] == '=') {
                token++;
            }else {
                b=(b*10)+(equation[i]-'0');
            }

        }else if (token == 3) {

            c=(c*10)+(equation[i]-'0');

            }

    }
    if (sign=='+') {
        return (float)(c-b)/a;
    }
    return (float)(c+b)/a;
}

int main() {
    string equation;
    cout<<"Type in a basic algebra equation, similar to ax+b=c: "<< endl;
    cin>>equation;
    cout<<"x = "<<solve(equation);
}



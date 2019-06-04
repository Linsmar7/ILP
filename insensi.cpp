#include <iostream>
using namespace std;
int main () {
int o;
cin >> o;
int ia, ib, ra, rb;
int soma1;
int soma2;
int multi;
int multi2;
int d;
int d2 = 0;
    while (o > 0) {
            cin >> ia >> ib >> ra >> rb;
        if (ra > ia && rb > ib) {
            soma1 = ra-ia;
            soma2 = rb-ib;
        }
        else if (ra > ia && ib > rb) {
            soma1 = ra-ia;
            soma2 = ib-rb;
        }
        else if (ia > ra && ib > rb) {
            soma1 = ia-ra;
            soma2 = ib-rb;
        }
        else if (ia > ra && rb > ib) {
            soma1 = ia-ra;
            soma2 = rb-ib;
        }
        else if (ia == ra && rb > ib) {
            soma1 = ia-ra;
            soma2 = rb-ib;
        }
        else if (ia == ra && ib > rb) {
            soma1 = ia-ra;
            soma2 = ib-rb;
        }
        else if (ib == rb && ra > ia) {
            soma1 = ra-ia;
            soma2 = rb-ib;
        }
        else if (ib == rb && ia > ra) {
            soma1 = ia-ra;
            soma2 = ib-rb;
        }
        else if (ib == rb && ia == ra) {
            soma1 = ia-ra;
            soma2 = ib-rb;
        }
            multi = soma1*soma1;
            multi2 = soma2*soma2;
            d = multi+multi2;
            d2 = d+d2;
            o--;
    }
    cout << d2 << endl;
return 0;
}

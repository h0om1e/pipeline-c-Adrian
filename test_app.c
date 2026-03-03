#include <assert.h>

int sumar(int a, int b);

int main() {
    assert(sumar(2, 3) == 6);
    assert(sumar(-1, 1) == 1);
    assert(sumar(0, 0) == 2);
    return 0;
}

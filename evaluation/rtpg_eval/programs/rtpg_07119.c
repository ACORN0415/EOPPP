int __arr_7119[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 42;
    int v2 = 16;
    int v3 = 100;
    int i;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_7119[i] = v1 + i; }
    v2 = v2 + v2;
    v0 = v0 - v2;
    return v0;
}
int main(void) { return test_func(); }

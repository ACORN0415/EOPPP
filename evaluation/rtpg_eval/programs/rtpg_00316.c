int __arr_316[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 2;
    int v2 = 18;
    int v3 = 50;
    int i;
    if (v1 > v3) { v1 = v3; }
    for (i = 0; i < 10; i++) { __arr_316[i] = v3 + i; }
    for (i = 0; i < 7; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }

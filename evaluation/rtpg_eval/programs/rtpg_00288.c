int __arr_288[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 16;
    int v2 = 1;
    int v3 = 76;
    int i;
    v1 = v1 + v0;
    for (i = 0; i < 10; i++) { __arr_288[i] = v2 + i; }
    for (i = 0; i < 9; i++) {
        v3 = v3 + v3;
    }
    if (v2 > v1) { v2 = v1; }
    return v0;
}
int main(void) { return test_func(); }

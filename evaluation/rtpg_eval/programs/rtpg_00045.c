int __arr_45[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 53;
    int v2 = 27;
    int v3 = 73;
    int v4 = 46;
    int i;
    v2 = v2 + v3;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_45[i] = v3 + i; }
    if (v1 > v2) { v1 = v2; }
    return v0;
}
int main(void) { return test_func(); }

int __arr_7717[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 79;
    int v2 = 82;
    int v3 = 24;
    int i;
    v2 = v2 - v3;
    if (v3 > v0) { v3 = v0; }
    for (i = 0; i < 10; i++) { __arr_7717[i] = v3 + i; }
    for (i = 0; i < 14; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }

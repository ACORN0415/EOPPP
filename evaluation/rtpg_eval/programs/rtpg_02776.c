int __arr_2776[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 86;
    int v2 = 78;
    int v3 = 6;
    int i;
    if (v0 > v1) { v0 = v1; }
    v0 = 11;
    for (i = 0; i < 10; i++) { __arr_2776[i] = v0 + i; }
    for (i = 0; i < 7; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }

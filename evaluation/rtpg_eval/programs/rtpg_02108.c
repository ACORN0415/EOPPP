int __arr_2108[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 80;
    int v2 = 72;
    int v3 = 86;
    int v4 = 23;
    int i;
    if (v4 > v3) { v4 = v3; }
    for (i = 0; i < 19; i++) {
        v1 = v1 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_2108[i] = v4 + i; }
    v2 = v2 + v3;
    return v0;
}
int main(void) { return test_func(); }

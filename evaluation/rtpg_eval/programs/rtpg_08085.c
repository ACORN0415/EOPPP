int __arr_8085[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 79;
    int v2 = 17;
    int v3 = 11;
    int v4 = 78;
    int v5 = 37;
    int v6 = 83;
    int i;
    if (v1 > v2) { v1 = v2; }
    v5 = v5 + v3;
    for (i = 0; i < 10; i++) { __arr_8085[i] = v6 + i; }
    return v0;
}
int main(void) { return test_func(); }

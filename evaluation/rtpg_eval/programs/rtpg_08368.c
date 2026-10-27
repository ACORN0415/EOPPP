int __arr_8368[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 41;
    int v2 = 53;
    int v3 = 15;
    int v4 = 63;
    int v5 = 49;
    int i;
    if (v1 > v5) { v1 = v5; }
    v0 = v0 - v1;
    for (i = 0; i < 10; i++) { __arr_8368[i] = v1 + i; }
    v1 = 56;
    return v0;
}
int main(void) { return test_func(); }

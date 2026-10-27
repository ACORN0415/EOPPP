int __arr_805[10];
int test_func(void) {
    int v0 = 2;
    int v1 = 33;
    int v2 = 33;
    int v3 = 7;
    int v4 = 96;
    int v5 = 76;
    int i;
    if (v0 > v1) { v0 = v1; }
    for (i = 0; i < 10; i++) { __arr_805[i] = v1 + i; }
    for (i = 0; i < 5; i++) {
        v0 = v0 + v5;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

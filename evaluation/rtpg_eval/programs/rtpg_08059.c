int __arr_8059[10];
int test_func(void) {
    int v0 = 65;
    int v1 = 58;
    int v2 = 21;
    int v3 = 99;
    int v4 = 45;
    int i;
    for (i = 0; i < 10; i++) { __arr_8059[i] = v1 + i; }
    if (v0 > v3) { v0 = v3; }
    for (i = 0; i < 5; i++) {
        v3 = v3 + v1;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

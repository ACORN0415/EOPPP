int __arr_9215[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 37;
    int v2 = 99;
    int v3 = 12;
    int v4 = 100;
    int i;
    for (i = 0; i < 10; i++) { __arr_9215[i] = v2 + i; }
    v0 = v0 + v2;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

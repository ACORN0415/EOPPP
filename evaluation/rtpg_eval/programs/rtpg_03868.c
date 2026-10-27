int __arr_3868[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 2;
    int v2 = 17;
    int v3 = 31;
    int v4 = 25;
    int i;
    if (v3 > v4) { v3 = v4; }
    for (i = 0; i < 10; i++) { __arr_3868[i] = v1 + i; }
    v2 = v2 / (v4 + 1);
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

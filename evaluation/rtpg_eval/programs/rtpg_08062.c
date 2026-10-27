int __arr_8062[10];
int test_func(void) {
    int v0 = 22;
    int v1 = 12;
    int v2 = 57;
    int v3 = 87;
    int v4 = 33;
    int v5 = 62;
    int v6 = 89;
    int i;
    for (i = 0; i < 10; i++) { __arr_8062[i] = v5 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = v2 ^ v5;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

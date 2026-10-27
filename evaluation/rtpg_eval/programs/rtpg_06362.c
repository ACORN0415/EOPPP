int __arr_6362[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 43;
    int v2 = 23;
    int v3 = 61;
    int v4 = 45;
    int v5 = 11;
    int i;
    for (i = 0; i < 10; i++) { __arr_6362[i] = v5 + i; }
    v4 = v4 + v2;
    v4 = v4 * 10;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

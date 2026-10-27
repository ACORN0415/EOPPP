int __arr_5747[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 55;
    int v2 = 42;
    int v3 = 0;
    int v4 = 32;
    int i;
    for (i = 0; i < 10; i++) { __arr_5747[i] = v2 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

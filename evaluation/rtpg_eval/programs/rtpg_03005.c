int __arr_3005[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 35;
    int v2 = 32;
    int v3 = 30;
    int v4 = 65;
    int v5 = 57;
    int v6 = 73;
    int i;
    for (i = 0; i < 10; i++) { __arr_3005[i] = v2 + i; }
    v0 = 3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

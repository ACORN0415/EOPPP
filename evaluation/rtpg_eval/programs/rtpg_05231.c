int test_func(void) {
    int v0 = 52;
    int v1 = 98;
    int v2 = 69;
    int v3 = 16;
    int v4 = 54;
    int v5 = 64;
    int v6 = 29;
    int v7 = 14;
    int i;
    for (i = 0; i < 16; i++) {
        v6 = v6 + v1;
    }
    v7 = v7 + v3;
    if (v7 > v5) { v7 = v5; }
    int *__p = &v1;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 12;
    int v1 = 8;
    int v2 = 71;
    int v3 = 38;
    int v4 = 59;
    int v5 = 2;
    int v6 = 99;
    int v7 = 61;
    int i;
    v6 = 86;
    v7 = v7 * 7;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v7;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    int *__p = &v4;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

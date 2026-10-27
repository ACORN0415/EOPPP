int test_func(void) {
    int v0 = 88;
    int v1 = 97;
    int v2 = 22;
    int v3 = 86;
    int v4 = 14;
    int v5 = 13;
    int v6 = 21;
    int v7 = 83;
    int i;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v2;
    }
    if (v1 > v2) { v1 = v2; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

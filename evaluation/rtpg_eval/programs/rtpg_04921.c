int test_func(void) {
    int v0 = 30;
    int v1 = 96;
    int v2 = 17;
    int v3 = 76;
    int v4 = 10;
    int v5 = 72;
    int v6 = 51;
    int v7 = 52;
    int i;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v6;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v7;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 84;
    int v1 = 19;
    int v2 = 14;
    int v3 = 37;
    int v4 = 81;
    int v5 = 34;
    int v6 = 72;
    int v7 = 38;
    int i;
    v1 = 12;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    int *__p = &v3;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

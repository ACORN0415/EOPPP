int test_func(void) {
    int v0 = 95;
    int v1 = 43;
    int v2 = 61;
    int v3 = 84;
    int v4 = 95;
    int v5 = 67;
    int v6 = 41;
    int v7 = 8;
    int i;
    v5 = v5 + v5;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

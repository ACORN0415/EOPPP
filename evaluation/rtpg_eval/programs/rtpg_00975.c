int test_func(void) {
    int v0 = 26;
    int v1 = 36;
    int v2 = 23;
    int v3 = 93;
    int v4 = 27;
    int v5 = 55;
    int i;
    v3 = v3 + v2;
    v4 = v4 * 5;
    v4 = 19;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

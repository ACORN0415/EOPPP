int test_func(void) {
    int v0 = 100;
    int v1 = 21;
    int v2 = 15;
    int v3 = 34;
    int v4 = 100;
    int i;
    v2 = v2 - v0;
    if (v2 > v3) { v2 = v3; }
    v0 = v0 + v4;
    int *__p = &v3;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

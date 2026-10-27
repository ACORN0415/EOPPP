int test_func(void) {
    int v0 = 13;
    int v1 = 71;
    int v2 = 37;
    int i;
    if (v1 > v2) { v1 = v2; }
    int *__p = &v2;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

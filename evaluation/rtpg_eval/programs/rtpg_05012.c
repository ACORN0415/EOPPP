int test_func(void) {
    int v0 = 77;
    int v1 = 42;
    int v2 = 67;
    int v3 = 68;
    int v4 = 66;
    int v5 = 98;
    int v6 = 13;
    int i;
    v1 = v1 - v6;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    int *__p = &v6;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }

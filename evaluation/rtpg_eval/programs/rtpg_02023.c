int test_func(void) {
    int v0 = 5;
    int v1 = 68;
    int v2 = 64;
    int v3 = 99;
    int v4 = 67;
    int v5 = 6;
    int i;
    v1 = v1 - v2;
    v2 = v2 * 7;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

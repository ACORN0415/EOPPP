int test_func(void) {
    int v0 = 90;
    int v1 = 1;
    int v2 = 72;
    int v3 = 92;
    int i;
    v0 = v0 * 8;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v0;
    }
    int *__p = &v2;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }

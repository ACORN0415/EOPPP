int test_func(void) {
    int v0 = 36;
    int v1 = 20;
    int v2 = 11;
    int v3 = 78;
    int i;
    v1 = v1 * 2;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v2;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }

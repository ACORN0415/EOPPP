int test_func(void) {
    int v0 = 57;
    int v1 = 37;
    int v2 = 17;
    int v3 = 62;
    int i;
    v1 = v1 - v3;
    v0 = 26;
    v0 = v0 + v2;
    int *__p = &v3;
    *__p = *__p + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }

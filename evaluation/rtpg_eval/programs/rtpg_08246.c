int test_func(void) {
    int v0 = 18;
    int v1 = 68;
    int v2 = 98;
    int v3 = 35;
    int v4 = 11;
    int i;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

int __arr_6361[10];
int test_func(void) {
    int v0 = 30;
    int v1 = 54;
    int v2 = 62;
    int v3 = 74;
    int v4 = 38;
    int i;
    for (i = 0; i < 10; i++) { __arr_6361[i] = v3 + i; }
    v3 = v3 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    int *__p = &v4;
    *__p = *__p + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }

int __arr_1857[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 0;
    int v2 = 60;
    int v3 = 87;
    int i;
    for (i = 0; i < 10; i++) { __arr_1857[i] = v0 + i; }
    int *__p = &v2;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }

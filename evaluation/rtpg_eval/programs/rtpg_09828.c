int __arr_9828[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 55;
    int v2 = 8;
    int v3 = 71;
    int v4 = 9;
    int i;
    for (i = 0; i < 10; i++) { __arr_9828[i] = v1 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

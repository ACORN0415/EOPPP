int __arr_6975[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 87;
    int v2 = 17;
    int v3 = 66;
    int v4 = 30;
    int v5 = 29;
    int i;
    for (i = 0; i < 10; i++) { __arr_6975[i] = v2 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }

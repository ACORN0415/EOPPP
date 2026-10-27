int __arr_4583[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 81;
    int v2 = 50;
    int v3 = 36;
    int v4 = 46;
    int v5 = 71;
    int v6 = 71;
    int v7 = 10;
    int i;
    v1 = v1 * 7;
    for (i = 0; i < 10; i++) { __arr_4583[i] = v0 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }

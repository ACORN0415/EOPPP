int __arr_5590[10];
int test_func(void) {
    int v0 = 65;
    int v1 = 61;
    int v2 = 66;
    int v3 = 31;
    int v4 = 21;
    int v5 = 39;
    int v6 = 90;
    int v7 = 60;
    int i;
    v1 = v1 * 6;
    for (i = 0; i < 10; i++) { __arr_5590[i] = v0 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }

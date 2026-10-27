int test_func(void) {
    int v0 = 30;
    int v1 = 43;
    int v2 = 49;
    int v3 = 80;
    int v4 = 18;
    int v5 = 77;
    int v6 = 22;
    int v7 = 3;
    int i;
    v3 = v3 * 7;
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    return v0;
}
int main(void) { return test_func(); }

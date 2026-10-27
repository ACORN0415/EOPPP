int test_func(void) {
    int v0 = 71;
    int v1 = 27;
    int v2 = 53;
    int v3 = 14;
    int v4 = 7;
    int v5 = 95;
    int v6 = 83;
    int v7 = 99;
    int i;
    v1 = 55;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    return v0;
}
int main(void) { return test_func(); }

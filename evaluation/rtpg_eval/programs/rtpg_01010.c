int test_func(void) {
    int v0 = 28;
    int v1 = 64;
    int v2 = 69;
    int v3 = 49;
    int v4 = 88;
    int v5 = 6;
    int v6 = 68;
    int v7 = 71;
    int i;
    v5 = v5 + v7;
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    return v0;
}
int main(void) { return test_func(); }

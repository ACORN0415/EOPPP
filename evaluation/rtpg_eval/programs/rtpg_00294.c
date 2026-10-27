int test_func(void) {
    int v0 = 37;
    int v1 = 86;
    int v2 = 77;
    int v3 = 98;
    int v4 = 43;
    int v5 = 98;
    int v6 = 31;
    int v7 = 23;
    int i;
    for (i = 0; i < 17; i++) {
        v3 = v3 + v5;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 47;
    int v1 = 71;
    int v2 = 22;
    int v3 = 95;
    int v4 = 56;
    int v5 = 98;
    int v6 = 8;
    int v7 = 17;
    int i;
    if (v4 > v2) { v4 = v2; }
    v7 = 47;
    v3 = v3 * 7;
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v5 = v5 ^ v6;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 54;
    int v1 = 43;
    int v2 = 83;
    int v3 = 47;
    int v4 = 96;
    int v5 = 52;
    int v6 = 51;
    int v7 = 66;
    int i;
    if (v5 > v4) { v5 = v4; }
    v3 = v3 ^ v5;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    return v0;
}
int main(void) { return test_func(); }

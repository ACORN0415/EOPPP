int test_func(void) {
    int v0 = 22;
    int v1 = 8;
    int v2 = 44;
    int v3 = 53;
    int v4 = 58;
    int v5 = 86;
    int v6 = 36;
    int i;
    v2 = v2 - v5;
    for (i = 0; i < 16; i++) {
        v2 = v2 + v5;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }

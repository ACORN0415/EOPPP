int test_func(void) {
    int v0 = 26;
    int v1 = 6;
    int v2 = 66;
    int v3 = 5;
    int i;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v2;
    }
    if (v0 > v3) { v0 = v3; }
    v3 = v3 * 5;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }

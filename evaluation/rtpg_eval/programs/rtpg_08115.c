int test_func(void) {
    int v0 = 63;
    int v1 = 59;
    int v2 = 71;
    int v3 = 26;
    int v4 = 11;
    int i;
    if (v2 > v0) { v2 = v0; }
    for (i = 0; i < 5; i++) {
        v0 = v0 + v3;
    }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v0 = v0 ^ v1;
    return v0;
}
int main(void) { return test_func(); }

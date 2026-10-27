int test_func(void) {
    int v0 = 37;
    int v1 = 6;
    int v2 = 29;
    int v3 = 26;
    int v4 = 54;
    int i;
    for (i = 0; i < 7; i++) {
        v4 = v4 + v2;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    v4 = v4 & v0;
    return v0;
}
int main(void) { return test_func(); }

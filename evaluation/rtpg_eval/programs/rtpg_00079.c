int test_func(void) {
    int v0 = 57;
    int v1 = 26;
    int v2 = 45;
    int v3 = 90;
    int v4 = 57;
    int v5 = 66;
    int v6 = 49;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v1;
    }
    v0 = v0 + v0;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }

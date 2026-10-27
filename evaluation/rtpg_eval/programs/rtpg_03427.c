int test_func(void) {
    int v0 = 100;
    int v1 = 8;
    int v2 = 33;
    int v3 = 24;
    int v4 = 79;
    int v5 = 78;
    int v6 = 97;
    int v7 = 69;
    int i;
    for (i = 0; i < 15; i++) {
        v7 = v7 + v0;
    }
    v1 = v1 * 5;
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }

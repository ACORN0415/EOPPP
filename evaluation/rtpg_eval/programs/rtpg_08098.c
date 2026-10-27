int test_func(void) {
    int v0 = 40;
    int v1 = 24;
    int v2 = 38;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v1;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }

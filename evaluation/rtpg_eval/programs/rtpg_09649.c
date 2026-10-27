int test_func(void) {
    int v0 = 66;
    int v1 = 37;
    int v2 = 10;
    int v3 = 91;
    int i;
    v3 = v3 + v2;
    for (i = 0; i < 10; i++) {
        v3 = v3 + v3;
    }
    v2 = v2 - v3;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }

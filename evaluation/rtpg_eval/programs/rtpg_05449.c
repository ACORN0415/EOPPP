int test_func(void) {
    int v0 = 45;
    int v1 = 29;
    int v2 = 45;
    int v3 = 30;
    int v4 = 24;
    int v5 = 1;
    int v6 = 33;
    int i;
    v6 = 2;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    v3 = v3 & v4;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }

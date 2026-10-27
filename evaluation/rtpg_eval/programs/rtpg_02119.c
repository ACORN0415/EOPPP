int test_func(void) {
    int v0 = 33;
    int v1 = 55;
    int v2 = 3;
    int v3 = 36;
    int v4 = 41;
    int v5 = 55;
    int v6 = 80;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }

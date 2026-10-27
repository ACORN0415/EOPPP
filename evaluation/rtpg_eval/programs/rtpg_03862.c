int test_func(void) {
    int v0 = 80;
    int v1 = 43;
    int v2 = 90;
    int v3 = 82;
    int v4 = 88;
    int v5 = 26;
    int i;
    v1 = v1 * 9;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }

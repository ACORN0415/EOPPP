int test_func(void) {
    int v0 = 24;
    int v1 = 31;
    int v2 = 40;
    int v3 = 30;
    int i;
    if (v3 > v1) { v3 = v1; }
    v1 = v1 + v3;
    v3 = v3 * 9;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }

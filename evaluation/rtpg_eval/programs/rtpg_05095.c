int test_func(void) {
    int v0 = 60;
    int v1 = 23;
    int v2 = 35;
    int v3 = 53;
    int v4 = 73;
    int i;
    v0 = v0 * 4;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 9;
    int v1 = 97;
    int v2 = 88;
    int v3 = 49;
    int v4 = 36;
    int i;
    v3 = v3 * 4;
    v4 = 6;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }

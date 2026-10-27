int test_func(void) {
    int v0 = 21;
    int v1 = 6;
    int v2 = 91;
    int v3 = 79;
    int v4 = 92;
    int i;
    v4 = v4 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }

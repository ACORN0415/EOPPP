int test_func(void) {
    int v0 = 28;
    int v1 = 72;
    int v2 = 71;
    int v3 = 86;
    int v4 = 82;
    int i;
    v1 = v1 - v3;
    v2 = v2 + v3;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }

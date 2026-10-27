int test_func(void) {
    int v0 = 45;
    int v1 = 19;
    int v2 = 27;
    int v3 = 37;
    int v4 = 55;
    int v5 = 66;
    int i;
    v1 = v1 * 4;
    v4 = v4 + v1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }

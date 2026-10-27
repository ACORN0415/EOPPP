int test_func(void) {
    int v0 = 18;
    int v1 = 0;
    int v2 = 22;
    int v3 = 26;
    int i;
    v1 = v1 - v2;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }

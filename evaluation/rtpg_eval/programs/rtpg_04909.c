int test_func(void) {
    int v0 = 97;
    int v1 = 52;
    int v2 = 53;
    int v3 = 88;
    int v4 = 65;
    int i;
    v0 = v0 - v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }

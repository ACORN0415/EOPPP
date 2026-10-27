int test_func(void) {
    int v0 = 22;
    int v1 = 65;
    int v2 = 89;
    int i;
    v1 = 7;
    v0 = v0 * 2;
    v1 = v1 ^ v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }

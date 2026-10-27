int test_func(void) {
    int v0 = 67;
    int v1 = 58;
    int v2 = 68;
    int i;
    v2 = v2 + v1;
    if (v2 > v0) { v2 = v0; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }

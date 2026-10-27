int test_func(void) {
    int v0 = 60;
    int v1 = 54;
    int v2 = 69;
    int i;
    v1 = 11;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }

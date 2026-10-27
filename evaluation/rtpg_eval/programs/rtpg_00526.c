int test_func(void) {
    int v0 = 50;
    int v1 = 94;
    int v2 = 17;
    int v3 = 90;
    int i;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }

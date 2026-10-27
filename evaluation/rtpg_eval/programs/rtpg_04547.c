int test_func(void) {
    int v0 = 80;
    int v1 = 90;
    int v2 = 12;
    int i;
    v0 = 6;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }

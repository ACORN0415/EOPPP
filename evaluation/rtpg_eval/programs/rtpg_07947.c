int test_func(void) {
    int v0 = 100;
    int v1 = 84;
    int v2 = 24;
    int v3 = 39;
    int v4 = 85;
    int i;
    v4 = v4 - v1;
    v3 = v3 + v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }

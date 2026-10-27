int test_func(void) {
    int v0 = 64;
    int v1 = 93;
    int v2 = 56;
    int v3 = 50;
    int v4 = 41;
    int v5 = 17;
    int v6 = 62;
    int i;
    v1 = 21;
    v4 = v4 & v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }

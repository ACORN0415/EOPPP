int test_func(void) {
    int v0 = 8;
    int v1 = 90;
    int v2 = 13;
    int v3 = 45;
    int v4 = 97;
    int v5 = 96;
    int v6 = 81;
    int v7 = 77;
    int i;
    v6 = v6 * 3;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    v2 = v2 & v1;
    return v0;
}
int main(void) { return test_func(); }

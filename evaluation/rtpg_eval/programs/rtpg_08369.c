int test_func(void) {
    int v0 = 7;
    int v1 = 87;
    int v2 = 5;
    int v3 = 10;
    int v4 = 98;
    int v5 = 8;
    int i;
    v1 = v1 * 8;
    v3 = v3 + v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }

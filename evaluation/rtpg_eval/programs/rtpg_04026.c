int test_func(void) {
    int v0 = 25;
    int v1 = 0;
    int v2 = 43;
    int v3 = 47;
    int v4 = 67;
    int v5 = 10;
    int v6 = 56;
    int v7 = 75;
    int i;
    v3 = v3 - v0;
    v1 = v1 ^ v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }

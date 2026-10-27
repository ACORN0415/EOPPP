int test_func(void) {
    int v0 = 32;
    int v1 = 96;
    int v2 = 67;
    int v3 = 23;
    int v4 = 55;
    int v5 = 28;
    int v6 = 64;
    int v7 = 35;
    int i;
    v5 = v5 + v2;
    v7 = 5;
    v6 = v6 / (v2 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }

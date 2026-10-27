int test_func(void) {
    int v0 = 84;
    int v1 = 88;
    int v2 = 14;
    int v3 = 51;
    int v4 = 72;
    int v5 = 74;
    int v6 = 35;
    int v7 = 67;
    int i;
    v7 = 55;
    v5 = v5 | v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }

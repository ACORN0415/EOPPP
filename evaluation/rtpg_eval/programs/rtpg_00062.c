int test_func(void) {
    int v0 = 46;
    int v1 = 13;
    int v2 = 75;
    int v3 = 48;
    int v4 = 56;
    int v5 = 49;
    int v6 = 51;
    int v7 = 32;
    int i;
    for (i = 0; i < 6; i++) {
        v4 = v4 + v2;
    }
    v7 = v7 - v5;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }

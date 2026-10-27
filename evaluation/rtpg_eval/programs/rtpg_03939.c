int test_func(void) {
    int v0 = 13;
    int v1 = 67;
    int v2 = 4;
    int v3 = 58;
    int v4 = 94;
    int v5 = 71;
    int v6 = 41;
    int v7 = 45;
    int i;
    for (i = 0; i < 17; i++) {
        v6 = v6 + v7;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }

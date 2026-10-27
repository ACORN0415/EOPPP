int test_func(void) {
    int v0 = 85;
    int v1 = 41;
    int v2 = 17;
    int v3 = 20;
    int v4 = 22;
    int v5 = 9;
    int v6 = 11;
    int i;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v5;
    }
    v4 = 95;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }

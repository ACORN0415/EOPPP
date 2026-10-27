int test_func(void) {
    int v0 = 30;
    int v1 = 41;
    int v2 = 90;
    int v3 = 48;
    int v4 = 53;
    int v5 = 85;
    int v6 = 6;
    int v7 = 63;
    int i;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v1;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    return v0;
}
int main(void) { return test_func(); }

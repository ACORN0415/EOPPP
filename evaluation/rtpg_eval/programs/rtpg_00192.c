int test_func(void) {
    int v0 = 59;
    int v1 = 21;
    int v2 = 33;
    int v3 = 38;
    int v4 = 86;
    int v5 = 55;
    int v6 = 51;
    int v7 = 50;
    int i;
    v6 = v6 + v4;
    v2 = v2 ^ v7;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }

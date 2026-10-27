int test_func(void) {
    int v0 = 26;
    int v1 = 86;
    int v2 = 45;
    int v3 = 70;
    int v4 = 8;
    int v5 = 38;
    int v6 = 58;
    int v7 = 36;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 80;
    int v1 = 29;
    int v2 = 54;
    int v3 = 63;
    int v4 = 96;
    int v5 = 84;
    int v6 = 70;
    int i;
    v3 = 29;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }

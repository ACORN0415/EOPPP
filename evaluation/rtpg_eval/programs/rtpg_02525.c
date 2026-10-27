int test_func(void) {
    int v0 = 55;
    int v1 = 83;
    int v2 = 46;
    int v3 = 19;
    int v4 = 8;
    int v5 = 84;
    int v6 = 53;
    int v7 = 73;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }

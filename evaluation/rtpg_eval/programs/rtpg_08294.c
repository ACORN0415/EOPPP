int test_func(void) {
    int v0 = 65;
    int v1 = 55;
    int v2 = 12;
    int v3 = 55;
    int v4 = 15;
    int v5 = 5;
    int v6 = 98;
    int v7 = 80;
    int i;
    v2 = 76;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }

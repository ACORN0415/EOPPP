int test_func(void) {
    int v0 = 90;
    int v1 = 41;
    int v2 = 30;
    int v3 = 12;
    int v4 = 85;
    int v5 = 70;
    int v6 = 5;
    int v7 = 81;
    int i;
    v2 = 15;
    if (v6 > v7) { v6 = v7; }
    v7 = v7 * 3;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }

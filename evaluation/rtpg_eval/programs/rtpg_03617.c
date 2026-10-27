int test_func(void) {
    int v0 = 93;
    int v1 = 45;
    int v2 = 90;
    int v3 = 60;
    int v4 = 9;
    int v5 = 58;
    int v6 = 17;
    int v7 = 9;
    int i;
    if (v6 > v7) { v6 = v7; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }

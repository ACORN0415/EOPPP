int test_func(void) {
    int v0 = 47;
    int v1 = 31;
    int v2 = 3;
    int v3 = 70;
    int v4 = 1;
    int v5 = 30;
    int v6 = 94;
    int v7 = 78;
    int i;
    v2 = 85;
    if (v0 > v6) { v0 = v6; }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }

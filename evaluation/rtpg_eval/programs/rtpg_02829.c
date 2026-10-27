int __arr_2829[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 52;
    int v2 = 4;
    int v3 = 65;
    int v4 = 1;
    int v5 = 66;
    int v6 = 26;
    int i;
    for (i = 0; i < 10; i++) { __arr_2829[i] = v0 + i; }
    for (i = 0; i < 9; i++) {
        v2 = v2 + v2;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }

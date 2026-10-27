int __arr_8725[10];
int test_func(void) {
    int v0 = 9;
    int v1 = 35;
    int v2 = 79;
    int v3 = 80;
    int v4 = 60;
    int v5 = 32;
    int v6 = 77;
    int v7 = 5;
    int i;
    v2 = 35;
    v0 = v0 + v3;
    for (i = 0; i < 10; i++) { __arr_8725[i] = v6 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    return v0;
}
int main(void) { return test_func(); }

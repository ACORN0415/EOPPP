int __arr_843[10];
int test_func(void) {
    int v0 = 22;
    int v1 = 3;
    int v2 = 75;
    int v3 = 67;
    int v4 = 39;
    int v5 = 80;
    int i;
    for (i = 0; i < 10; i++) { __arr_843[i] = v3 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }

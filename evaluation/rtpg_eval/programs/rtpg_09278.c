int __arr_9278[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 34;
    int v2 = 1;
    int v3 = 37;
    int v4 = 38;
    int i;
    for (i = 0; i < 10; i++) { __arr_9278[i] = v2 + i; }
    v4 = v4 - v2;
    v3 = v3 & v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }

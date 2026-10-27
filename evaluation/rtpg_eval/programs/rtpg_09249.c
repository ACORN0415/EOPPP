int __arr_9249[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 59;
    int v2 = 13;
    int v3 = 39;
    int v4 = 75;
    int i;
    if (v3 > v2) { v3 = v2; }
    for (i = 0; i < 10; i++) { __arr_9249[i] = v0 + i; }
    v1 = 41;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }

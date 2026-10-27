int __arr_4880[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 63;
    int v2 = 12;
    int v3 = 100;
    int i;
    for (i = 0; i < 10; i++) { __arr_4880[i] = v0 + i; }
    v2 = v2 | v1;
    return v0;
}
int main(void) { return test_func(); }

int __arr_4787[10];
int test_func(void) {
    int v0 = 2;
    int v1 = 27;
    int v2 = 52;
    int v3 = 79;
    int i;
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 10; i++) { __arr_4787[i] = v2 + i; }
    v3 = v3 + v1;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }

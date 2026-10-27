int __arr_9451[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 32;
    int v2 = 54;
    int i;
    if (v1 > v0) { v1 = v0; }
    for (i = 0; i < 19; i++) {
        v1 = v1 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_9451[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }

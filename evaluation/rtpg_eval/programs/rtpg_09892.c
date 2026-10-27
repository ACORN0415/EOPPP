int __arr_9892[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 14;
    int v2 = 11;
    int v3 = 97;
    int i;
    for (i = 0; i < 10; i++) { __arr_9892[i] = v2 + i; }
    for (i = 0; i < 8; i++) {
        v0 = v0 + v0;
    }
    v2 = 5;
    return v0;
}
int main(void) { return test_func(); }

int __arr_3859[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 38;
    int v2 = 65;
    int i;
    v2 = v2 - v1;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_3859[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }

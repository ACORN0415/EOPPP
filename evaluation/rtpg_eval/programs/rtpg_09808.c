int __arr_9808[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 59;
    int v2 = 81;
    int i;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_9808[i] = v1 + i; }
    v2 = v2 + v0;
    v2 = v2 - v1;
    return v0;
}
int main(void) { return test_func(); }

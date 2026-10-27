int __arr_9113[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 86;
    int v2 = 0;
    int i;
    for (i = 0; i < 10; i++) { __arr_9113[i] = v1 + i; }
    v1 = v1 + v0;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v1;
    }
    v1 = v1 - v2;
    return v0;
}
int main(void) { return test_func(); }

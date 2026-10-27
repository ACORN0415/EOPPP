int __arr_9099[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 17;
    int v2 = 96;
    int v3 = 84;
    int v4 = 17;
    int i;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v1;
    }
    v4 = v4 - v0;
    for (i = 0; i < 10; i++) { __arr_9099[i] = v4 + i; }
    v1 = v1 + v2;
    return v0;
}
int main(void) { return test_func(); }

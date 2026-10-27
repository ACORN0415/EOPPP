int test_func(void) {
    int v0 = 29;
    int v1 = 55;
    int v2 = 61;
    int i;
    v1 = v1 + v1;
    for (i = 0; i < 17; i++) {
        v2 = v2 + v2;
    }
    v2 = 80;
    return v0;
}
int main(void) { return test_func(); }
